"""
This is the main module for my chess game.
"""


import random
import Canvas
import utils
import board
import Player
import globVar
import colors
import pathlib
from save import *
import sys
def main():
    if len(sys.argv):
        parse_args(sys.argv)

    path = pathlib.Path("chess.save")
    if path.exists():
        Canvas.loadSave()
        running = True
    else:
        running = Canvas.startScreen()

    while(running):
        running = state()

    utils.delete_save()


def state():

    playing = True

    while playing:
        if (globVar.playerCount % 2) == 0:
            globVar.player = "W"
        else:
            globVar.player = "b"

        Player.turn()
        globVar.playerCount += 1
        playing = not utils.checkWin()
        if globVar.numPlayers > 0:
            utils.clearSave()
            write.writeSave()

    return playing

def parse_args(args):
    args.pop(0) # remove script arg
    s = "".join(args)
    globVar.show_all_menus = ("m" in s)

    ## GRAPHICS
    if ("a" in s):
        globVar.unicode = False
        globVar.limited_unicode = False

    if ("l" in s):
        globVar.unicode = False
        globVar.limited_unicode = True

    if ("u" in s):
        globVar.unicode = True
        globVar.limited_unicode = False

    if globVar.limited_unicode:
        colors.limited_pieces()

    # Game speed
    globVar.slow_speed = not ("f" in s)
    if ("s" in s):
        globVar.slow_speed = True

    # AI
    if ("n" in s):
        globVar.chill = False
        globVar.aggressive = False
    if ("c" in s):
        globVar.chill = True
        globVar.aggressive = False
    if ("g" in s):
        globVar.chill = False
        globVar.aggressive = True

    # GAME MODES
    if ("0" in s):
        globVar.numPlayers = 0
    elif ("1" in s):
        globVar.numPlayers = 1
    elif ("2" in s):
        globVar.numPlayers = 2

    if ("i" in s):
        globVar.simulation = True
        globVar.numPlayers = 0
        Canvas.simulateMenu()
        exit()

    if ("h" in s):
        Canvas.help()
        exit()

if __name__ == "__main__":
    main()
