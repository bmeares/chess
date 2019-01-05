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
import pieces
import random
import os
from save import *

def check_pawn(pc):
    W_success = (pc.type == "pawn") and (globVar.player == "W") and (pc.row == 0)
    b_success = (pc.type == "pawn") and (globVar.player == "b") and (pc.row == 7)

    if W_success or b_success:
        if ((globVar.numPlayers == 1 and globVar.player == "W")
        or globVar.numPlayers == 2):
            choice = Canvas.pawn_to_new()
        else:
            choice = random.randint(1, 4)

        color = pc.color
        label = pc.label
        row = pc.row
        col = pc.col

        if choice == 1:
            pc = pieces.Rook(color, "rook")
        elif choice == 2:
            pc = pieces.Knight(color, "knight")
        elif choice == 3:
            pc = pieces.Bishop(color, "bishop")
        elif choice == 4:
            pc = pieces.Queen(color, "queen")

        pc.label = label
        pc.row = row
        pc.col = col

        updatePieces(pc)
        board.uGrid(pc)

def clearAllOptions():
    for i in range(8):
        for j in range(8):
            board.Grid(i,j).option = 0
            board.Grid(i,j).des = False

def potenial_moves():
    # reset p_w_moves and p_b_moves
    globVar.p_w_moves = []
    globVar.p_b_moves = []
    globVar.p_w_Num = 0
    globVar.p_b_Num = 0

    # populate p_w_Moves
    for i in range(len(globVar.w_pieces)):
        fpc = globVar.w_pieces[i]
        am = fpc.scan()
        globVar.r_avail = copy.deepcopy(am)
        globVar.r_avail_Num = len(am)
        am = mark_invalid_moves(am, fpc)
        globVar.p_w_moves.extend(am)
        # globVar.p_w_Num += len(am)
        board.Grid(globVar.w_pieces[i].row, globVar.w_pieces[i].col).piece.selected = False
    # un_resetAvailMoves(globVar.p_w_moves)
    resetAvailMoves(globVar.p_w_moves)
    globVar.p_w_Num = len(globVar.p_w_moves)

    # populate p_b_Moves
    for i in range(len(globVar.b_pieces)):
        fpc = globVar.b_pieces[i]
        am = fpc.scan()
        globVar.r_avail = copy.deepcopy(am)
        globVar.r_avail_Num = len(am)
        am = mark_invalid_moves(am, fpc)
        am = remove_invalid_moves(am)
        globVar.p_b_moves.extend(am)
        # globVar.p_b_Num += len(am)
        board.Grid(globVar.b_pieces[i].row, globVar.b_pieces[i].col).piece.selected = False
    # un_resetAvailMoves(globVar.p_b_moves)
    resetAvailMoves(globVar.p_b_moves)
    globVar.p_b_Num = len(globVar.p_b_moves)
    clearAllOptions()

def remove_invalid_moves(availMoves):
    i = 0
    while i < len(availMoves):
        if globVar.r_avail[i].option == -2:
            # board.Grid(availMoves[i].row, availMoves[i].col).des = False
            # board.Grid(availMoves[i].row, availMoves[i].col).option = -2
            availMoves.pop(i)
            globVar.r_avail.pop(i)
            globVar.r_avail_Num = len(globVar.r_avail)
            i -= 1
        i += 1

    return availMoves

def mark_invalid_moves(availMoves, pc):
    fpc = copy.deepcopy(pc)
    am = copy.deepcopy(availMoves)
    for i in range(len(availMoves)):
        move(board.Grid(fpc.row, fpc.col), am, i + 1)
        check_king()

        # undo move
        undoMove()
        pc.color = fpc.color
        # un_resetAvailMoves(am)

        # if still in check, pop move from availMoves
        if ((pc.color == "W" and globVar.w_check) or
        (pc.color == "b" and globVar.b_check)):
            board.Grid(availMoves[i].row, availMoves[i].col).des = False
            board.Grid(availMoves[i].row, availMoves[i].col).option = -2
            availMoves[i].option = -2
            globVar.r_avail[i].option = -2
        # print(pc.color, globVar.b_check, availMoves[i].option)
        # input("")

    availMoves = remove_invalid_moves(availMoves)
    return availMoves

def checkWin():
    won = False
    potenial_moves()

    if (globVar.p_w_Num == 0 or len(globVar.p_w_moves) == 0 or
    len(globVar.w_pieces) == 1 or globVar.no_w_king):
        # Canvas.clear()
        won = True
        globVar.checkmate = True
        Canvas.drawBoard()
        print(" Black wins!")
        print("\n Press Enter to exit.")
        input("")
        delete_save()

    elif (globVar.p_b_Num == 0 or len(globVar.p_b_moves) == 0 or
    len(globVar.b_pieces) == 1 or globVar.no_b_king):
        # Canvas.clear()
        won = True
        globVar.checkmate = True
        Canvas.drawBoard()
        print(" White wins!")
        print("\n Press Enter to exit.")
        input("")
        delete_save()

    return won

def check_king():
    found_b_check = False
    found_w_check = False
    # scanning flag is needed to prevent recursion
    globVar.scanning = True
    # check white pieces again black king
    for i in range(len(globVar.w_pieces)):
        fpc = globVar.w_pieces[i]
        am = fpc.scan()

        # check availMoves for every white piece
        for j in range(len(am)):
            if (am[j].piece.type == "king" and fpc.color == "W" and
            am[j].piece.color == "b"):
                globVar.b_check = True
                found_b_check = True
        resetAvailMoves(am)

    for i in range(len(globVar.b_pieces)):
        fpc = globVar.b_pieces[i]
        am = fpc.scan()

        for j in range(len(am)):
            if (am[j].piece.type == "king" and fpc.color == "b" and
            am[j].piece.color == "W"):
                globVar.w_check = True
                found_w_check = True
        resetAvailMoves(am)

    if not found_w_check:
        globVar.w_check = False
    if not found_b_check:
        globVar.b_check = False
    globVar.scanning = False
    clearAllOptions()

def resetAvailMoves(availMoves):
    for i in range(len(availMoves)):
        if availMoves[i].option != -2:
            optionRow = availMoves[i].row
            optionCol = availMoves[i].col
            board.Grid(optionRow,optionCol).des = False
            board.Grid(optionRow,optionCol).piece.selected = False
            board.Grid(optionRow,optionCol).option = 0

def un_resetAvailMoves(availMoves):
    for i in range(len(availMoves)):
        # if availMoves[i].option > -1:
        optionRow = availMoves[i].row
        optionCol = availMoves[i].col
        board.Grid(optionRow,optionCol).des = True
        # board.Grid(optionRow,optionCol).piece.selected = True
        board.Grid(optionRow,optionCol).option = i + 1

def move(fromSqr, availMoves, choice):
    pc = copy.deepcopy(fromSqr.piece)
    pc.color = fromSqr.piece.color
    pc.type = fromSqr.piece.type
    track_last_pos(pc)

    toSqr = copy.deepcopy(availMoves[choice - 1])
    deletePiece(toSqr.piece, fromSqr.piece)
    recordMove(fromSqr, toSqr)

    pc.row = toSqr.row
    pc.col = toSqr.col
    pc.selected = False

    #reset availMoves
    resetAvailMoves(availMoves)
    # update board with new piece
    board.uGrid(pc)
    updatePieces(pc)

    #turn off piece for fromSqr
    board.Grid(fromSqr.row,fromSqr.col).pieceStatus = False
    board.Grid(fromSqr.row,fromSqr.col).piece.color = "none"

    if pc.type == "pawn":
        pc.firstMove = False

    return pc

def updatePieces(pc):
    index = findIndex(pc.label, pc.color)
    if pc.color == "W":
        globVar.w_pieces[index] = pc
    elif pc.color == "b":
        globVar.b_pieces[index] = pc

def findIndex(label, c):
    i = 0
    if c == "W":
        while True:
            if globVar.w_pieces[i].label == label:
                return i
            else:
                i += 1
    elif c == "b":
        while True:
            if globVar.b_pieces[i].label == label:
                return i
            else:
                i += 1

def find_r_Index(label, c):
    i = 0
    if c == "W":
        while True:
            if globVar.r_w_pieces[i].label == label:
                return i
            else:
                i += 1
    else:
        while True:
            if globVar.r_b_pieces[i].label == label:
                return i
            else:
                i += 1

def findKingIndex(c):
    i = 0
    if c == "W":
        while True:
            if globVar.w_pieces[i].type == "king":
                return i
            else:
                i += 1
    else:
        while True:
            if globVar.b_pieces[i].type == "king":
                return i
            else:
                i += 1

def deletePiece(tpc, fpc):
    if (fpc.color != tpc.color and tpc.color != "none"):
        globVar.removed = True
        globVar.removed_label = tpc.label
        globVar.removed_color = tpc.color
        index = findIndex(tpc.label, tpc.color)
        if fpc.color == "W":
            globVar.r_b_pieces.append(tpc)
            globVar.b_pieces.pop(index)
            globVar.b_NumPieces -= 1
            globVar.r_b_NumPieces += 1
            if tpc.type == "king":
                globVar.no_b_king = True
        else:
            globVar.r_w_pieces.append(tpc)
            globVar.w_pieces.pop(index)
            globVar.w_NumPieces -= 1
            globVar.r_w_NumPieces += 1
            if tpc.type == "king":
                globVar.no_w_king = True

    # scan board and remove any pieces with same label and color
    remove_from_board(tpc.label, tpc.color)

def un_deletePiece(fpc):
    if globVar.removed:
        index = find_r_Index(globVar.removed_label, globVar.removed_color)
        if fpc.color == "W":
            tmp_pc = copy.deepcopy(globVar.r_b_pieces[index])
            globVar.b_pieces.append(tmp_pc)
            globVar.r_b_pieces.pop(index)
            globVar.b_NumPieces += 1
            globVar.r_b_NumPieces -= 1
            if tmp_pc.type == "king":
                globVar.no_b_king = False
        else:
            tmp_pc = copy.deepcopy(globVar.r_w_pieces[index])
            globVar.w_pieces.append(tmp_pc)
            globVar.r_w_pieces.pop(index)
            globVar.w_NumPieces += 1
            globVar.r_w_NumPieces -= 1
            if tmp_pc.type == "king":
                globVar.no_w_king = False

        # put piece back on board
        board.uGrid(tmp_pc)

def remove_from_board(label, color):
    for i in range(8):
        for j in range(8):
            if (board.Grid(i,j).piece.label == label and
            board.Grid(i,j).piece.color == color):
                board.Grid(i,j).piece.type = "none"
                board.Grid(i,j).piece.color = "none"
                board.Grid(i,j).pieceStatus = False

def track_last_pos(pc):
    globVar.last_row = pc.row
    globVar.last_col = pc.col

def r_c(x):
    if x == 'c': # col
        choice = Canvas.chooseCol()
        choice = choice.upper()
        choice = ord(choice)
        choice -= 65

    else: # row
        choice = Canvas.chooseRow()
        choice = (8 - choice)

    return int(choice)

def clearSave():
    save = open("chess.save","w")
    save.close()

def delete_save():
    if os.path.isfile("chess.save"):
        os.remove("chess.save")
    clearMovesHistory()

def clearMovesHistory():
    # file = open("moves.txt", "w")
    # file.close()
    if os.path.isfile("chess.save"):
        os.remove("moves.txt")

def hasMoves(availMoves):
    if len(availMoves) > 0:
        return True
    else:
        return False


def undo_user_move():
    # read and build fpc
    fSqr_status = globVar.u_m_f_ps
    f_clr = globVar.u_m_f_p_color
    f_type = globVar.u_m_f_p_type
    f_label = globVar.u_m_f_p_label
    f_row = globVar.u_m_f_row
    f_col = globVar.u_m_f_col
    fpc = pieceConstructor(f_clr, f_type)

    fpc.label = f_label
    fpc.row = f_row
    fpc.col = f_col

    # read and build tpc
    tSqr_status = globVar.u_m_t_ps
    t_clr = globVar.u_m_t_p_color
    t_type = globVar.u_m_t_p_type
    t_label = globVar.u_m_t_p_label
    t_row = globVar.u_m_t_row
    t_col = globVar.u_m_t_col
    tpc = pieceConstructor(t_clr, t_type)

    tpc.label = t_label
    tpc.row = t_row
    tpc.col = t_col

    if fpc.type == "pawn":
        fpc.firstMove = globVar.u_m_fm

    # update the board
    board.uGrid(fpc)
    board.uGrid(tpc)
    updatePieces(fpc)

    board.Grid(fpc.row, fpc.col).pieceStatus = fSqr_status
    board.Grid(tpc.row, tpc.col).pieceStatus = tSqr_status

    # reset des
    board.Grid(fpc.row, fpc.col).des = False
    board.Grid(tpc.row, tpc.col).des = False

    if not globVar.removed:
        board.Grid(tpc.row,tpc.col).pieceStatus = False
        board.Grid(tpc.row,tpc.col).piece.color = "none"

    un_deletePiece(fpc)
    globVar.removed = False
    board.Grid(fpc.row, fpc.col).piece.selected = True

def undoMove():
    # read and build fpc
    fSqr_status = globVar.m_f_ps
    f_clr = globVar.m_f_p_color
    f_type = globVar.m_f_p_type
    f_label = globVar.m_f_p_label
    f_row = globVar.m_f_row
    f_col = globVar.m_f_col
    fpc = pieceConstructor(f_clr, f_type)

    fpc.label = f_label
    fpc.row = f_row
    fpc.col = f_col

    # read and build tpc
    tSqr_status = globVar.m_t_ps
    t_clr = globVar.m_t_p_color
    t_type = globVar.m_t_p_type
    t_label = globVar.m_t_p_label
    t_row = globVar.m_t_row
    t_col = globVar.m_t_col
    tpc = pieceConstructor(t_clr, t_type)

    tpc.label = t_label
    tpc.row = t_row
    tpc.col = t_col

    if fpc.type == "pawn":
        fpc.firstMove = globVar.m_fm

    # update the board
    board.uGrid(fpc)
    board.uGrid(tpc)
    updatePieces(fpc)

    board.Grid(fpc.row, fpc.col).pieceStatus = fSqr_status
    board.Grid(tpc.row, tpc.col).pieceStatus = tSqr_status

    # reset des
    board.Grid(fpc.row, fpc.col).des = False
    board.Grid(tpc.row, tpc.col).des = False

    if not globVar.removed:
        board.Grid(tpc.row,tpc.col).pieceStatus = False
        board.Grid(tpc.row,tpc.col).piece.color = "none"

    un_deletePiece(fpc)
    globVar.removed = False
    board.Grid(fpc.row, fpc.col).piece.selected = True

def pieceConstructor(clr, type):
    if type == "none":
        pc = pieces.Pawn("none", "none")
    elif type == "pawn":
        pc = pieces.Pawn(clr, type)
    elif type == "rook":
        pc = pieces.Rook(clr, type)
    elif type == "bishop":
        pc = pieces.Bishop(clr, type)
    elif type == "queen":
        pc = pieces.Queen(clr, type)
    elif type == "king":
        pc = pieces.King(clr, type)
    elif type == "knight":
        pc = pieces.Knight(clr, type)
    return pc

def typeCounter(type, color):
    n = 0
    if color == "W":
        for i in range(len(globVar.w_pieces)):
            if globVar.w_pieces[i].type == type:
                n += 1

    else:
        for i in range(len(globVar.b_pieces)):
            if globVar.b_pieces[i].type == type:
                n += 1

    return n
