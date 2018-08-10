import random
import Canvas
import utils

numPlayers = -1
playerCount = 0

def main():
#    Canvas.startScreen()
    Canvas.clear()
    import pieces
    tmp = pieces.Pawn("white", "pawn")
    tmp.des = True
    print(tmp)


def state():
    playing = True

    return playing


if __name__ == "__main__":
    main()
