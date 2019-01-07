"""
This module contains functions that display text to the screen, such as error
messages and the game board.
"""

import colors
import os
import platform
import random
import board
import globVar
import sys
import utils
from save import *
import simulate

def drawBoard():
    if globVar.simulation:
        return
    if globVar.unicode or globVar.limited_unicode:
        drawBoard_unicode()
    else:
        drawBoard_ascii()

    remaining()

def drawBoard_ascii():
    clear()
    nowPlaying_ascii()
    numLabel = 8
    letterLabel = 'A'

    print("\n     ", end = "")
    for i in range(8):
        print(letterLabel + " ", end = "")
        letterLabel = chr(ord(letterLabel) + 1)

    print("\n    ",end="")
    for i in range(18):
        print("_",end="")

    print("\n", end = "")
    for i in range(8):
        print(' {}  |'.format(numLabel), end = "")
        for j in range(8):
            print(board.Grid(i, j), end = "")
        print("|",end="")
        numLabel -= 1
        print("\n", end = "")
    print("    ",end="")
    for i in range(18):
        print("-",end="")
    print("\n",end="")


def drawBoard_unicode():
    clear()
    out = ""
    out_1 = nowPlaying_unicode()
    out_2 = ""

    numLabel = 8
    letterLabel = 'A'
    out_2 += colors.normal("\n     ")
    for i in range(8):
        out_2 += colors.normal(str(letterLabel + " "))
        letterLabel = chr(ord(letterLabel) + 1)

    out_2 += "    \n    "
    for i in range(21):
        out_2 += " "

    out_2 += "\n"
    for i in range(8):
        out_2 += '  {}  '.format(numLabel)
        for j in range(8):
            # out_2 += colors.RESET
            out_2 += colors.normal(str(board.Grid(i, j)))
        numLabel -= 1
        out_2 += colors.RESET + colors.normal("    \n")
    for i in range(25):
        out_2 += colors.normal(" ")
    out_2 += colors.normal("\n")
    out = out_1 + out_2 + colors.RESET
    print(out, end = "")

def nowPlaying():
    if globVar.unicode or globVar.limited_unicode:
        nowPlaying_unicode()
    else:
        nowPlaying_ascii()

def nowPlaying_ascii():
    print(" ",end="")
    for i in range(23):
        print("-",end="")
    if( (globVar.w_check and globVar.player == "W") or
    (globVar.b_check and globVar.player == "b")):
        print("\n |       CHECK!    ", globVar.player, " |")
    elif globVar.checkmate:
        print("\n |      CHECKMATE!     |")
    else:
        print("\n |    NOW PLAYING: ", globVar.player, " |")
    print(" ",end="")
    for i in range(23):
        print("-",end="")

def nowPlaying_unicode():
    out = ""
    out_1 = ""
    out_1 += " "
    out_2 = ""
    p = ""
    if globVar.player == "W":
        p += colors.w_king
    elif globVar.player == "b":
        p += colors.b_king

    out_1 += "╔"
    for i in range(21):
        out_1 += "═"
    out_1 += "╗ "
    if( (globVar.w_check and globVar.player == "W") or
    (globVar.b_check and globVar.player == "b")):
        out_1 += "\n ║" + "       CHECK!    " + p
        out_2 += "   ║ \n"
    elif globVar.checkmate:
        out_1 += "\n ║" + "      CHECKMATE!     "
        out_2 += "║ \n"
    else:
        out_1 += "\n ║" + "    NOW PLAYING:  " + p
        out_2 += "  ║ \n"
    out_2 += " ╚"
    for i in range(21):
        out_2 += "═"
    out_2 += "╝ "
    out = colors.normal(out_1) + colors.normal(out_2)
    return out + colors.RESET

def pawn_to_new():
    drawBoard()
    while True:
        try:
            print(" 1. Rook    2. Knight")
            print(" 3. Bishop  4. Queen")
            choice = input("\n Choose a new piece: ")
            choices(choice)
        except ValueError:
            pawnError()
            continue
        if (choice == "" or len(choice) > 1 or not choice.isdigit()
        or int(choice) < 1 or int(choice) > 4):
            pawnError()
            continue
        else:
            break
    return int(choice)

def remaining():
    if globVar.unicode or globVar.limited_unicode:
        remaining_unicode()
    else:
        remaining_ascii()

def remaining_ascii():
    w_pawn_count = utils.typeCounter("pawn", "W")
    w_rook_count = utils.typeCounter("rook", "W")
    w_knight_count = utils.typeCounter("knight", "W")
    w_bishop_count = utils.typeCounter("bishop", "W")
    w_queen_count = utils.typeCounter("queen", "W")
    w_king_count = utils.typeCounter("king", "W")
    b_pawn_count = utils.typeCounter("pawn", "b")
    b_rook_count = utils.typeCounter("rook", "b")
    b_knight_count = utils.typeCounter("knight", "b")
    b_bishop_count = utils.typeCounter("bishop", "b")
    b_queen_count = utils.typeCounter("queen", "b")
    b_king_count = utils.typeCounter("king", "b")

    print(" ",end="")
    print("       REMAINING:\n ", end="")
    for i in range(23):
        print("-",end="")
    print("\n   White:   |   Black:")
    print("  {}P'  {}R'  |  {}p.  {}r.".format(w_pawn_count, w_rook_count, b_pawn_count, b_rook_count))
    print("  {}N'  {}B'  |  {}n.  {}b.".format(w_knight_count, w_bishop_count, b_knight_count, b_bishop_count))
    print("  {}Q'  {}K'  |  {}q.  {}k.".format(w_queen_count, w_king_count, b_queen_count, b_king_count))

    print(" ",end="")
    for i in range(23):
        print("-",end="")
    print("\n")

def remaining_unicode():
    w_pawn_count = utils.typeCounter("pawn", "W")
    w_rook_count = utils.typeCounter("rook", "W")
    w_knight_count = utils.typeCounter("knight", "W")
    w_bishop_count = utils.typeCounter("bishop", "W")
    w_queen_count = utils.typeCounter("queen", "W")
    w_king_count = utils.typeCounter("king", "W")
    b_pawn_count = utils.typeCounter("pawn", "b")
    b_rook_count = utils.typeCounter("rook", "b")
    b_knight_count = utils.typeCounter("knight", "b")
    b_bishop_count = utils.typeCounter("bishop", "b")
    b_queen_count = utils.typeCounter("queen", "b")
    b_king_count = utils.typeCounter("king", "b")

    out = ""
    temp_out = ""

    temp_out += "        REMAINING:       \n"
    out += colors.normal(temp_out)
    temp_out = colors.white_header("   White:   ")
    out += temp_out
    temp_out = colors.header_separator("│")
    out += temp_out + colors.RESET
    temp_out = colors.black_header("   Black:   ")
    out += temp_out + "\n"

    # print white pawn
    temp_out = colors.normal("  {} ".format(w_pawn_count))
    temp_out += colors.normal(colors.w_pawn)
    out += temp_out

    # print white rook
    temp_out = colors.normal("  {} ".format(w_rook_count))
    temp_out += colors.normal(colors.w_rook)
    temp_out += colors.normal("  │")
    out += temp_out

    # print black pawn
    temp_out = colors.normal("  {} ".format(b_pawn_count))
    temp_out += colors.normal(colors.b_pawn)
    out += temp_out

    # print black rook
    temp_out = colors.normal("  {} ".format(b_rook_count))
    temp_out += colors.normal(colors.b_rook)
    temp_out += colors.normal("  \n")
    out += temp_out

    ### ROW 2 ###

    # print white knight
    temp_out = colors.normal("  {} ".format(w_knight_count))
    temp_out += colors.normal(colors.w_knight)
    out += temp_out

    # print white bishop
    temp_out = colors.normal("  {} ".format(w_bishop_count))
    temp_out += colors.normal(colors.w_bishop)
    temp_out += colors.normal("  │")
    out += temp_out

    # print black knight
    temp_out = colors.normal("  {} ".format(b_knight_count))
    temp_out += colors.normal(colors.b_knight)
    out += temp_out

    # print black bishop
    temp_out = colors.normal("  {} ".format(b_bishop_count))
    temp_out += colors.normal(colors.b_bishop)
    temp_out += colors.normal("  \n")
    out += temp_out

    ### ROW 3 ###

    # print white queen
    temp_out = colors.normal("  {} ".format(w_queen_count))
    temp_out += colors.normal(colors.w_queen)
    out += temp_out

    # print white king
    temp_out = colors.normal("  {} ".format(w_king_count))
    temp_out += colors.normal(colors.w_king)
    temp_out += colors.normal("  │")
    out += temp_out

    # print black queen
    temp_out = colors.normal("  {} ".format(b_queen_count))
    temp_out += colors.normal(colors.b_queen)
    out += temp_out

    # print black king
    temp_out = colors.normal("  {} ".format(b_king_count))
    temp_out += colors.normal(colors.b_king)
    temp_out += colors.normal("  \n\n")
    out += temp_out

    print(out + colors.RESET, end = "")

    # print("  {} ♙  {} ♖  │  {} ♟  {} ♜".format(w_pawn_count, w_rook_count, b_pawn_count, b_rook_count))
    # print("  {} ♘  {} ♗  │  {} ♞  {} ♝".format(w_knight_count, w_bishop_count, b_knight_count, b_bishop_count))
    # print("  {} ♕  {} ♔  │  {} ♛  {} ♚".format(w_queen_count, w_king_count, b_queen_count, b_king_count))

def startScreen():
    board.populate()
    title = "Welcome to Chess: Python Edition!\n\n" + " How many players for this game?\n (0, 1, or 2)"
    options = []
    n = validOption(0, 2, title, options)

    if globVar.simulation:
        clear()
        print("Running...")
        return True
    globVar.numPlayers = int(n)

    if globVar.numPlayers < 2:
        random.seed(a=None)
        aggressiveMenu()
    if globVar.numPlayers == 0:
        globVar.noPlayers = True
        speedMenu()

    formatMenu()
    globVar.ready = True

    return True

def validOption(min, max, title, options):
    while True:
        try:
            clear()
            print("\n " + title + "\n")
            for i in range(len(options)):
                print("  " + str(i + 1) + ". " + str(options[i]))

            n = input("\n Option: ")
        except ValueError:
            print("\n Error!")
            input("\n Press Enter to continue.")
            continue

        if choices(n):
            exit()

        if (not n.isdigit()) or (n.isdigit() and int(n) < min) or (n.isdigit() and int(n) > max):
            print("\n Please choose an option.")
            print("\n Press Enter to continue.")
            input("")
            continue
        else:
            return n


def speedMenu():
    title = "At what speed would you like the AI to play?"
    options = []
    options.append("Slow enough to watch the game")
    options.append("Full speed ahead")
    n = validOption(1, 2, title, options)

    if int(n) == 1:
        globVar.slow_speed = True
    else:
        globVar.slow_speed = False

def aggressive_message():
    clear()
    print("\n What kind of an AI do you want?")
    print("\n 1. Normal")
    print(" 2. Aggressive")
    print(" 3. Chill")

def aggressiveMenu():
    title = "What kind of an AI do you want?"
    options = []
    options.append("Normal")
    options.append("Aggressive")
    options.append("Chill")

    n = validOption(1, len(options), title, options)

    if int(n) == 1:
        globVar.aggressive = False
        globVar.chill = False
    elif int(n) == 2:
        globVar.aggressive = True
        globVar.chill = False
    else:
        globVar.aggressive = False
        globVar.chill = True

def formatMenu():
    title = "How do you want the game to look?"
    options = []
    options.append("Fancy\n     (some graphics via Unicode / ANSI trickery)\n")
    options.append("Sorta fancy\n     (use ASCII for pieces, keep colors)\n")
    options.append("Classic\n     (all ASCII, i.e. use this when all else fails)\n")

    n = validOption(1, len(options), title, options)

    globVar.unicode = (int(n) == 1)
    globVar.limited_unicode = (int(n) == 2)
    if globVar.limited_unicode:
        colors.limited_pieces() # change unicode pieces to letters

def simulateMenu():
    clear()
    globVar.simulation = True
    globVar.numPlayers = 0
    globVar.slow_speed = False
    max_sims = 1000000
    title = "How many simulations do you want to run?\n (between 1 and " + str(max_sims) + ")"
    options = []
    n = validOption(1, max_sims, title, options)
    aggressiveMenu()
    globVar.ready = True
    simulate.begin(n)

def chooseAvailableMessage():
    errorSeparator()
    print("\n Please choose a piece with available moves.")
    pressEnter()

def getouttacheckMessage():
    errorSeparator()
    print("\n Choose a move to get out of check.")
    pressEnter()

def pickValidMoveMessage():
    errorSeparator()
    print("\n Please pick a valid move.")
    pressEnter()

def pawnError():
    errorSeparator()
    print("\n Please pick a valid piece.")
    pressEnter()

def pressEnter():
    print(" Press Enter to continue.")
    input("")
    drawBoard()

def selectError():
    errorSeparator()
    print("\n Please choose a square with one of your pieces.")
    pressEnter()

def colError():
    errorSeparator()
    print("\n Please choose a valid column.")
    pressEnter()

def rowError():
    errorSeparator()
    print("\n Please choose a valid row.")
    pressEnter()

def errorSeparator():
    print("\n ",end="")
    for i in range(43):
        print("-",end="")

def clear():
    if platform.system() == "Linux" or platform.system() == "Darwin":
        os.system("clear")
    elif platform.system() == "Windows":
        os.system("CLS")
    else:
        print("\033c")

def chooseCol():
    while True:
        try:
            choice = input("\n Choose a column (letter): ")
            choices(choice)
        except ValueError:
            colError()
            continue
        if (choice == "" or len(choice) > 1 or
        ord(choice.upper()) < ord('A') or ord(choice.upper()) > ord('H')):
            colError()
            continue
        else:
            break
    return choice

def chooseRow():
    while True:
        try:
            choice = input("\n Choose a row (number): ")
            choices(choice)
        except ValueError:
            rowError()
            continue

        if not choice.isdigit() or choice == "":
            rowError()
            continue

        elif int(choice) < 1 or int(choice) > 8:
            rowError()
            continue
        else:
            break

    return int(choice)

def chooseMove(availMovesL):
    while True:
        try:
            choice = input("\n Choose a move (number): ")
            choices(choice)
        except ValueError:
            pickValidMoveMessage()
            continue

        if not choice.isdigit() or choice == "":
            pickValidMoveMessage()
            continue

        elif (int(choice) < 1) or (int(choice) > availMovesL):
            pickValidMoveMessage()
            continue
        else:
            break

    return int(choice)

def choices(choice):
    if choice.upper() == "Q":
        quit()
        return True
    elif choice.upper() == "R":
        board.populate()
        clear()
        print("\n The board has been reset.")
        pressEnter()
        return True
    elif choice.upper() == "L":
        utils.readSave()
        clear()
        print("\n The last save has been loaded.")
        pressEnter()
        return True
    elif choice.upper() == "S":
        simulateMenu()
        return True
    else:
        return False

def quit():
    clear()
    print("\n Would you like to save your game? ", end="")
    y = yesNo()
    clear()
    if y:
        utils.writeSave()
    else:
        utils.delete_save()
    sys.exit(0)

def yesNo():
    y = input("(y/n): ")
    if (y.upper() == "Y" or y.upper() == "YES"):
        return True
    else:
        return False

def loadSave():
    clear()
    print("\n Save detected. Load previous game? ", end="")
    if yesNo():
        board.populate()
        read.readSave()
    else:
        # board.populate()
        startScreen()

def not_ready_error():
    clear()
    print("\n Oops! Game was not saved properly.")
    input("\n Press Enter to load a new game.")
    startScreen()
