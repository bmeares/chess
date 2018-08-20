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
import time

def turn():
    Canvas.drawBoard()
    utils.potenial_moves()

    if (globVar.noPlayers or globVar.numPlayers == 0):
        ai_turn()

    elif (globVar.numPlayers == 1 and globVar.player == "b"):
        ai_turn()

    elif (globVar.numPlayers == 2 or globVar.player == "W" and
    globVar.numPlayers == 1):
        human_turn()

    globVar.removed = False

def ai_turn():
    runagain = True
    if globVar.numPlayers == 1:
        time.sleep(0.5)

    while runagain:
        if globVar.player == "W":
            rand_pc = random.choice(globVar.w_pieces)
        else:
            rand_pc = random.choice(globVar.b_pieces)

        fromSqr = board.Grid(rand_pc.row, rand_pc.col)
        availMoves = fromSqr.piece.scan()
        globVar.r_avail = copy.deepcopy(availMoves)
        globVar.r_avail_Num = len(globVar.r_avail)
        availMoves = utils.mark_invalid_moves(availMoves, fromSqr.piece)

        runagain = not utils.hasMoves(availMoves)
        if runagain:
            board.Grid(fromSqr.row, fromSqr.col).piece.selected = False
            am = fromSqr.piece.scan()
            utils.resetAvailMoves(am)
            Canvas.drawBoard()

    utils.un_resetAvailMoves(availMoves)

    choice = randChoose(len(availMoves))
    pc = utils.move(fromSqr, availMoves, choice)
    # Check for check
    utils.check_king()
    # revert back if still in check
    if ((globVar.w_check and globVar.player == "W") or
    (globVar.b_check and globVar.player == "b")):
        utils.undoMove()
        ai_turn()

def human_turn():
    runagain = True
    while runagain:
        fromSqr = select()
        availMoves = fromSqr.piece.scan()
        globVar.r_avail = copy.deepcopy(availMoves)
        globVar.r_avail_Num = len(globVar.r_avail)

        # remove invalid moves
        availMoves = utils.mark_invalid_moves(availMoves, fromSqr.piece)
        runagain = not utils.hasMoves(availMoves)

        if runagain:
            board.Grid(fromSqr.row, fromSqr.col).piece.selected = False
            am = fromSqr.piece.scan()
            utils.resetAvailMoves(am)
            Canvas.chooseAvailableMessage()
            Canvas.drawBoard()

    utils.un_resetAvailMoves(availMoves)
    choice = choose(availMoves)
    pc = utils.move(fromSqr, availMoves, choice)

    # Check for check
    utils.check_king()
    # revert back if still in check
    if ((globVar.w_check and globVar.player == "W") or
    (globVar.b_check and globVar.player == "b")):
        Canvas.getouttacheckMessage()
        utils.undoMove()
        two_player_turn()

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

def randChoose(a):
    Canvas.drawBoard()
    if globVar.numPlayers == 1:
        time.sleep(0.5)
    choice = random.randint(0, 100) % a
    return choice
