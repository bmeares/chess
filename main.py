"""
This is the main module for my chess game.
"""


import random
import Canvas
import utils
import board
import Player
import globVar

def main():

    running = Canvas.startScreen()
    # TODO readSave
    while(running):
        running = state()


def state():

    playing = True
    playerCount = 0

    while playing:
        if (playerCount % 2) == 0:
            globVar.player = "W"
        else:
            globVar.player = "b"
        Player.turn()
        playerCount += 1
        #TODO clear and write save

    return playing



if __name__ == "__main__":
    main()
