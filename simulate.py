# import main
import sys
import globVar
import Player
import utils
import board
import Canvas
from multiprocessing import Pool, Process, Value, Queue, Lock, cpu_count
import os

W_victories = 0
b_victories = 0
N = 0

def run(total_num_moves, games_played, W_v, b_v, lock, i):
    # lock.acquire()
    # draw_status(i, N)
    # draw_score(i, W_v, b_v, total_num_moves, games_played)
    # lock.release()

    board.populate()
    playing = True
    while playing:
        if (globVar.playerCount % 2) == 0:
            globVar.player = "W"
        else:
            globVar.player = "b"

        Player.turn()
        globVar.playerCount += 1
        playing = not utils.checkWin()

        lock.acquire()
        print(".", flush = True, end = "")
        # print(name, flush = True, end = "")
        lock.release()
        total_num_moves.value += 1
    games_played.value += 1
    W_v.value += W_victories
    b_v.value += b_victories

def begin(n):
    global N
    N = n
    W_v = Value('i', 0)
    b_v = Value('i', 0)
    total_num_moves = Value('i', 0)
    games_played = Value('i', 0)
    lock = Lock()

    procs = []
    for i in range(int(n)):
        procs.append(Process(target = run, args = (total_num_moves, games_played, W_v, b_v, lock, i)))

    for p in procs:
        p.start()
    for p in procs:
        p.join()

    # print("ABOUT TO POOL")
    # pool = Pool(processes = 4)
    # print(pool.map(run, ()))
    # print("DONE")
    # input()
    # _thread.start_new_thread(run, ())
    set_globals()
    # os.system("python3 simulate.py")

    # for i in range(int(n)):
        # board.populate()

        # run()
    Canvas.clear()
    print("\n Done! Below is the final score.")
    draw_score(int(n) - 1, W_v, b_v, total_num_moves, games_played)

def draw_status(i, n):
    Canvas.clear()
    print("\n Running simulation " + str(i + 1) + " of " + str(n) + ".")


def draw_score(i, W_v, b_v, total_num_moves, games_played):
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

    print("\n Average number of moves: ", end = "")
    if i == 0:
        print("0")
    else:
        avg_moves = round(total_num_moves.value / (i), 2)
        print(avg_moves)
    print("\n Played " + str(games_played.value) + " games.")


def set_globals():
    globVar.simulation = True
    globVar.numPlayers = 0
    globVar.slow_speed = False
    globVar.ready = True

if __name__ == "__main__":
    set_globals()
    run()
