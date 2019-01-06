# import main
import sys
import globVar
import Player
import utils
import board
import Canvas

W_victories = 0
b_victories = 0
total_num_moves = 0

def run():
    global total_num_moves, num_moves
    playing = True
    nm = 0
    while playing:
        if (globVar.playerCount % 2) == 0:
            globVar.player = "W"
        else:
            globVar.player = "b"

        Player.turn()
        globVar.playerCount += 1
        playing = not utils.checkWin()

        print(".", flush = True, end = "")
        total_num_moves += 1
        nm += 1
    nm = 0

def begin(n):
    for i in range(int(n)):
        board.populate()
        draw_status(i, n)
        draw_score(i)
        run()
    Canvas.clear()
    print("\n Done! Below is the final score.")
    draw_score(int(n) - 1)

def draw_status(i, n):
    Canvas.clear()
    global W_victories, b_victories
    print("\n Running simulation " + str(i + 1) + " of " + str(n) + ".")


def draw_score(i):
    global W_victories, b_victories, total_num_moves, num_moves
    print("\n WHITE : " + str(W_victories) + "  |  ", end = "")
    print("BLACK : " + str(b_victories))
    total = W_victories + b_victories
    if total == 0:
        print("   0.0%           0.0%")
    else:
        W_r = round(((W_victories / total) * 100), 2)
        b_r = round(((b_victories / total) * 100), 2)
        print("   " + str(W_r) + "%", end = "")
        print("         " + str(b_r) + "%")

    print("Average number of moves: ", end = "")
    if i == 0:
        print("0")
    else:
        avg_moves = round(total_num_moves / (i), 2)
        print(avg_moves)
