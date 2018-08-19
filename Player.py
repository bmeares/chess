"""
This module contains functions relating to user interaction,
including automated players.
"""

import random
import Canvas
import utils
import board
import utils
import globVar
import copy

def turn():
    Canvas.drawBoard()
    runagain = True

    if not globVar.noPlayers:
        while runagain:
            fromSqr = select()
            availMoves = fromSqr.piece.scan()
            globVar.r_avail = copy.deepcopy(availMoves)
            globVar.r_avail_Num = len(globVar.r_avail)

            # remove invalid moves
            availMoves = utils.mark_invalid_moves(availMoves, fromSqr.piece)
            availMoves = utils.remove_invalid_moves(availMoves)
            runagain = not utils.hasMoves(availMoves)

            if runagain:
                board.Grid(fromSqr.row, fromSqr.col).piece.selected = False
                Canvas.chooseAvailableMessage()
                Canvas.drawBoard()

    choice = choose(availMoves)
    pc = utils.move(fromSqr, availMoves, choice)

    # Check for check
    utils.check_king()
    # revert back if still in check
    if ((globVar.w_check and globVar.player == "W") or
    (globVar.b_check and globVar.player == "b")):
        Canvas.getouttacheckMessage()
        utils.moveBack(pc, fromSqr.piece)
        turn()
    # reset removed flag
    globVar.removed = False
    utils.clearMovesHistory()

def select():
    print(" Select which piece to move.")
    selecting = True
    while selecting:
        col = utils.r_c('c')
        row = utils.r_c('r')

        if board.Grid(row,col).piece.color != globVar.player:
            Canvas.selectError()
        else:
            board.Grid(row,col).piece.selected = True # display fromSqr as selected
            selecting = False

    return board.Grid(row,col)


def choose(availMoves):
    Canvas.drawBoard()
    choice = Canvas.chooseMove(len(availMoves))

    return choice
