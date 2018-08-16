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

def checkWin():
    w_won = False
    b_won = False

    # scan for remaining moves

    return True

def check_king():
    for i in range(len(globVar.w_pieces)):
        fpc = globVar.w_pieces[i]
        am = fpc.scan()

        for j in range(len(am)):
            if am[j].piece.type == "king" and fpc.color == "W":
                globVar.b_check = True
            elif am[j].piece.type == "king" and fpc.color == "b":
                globVar.w_check = True
        resetAvailMoves(am)

    for i in range(len(globVar.b_pieces)):
        fpc = globVar.b_pieces[i]
        am = fpc.scan()

        for j in range(len(am)):
            if am[j].piece.type == "king" and fpc.color == "W":
                globVar.b_check = True
            elif am[j].piece.type == "king" and fpc.color == "b":
                globVar.w_check = True
        resetAvailMoves(am)

def resetAvailMoves(availMoves):
    for i in range(len(availMoves)):
        optionRow = availMoves[i].row
        optionCol = availMoves[i].col
        board.Grid(optionRow,optionCol).des = False
        board.Grid(optionRow,optionCol).piece.selected = False
        board.Grid(optionRow,optionCol).option = 0

def move(fromSqr, availMoves, choice):
    pc = copy.deepcopy(fromSqr.piece)
    pc.color = fromSqr.piece.color
    pc.type = fromSqr.piece.type

    toSqr = copy.deepcopy(availMoves[choice - 1])
    deletePiece(toSqr.piece, fromSqr.piece)

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
    else:
        globVar.b_pieces[index] = pc


def findIndex(label, c):
    i = 0
    if c == "W":
        while True:
            if globVar.w_pieces[i].label == label:
                return i
            else:
                i += 1
    else:
        while True:
            # print(i, label, c)
            # input("")
            if globVar.b_pieces[i].label == label:
                return i
            else:
                i += 1

def deletePiece(tpc, fpc):
    if (fpc.color != tpc.color and tpc.color != "none"):
        index = findIndex(tpc.label, tpc.color)
        if fpc.color == "W":
            globVar.b_pieces.pop(index)
            globVar.b_NumPieces -= 1
        else:
            globVar.w_pieces.pop(index)
            globVar.w_NumPieces -= 1

            # running = True
            # i = 0
            # while running:
                # if globVar.b_pieces[i].label == tpc.label:
                    # globVar.b_pieces.pop(i)
                    # globVar.b_NumPieces -= 1
                    # running = False
                # i += 1
        # else:
        #     running = True
        #     i = 0
        #     while running:
        #         if globVar.w_pieces[i].label == tpc.label:
        #             globVar.w_pieces.pop(i)
        #             globVar.w_NumPieces -= 1
        #             running = False
        #         i += 1


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

def writeSave():
    startData = "True"
    save = open("chess.save","w")

    save.write(startData)
    save.write("\n")

    # write board
    writeBoard(save)
    # write global variables
    writeGlobal(save)
    # write pieces arrays
    writePiecesArrays(save)

    save.write("\n")
    save.close()

def readSave():
    save = open("chess.save", "r")
    startData = save.readline()
    if startData == "True\n":
        st = True
    else:
        st = False

    if st:
        # read board
        readBoard(save)
        # read global variables
        readGlobal(save)
        # read w_pieces and b_pieces
        readPiecesArrays(save, "W")
        readPiecesArrays(save, "b")

def readBoard(save):
    board.populate()
    k = 0
    sqrArray = save.readline().split(',')

    for i in range(8):
        for j in range(8):

            ps = sqrArray[k]
            if ps == "True":
                pieceStatus = True
            else:
                pieceStatus = False
            k += 1
            board.Grid(i,j).color = sqrArray[k]
            k += 1
            board.Grid(i,j).row = int(sqrArray[k])
            k += 1
            board.Grid(i,j).col = int(sqrArray[k])
            k += 1
            board.Grid(i,j).des = False
            k += 1
            board.Grid(i,j).option = int(sqrArray[k])
            k += 1

            type = sqrArray[k]
            k += 1
            color = sqrArray[k]
            k += 1
            selected = False
            k += 1
            label = int(sqrArray[k])
            k += 1
            row = int(sqrArray[k])
            k += 1
            col = int(sqrArray[k])
            k += 1

            if type == "none":
                board.Grid(i,j).piece = pieces.Pawn(color, type)
            elif(type == "pawn"):
                board.Grid(i,j).piece = pieces.Pawn(color, type)
            elif(type == "rook"):
                board.Grid(i,j).piece = pieces.Rook(color, type)
            elif(type == "bishop"):
                board.Grid(i,j).piece = pieces.Bishop(color, type)
            elif(type == "knight"):
                board.Grid(i,j).piece = pieces.Knight(color, type)
            elif(type == "queen"):
                board.Grid(i,j).piece = pieces.Queen(color, type)
            elif(type == "king"):
                board.Grid(i,j).piece = pieces.King(color, type)

            board.Grid(i,j).piece.selected = selected
            board.Grid(i,j).piece.label = label
            board.Grid(i,j).piece.row = row
            board.Grid(i,j).piece.col = col
            board.Grid(i,j).pieceStatus = pieceStatus

def readGlobal(save):
    globVar.numPlayers = int(save.readline())
    globVar.player = save.readline()
    noPlayers = save.readline()
    if noPlayers == "True":
        globVar.noplayers = True
    else:
        globVar.noPlayers = False
    globVar.playerCount = int(save.readline())
    globVar.w_NumPieces = int(save.readline())
    globVar.b_NumPieces = int(save.readline())
    w_check = save.readline()
    b_check = save.readline()
    if w_check == "True":
        globVar.w_check = True
    else:
        globVar.w_check = False
    if b_check == "True":
        globVar.b_check = True
    else:
        globVar.w_check = False

def readPiecesArrays(save, c):
    wp_array = save.readline().split(',')
    k = 0
    if c == "W":
        globVar.w_pieces = []
        n = globVar.w_NumPieces
    else:
        globVar.b_pieces = []
        n = globVar.b_NumPieces
    for i in range(n):
        color = wp_array[k]
        k += 1
        selected = wp_array[k]
        if selected == "True":
            sl = True
        else:
            sl = False
        k += 1
        type = wp_array[k]
        k += 1
        label = int(wp_array[k])
        k += 1
        row = int(wp_array[k])
        k += 1
        col = int(wp_array[k])
        k += 1

        if type == "none":
            pc = pieces.Pawn("none", "none")
        elif type == "pawn":
            pc = pieces.Pawn(color, type)
        elif type == "rook":
            pc = pieces.Rook(color, type)
        elif type == "bishop":
            pc = pieces.Bishop(color, type)
        elif type == "queen":
            pc = pieces.Queen(color, type)
        elif type == "king":
            pc = pieces.King(color, type)
        elif type == "knight":
            pc = pieces.Knight(color, type)

        pc.selected = sl
        pc.label = label
        pc.row = row
        pc.col = col

        if c == "W":
            globVar.w_pieces.append(pc)
        else:
            globVar.b_pieces.append(pc)

def writeBoard(save):
    for i in range(8):
        for j in range(8):
            save.write(str(board.Grid(i,j).pieceStatus))
            save.write(",")
            save.write(str(board.Grid(i,j).color))
            save.write(",")
            save.write(str(board.Grid(i,j).row))
            save.write(",")
            save.write(str(board.Grid(i,j).col))
            save.write(",")
            save.write(str(board.Grid(i,j).des))
            save.write(",")
            save.write(str(board.Grid(i,j).option))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.type))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.color))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.selected))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.label))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.row))
            save.write(",")
            save.write(str(board.Grid(i,j).piece.col))
            save.write(",")

def writeGlobal(save):
    save.write("\n")
    save.write(str(globVar.numPlayers))
    save.write("\n")
    save.write(str(globVar.player))
    save.write("\n")
    save.write(str(globVar.noPlayers))
    save.write("\n")
    save.write(str(globVar.playerCount))
    save.write("\n")
    save.write(str(globVar.w_NumPieces))
    save.write("\n")
    save.write(str(globVar.b_NumPieces))
    save.write("\n")
    save.write(str(globVar.w_check))
    save.write("\n")
    save.write(str(globVar.b_check))
    save.write("\n")

def writePiecesArrays(save):
    # save w_pieces
    for i in range(len(globVar.w_pieces)):
        save.write(str(globVar.w_pieces[i].color))
        save.write(",")
        save.write(str(globVar.w_pieces[i].selected))
        save.write(",")
        save.write(str(globVar.w_pieces[i].type))
        save.write(",")
        save.write(str(globVar.w_pieces[i].label))
        save.write(",")
        save.write(str(globVar.w_pieces[i].row))
        save.write(",")
        save.write(str(globVar.w_pieces[i].col))
        save.write(",")

    save.write("\n")

    # save b_pieces
    for i in range(len(globVar.b_pieces)):
        save.write(str(globVar.b_pieces[i].color))
        save.write(",")
        save.write(str(globVar.b_pieces[i].selected))
        save.write(",")
        save.write(str(globVar.b_pieces[i].type))
        save.write(",")
        save.write(str(globVar.b_pieces[i].label))
        save.write(",")
        save.write(str(globVar.b_pieces[i].row))
        save.write(",")
        save.write(str(globVar.b_pieces[i].col))
        save.write(",")

def clearSave():
    save = open("chess.save","w")
    save.close()

def hasMoves(availMoves):
    if len(availMoves) > 0:
        return True
    else:
        return False
