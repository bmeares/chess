"""
This module contains miscellaneous functions necessary to the function
of this program.
"""

import Canvas
import board
import globVar
import copy
from square import Square
from pieces import Piece

def runAgain():
    Canvas.clear()
    yes = False
    y = input("\n Run again? (y/n): ")

    if y == 'y' or y == 'Y':
        yes = True

    return yes

def hasMoves(availMoves):
    if len(availMoves) > 0:
        return True
    else:
        return False

def move(fromSqr, availMoves, choice):
    #TODO updateRemainingSqrs
    pc = copy.deepcopy(fromSqr.piece)
    pc.color = fromSqr.piece.color
    pc.type = fromSqr.piece.type

    toSqr = copy.deepcopy(availMoves[choice - 1])

    pc.row = toSqr.row
    pc.col = toSqr.col
    pc.selected = False

    # #turn off piece for fromSqr
    # board.Grid(fromSqr.row,fromSqr.col).pieceStatus = False
    # board.Grid(fromSqr.row,fromSqr.col).piece.color = "none"

    #reset availMoves
    for i in range(len(availMoves)):
        optionRow = availMoves[i].row
        optionCol = availMoves[i].col
        board.Grid(optionRow,optionCol).des = False
        board.Grid(optionRow,optionCol).piece.selected = False

    # update board with new piece
    board.uGrid(pc)

    #turn off piece for fromSqr
    board.Grid(fromSqr.row,fromSqr.col).pieceStatus = False
    board.Grid(fromSqr.row,fromSqr.col).piece.color = "none"

def r_c(x):
    running = True
    while running:
        running = False
        if x == 'c': # col
            choice = input("\n Choose a column (letter): ")

            if ord(choice.upper()) < ord('A') or ord(choice.upper()) > ord('H'):
                Canvas.colError()
                running = True

            choice = choice.upper()
            choice = ord(choice)
            choice -= 65

        else: # row
            choice = input("\n Choose a row (number): ")
            choice = int(choice)

            if int(choice) < 1 or int(choice) > 8:
                Canvas.rowError()

            choice = (8 - choice)

    return int(choice)
