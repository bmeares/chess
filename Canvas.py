import os
import platform
import random

def startScreen():
    global numPlayers

    clear()
    print("\n Welcome to Chess: Python Edition!\n\n")
    numPlayers = int(input(" How many players for this game?\n (0, 1, or 2): "))

    while numPlayers < 0 or numPlayers > 2:
        numPlayers = int(input("\n Please choose between 0 and 2: "))

    if numPlayers < 2:
        random.seed(a=None)

    return True

def clear():
    if platform.system() == "Linux":
        os.system("clear")
    if platform.system() == "Darwin":
        os.system("clear")
    elif platform.system() == "Windows":
        os.system("CLS")
    else:
        print("\033c")
