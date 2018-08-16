"""
This module contains functions that display text to the screen, such as error
messages and the game board.
"""

import os
import platform
import random
import board
import globVar
import sys
import utils

def drawBoard():
    clear()

    nowPlaying()

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
#    print("\n", end = "")
    print("    ",end="")
    for i in range(18):
        print("¯",end="")
    print("\n",end="")

def nowPlaying():
    print(" ",end="")
    for i in range(23):
        print("-",end="")
    if globVar.w_check or globVar.b_check:
        print("\n |       CHECK!    ", globVar.player, " |")
    else:
        print("\n |    NOW PLAYING: ", globVar.player, " |")
    print(" ",end="")
    for i in range(23):
        print("-",end="")

def startScreen():
    clear()
    print("\n Welcome to Chess: Python Edition!\n\n")
    globVar.numPlayers = int(input(" How many players for this game?\n (0, 1, or 2): "))

    while globVar.numPlayers < 0 or globVar.numPlayers > 2:
        globVar.numPlayers = int(input("\n Please choose between 0 and 2: "))

    if globVar.numPlayers < 2:
        random.seed(a=None)

    board.populate()

    return True

def chooseAvailableMessage():
    errorSeparator()
    print("\n Please choose a piece with available moves.")
    pressEnter()

def pickValidMoveMessage():
    errorSeparator()
    print("\n Please pick a valid move.")
    pressEnter()

def pressEnter():
    print(" Press Enter to try again.")
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
    if platform.system() == "Linux":
        os.system("clear")
    if platform.system() == "Darwin":
        os.system("clear")
    elif platform.system() == "Windows":
        os.system("CLS")
    else:
        print("\033c")

def chooseCol():
    while True:
        try:
            choice = input("\n Choose a column (letter): ")
        except ValueError:
            colError()
            continue
        if choice == "q":
            quit()
        elif (choice == "" or len(choice) > 1 or
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
        except ValueError:
            rowError()
            continue
        if choice == "q":
            quit()
        elif(int(choice) < 1 or int(choice) > 8 or choice == "" or not choice.isdigit()):
            rowError()
            continue
        else:
            break

    return int(choice)

def quit():
    clear()
    print("\n Would you like to save your game? ", end="")
    y = yesNo()
    clear()
    if y:
        utils.writeSave()
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
    y = yesNo()
    if y:
        board.populate()
        utils.readSave()
    else:
        board.populate()
