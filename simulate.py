import sys
import globVar
import Player
import utils
import board
import Canvas
# import multiprocessing.forking
import multiprocessing
import os
import sys
import colors
import platform

W_victories = 0
b_victories = 0
N = 0

def run(total_num_moves, games_played, W_v, b_v, lock, i, num):
    if platform.system() == "Windows":
        lock.acquire()
        progress(games_played, num)
        lock.release()

    board.populate()
    set_globals()
    playing = True
    while playing:
        if (globVar.playerCount % 2) == 0:
            globVar.player = "W"
        else:
            globVar.player = "b"

        Player.turn()
        globVar.playerCount += 1
        playing = not utils.checkWin()
        total_num_moves.value += 1
    games_played.value += 1
    W_v.value += W_victories
    b_v.value += b_victories
    lock.acquire()
    progress(games_played, num)
    draw_score(i, W_v, b_v, total_num_moves, games_played, num)
    lock.release()

def run_games(total_num_moves, games_played, W_v, b_v, lock, i, num, games_to_play):
    for g in range(games_to_play):
        run(total_num_moves, games_played, W_v, b_v, lock, i, num)

def begin(n):
    set_globals()
    global N
    N = n
    W_v = multiprocessing.Value('i', 0)
    b_v = multiprocessing.Value('i', 0)
    total_num_moves = multiprocessing.Value('i', 0)
    games_played = multiprocessing.Value('i', 0)
    num = multiprocessing.Value('i', int(n))
    lock = multiprocessing.Lock()

    counts = []
    for i in range(int(multiprocessing.cpu_count())):
        counts.append(0)

    dist = int(N)
    i = 0
    while dist > 0:
        counts[i % len(counts)] += 1
        i += 1
        dist -= 1

    procs = []
    for i in range(len(counts)):
        games_to_play = counts[i]
        p = multiprocessing.Process(target = run_games, args = (total_num_moves, games_played, W_v, b_v, lock, i, num, games_to_play))
        procs.append(p)
    
    progress(games_played, num)

    for p in procs:
        p.start()
    for p in procs:
        p.join()

    #  done = 0
    #  while done < int(N):
        #  for i in range(multiprocessing.cpu_count()):
            #  if done + i < int(N):
                #  procs[done + i].start()
        #  for i in range(multiprocessing.cpu_count()):
            #  if done + i < int(N):
                #  procs[done + i].join()
        #  done += multiprocessing.cpu_count()

    Canvas.clear()
    print("\n Done! Below is the final score.")
    draw_score(int(n), W_v, b_v, total_num_moves, games_played, num)
    Canvas.pressEnter()

def draw_status(i, n):
    Canvas.clear()
    print("\n Running simulation " + str(i + 1) + " of " + str(n) + ".")

def progress(games_played, num):
    Canvas.clear()
    global N
    title = "PROGRESS"
    buffer = int(os.get_terminal_size().columns / 2) - int(len(title) / 2)
    print("\n", end = "")
    for i in range(buffer):
        print(" ", end = "")
    print(colors.BOLD + title + colors.RESET)

    length = int((os.get_terminal_size().columns - 2) / 2)
    r_complete = games_played.value / int(num.value)
    num_to_draw = int(r_complete * length)

    print("\n " + colors.BRIGHT_GREEN_BG, end = "")
    for i in range(num_to_draw):
        print("  ", end = "")
    print(colors.RESET + colors.DULL_WHITE_BG, end = "")
    for i in range(length - num_to_draw):
        print("  ", end = "")
    print(colors.RESET)

    print("\n " + str(round(100 * r_complete, 2)) + "% ( " + str(games_played.value) + " / " + str(num.value) + " ) completed." )

def draw_score(i, W_v, b_v, total_num_moves, games_played, num):
    print("\n WHITE : " + str(W_v.value) + "  |  ", end = "")
    print("BLACK : " + str(b_v.value))
    total = int(W_v.value) + int(b_v.value)
    if total == 0:
        print("   0.0%           0.0%")
    else:
        W_r = round(((W_v.value / total) * 100), 2)
        b_r = round(((b_v.value / total) * 100), 2)
        print("   " + str(W_r) + "%", end = "")
        print("         " + str(b_r) + "%")

    print("\n Total number of moves: " + str(int(total_num_moves.value)), end = "")
    if games_played.value == int(N):
        print("\n Average number of moves: ", end = "")
        if i == 0:
            print(total_num_moves.value)
        else:
            avg_moves = round(total_num_moves.value / int(i), 2)
            print(avg_moves)
    print("\n Played " + str(games_played.value) + " games.")


def set_globals():
    globVar.simulation = True
    globVar.numPlayers = 0
    globVar.slow_speed = False
    globVar.ready = True

if __name__ == '__main__':
    multiprocessing.freeze_support()
