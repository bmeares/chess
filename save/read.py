import board
import globVar
import utils
import pieces
from square import Square

def readSave():
    save = open("chess.save", "r")
    startData = save.readline().strip('\n')
    if startData == "True":
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
        # read deleted pieces
        read_r_PiecesArrays(save, "W")
        read_r_PiecesArrays(save, "b")
        # read r_avail
        read_r_avail(save)
        # read p_moves
        read_p_moves(save)
        # read firstPawns
        read_firstPawns(save)

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

            pc = utils.pieceConstructor(color, type)
            board.Grid(i,j).piece = pc
            board.Grid(i,j).piece.selected = selected
            board.Grid(i,j).piece.label = label
            board.Grid(i,j).piece.row = row
            board.Grid(i,j).piece.col = col
            board.Grid(i,j).pieceStatus = pieceStatus

def readGlobal(save):
    globVar.numPlayers = int(save.readline().strip('\n'))
    globVar.player = save.readline().strip('\n')
    noPlayers = save.readline().strip('\n')
    if noPlayers == "True":
        globVar.noplayers = True
    else:
        globVar.noPlayers = False
    globVar.playerCount = int(save.readline().strip('\n'))
    globVar.w_NumPieces = int(save.readline().strip('\n'))
    globVar.b_NumPieces = int(save.readline().strip('\n'))
    globVar.r_w_NumPieces = int(save.readline().strip('\n'))
    globVar.r_b_NumPieces = int(save.readline().strip('\n'))
    w_check = save.readline().strip('\n')
    b_check = save.readline().strip('\n')
    removed = save.readline().strip('\n')
    if w_check == "True":
        globVar.w_check = True
    else:
        globVar.w_check = False
    if b_check == "True":
        globVar.b_check = True
    else:
        globVar.w_check = False
    if removed == "True":
        globVar.removed = True
    else:
        globVar.removed = False
    globVar.removed_label = int(save.readline().strip('\n'))
    globVar.removed_color = save.readline().strip('\n')
    globVar.last_col = int(save.readline().strip('\n'))
    globVar.last_row = int(save.readline().strip('\n'))
    scanning = save.readline().strip('\n')
    if scanning == "True":
        globVar.scanning = True
    else:
        globVar.scanning = False
    globVar.r_avail_Num = int(save.readline().strip('\n'))
    globVar.p_w_Num = int(save.readline().strip('\n'))
    globVar.p_b_Num = int(save.readline().strip('\n'))
    m_f_ps = save.readline().strip('\n')
    if m_f_ps == "True":
        globVar.m_f_ps = True
    else:
        globVar.m_f_ps = False
    globVar.m_f_p_color = save.readline().strip('\n')
    globVar.m_f_p_type = save.readline().strip('\n')
    globVar.m_f_p_label = int(save.readline().strip('\n'))
    globVar.m_f_p_row = int(save.readline().strip('\n'))
    globVar.m_f_p_col = int(save.readline().strip('\n'))
    m_t_ps = save.readline().strip('\n')
    if m_t_ps == "True":
        globVar.m_t_ps = True
    else:
        globVar.m_t_ps = False
    globVar.m_t_p_color = save.readline().strip('\n')
    globVar.m_t_p_type = save.readline().strip('\n')
    globVar.m_t_p_label = int(save.readline().strip('\n'))
    globVar.m_t_p_row = int(save.readline().strip('\n'))
    globVar.m_t_p_col = int(save.readline().strip('\n'))
    m_fm = save.readline().strip('\n')
    if m_fm == "True":
        globVar.m_fm = True
    else:
        globVar.m_fm = False

    u_m_f_ps = save.readline().strip('\n')
    if u_m_f_ps == "True":
        globVar.u_m_f_ps = True
    else:
        globVar.u_m_f_ps = False
    globVar.u_m_f_p_color = save.readline().strip('\n')
    globVar.u_m_f_p_type = save.readline().strip('\n')
    globVar.u_m_f_p_label = int(save.readline().strip('\n'))
    globVar.u_m_f_p_row = int(save.readline().strip('\n'))
    globVar.u_m_f_p_col = int(save.readline().strip('\n'))
    u_m_t_ps = save.readline().strip('\n')
    if u_m_t_ps == "True":
        globVar.u_m_t_ps = True
    else:
        globVar.u_m_t_ps = False
    globVar.u_m_t_p_color = save.readline().strip('\n')
    globVar.u_m_t_p_type = save.readline().strip('\n')
    globVar.u_m_t_p_label = int(save.readline().strip('\n'))
    globVar.u_m_t_p_row = int(save.readline().strip('\n'))
    globVar.u_m_t_p_col = int(save.readline().strip('\n'))
    u_m_fm = save.readline().strip('\n')
    if u_m_fm == "True":
        globVar.u_m_fm = True
    else:
        globVar.u_m_fm = False
    no_b_king = save.readline().strip('\n')
    if no_b_king == "True":
        globVar.no_b_king = True
    else:
        globVar.no_b_king = False
    no_w_king = save.readline().strip('\n')
    if no_w_king == "True":
        globVar.no_w_king = True
    else:
        globVar.no_w_king = False
    globVar.firstPawnsNum = int(save.readline().strip('\n'))
    checkmate = save.readline().strip('\n')
    if checkmate == "True":
        globVar.checkmate = True
    else:
        globVar.checkmate = False
    slow_speed = save.readline().strip('\n')
    if slow_speed == "True":
        globVar.slow_speed = True
    else:
        globVar.slow_speed = False

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

def read_firstPawns(save):
    p_array = save.readline().split(',')
    k = 0
    n = globVar.firstPawnsNum

    for i in range(n):
        color = p_array[k]
        k += 1
        selected = p_array[k]
        if selected == "True":
            sl = True
        else:
            sl = False
        k += 1
        type = p_array[k]
        k += 1
        label = int(p_array[k])
        k += 1
        row = int(p_array[k])
        k += 1
        col = int(p_array[k])
        k += 1
        fm = p_array[k]
        if fm == "True":
            firstMove = True
        else:
            firstMove = False
        k += 1

        pc = pieces.Pawn(color, type)

        pc.selected = sl
        pc.label = label
        pc.row = row
        pc.col = col
        pc.firstMove = firstMove

        globVar.firstPawns.append(pc)
        board.Grid(row, col).piece.firstMove = firstMove
        index = utils.findIndex(label, color)

        if color == "W" and index != None:
            globVar.w_pieces[index].firstMove = True
        elif color == "b" and index != None:
            globVar.b_pieces[index].firstMove = True

def read_r_avail(save):
    # read r_avail_array
    r_avail_array = save.readline().split(',')
    k = 0
    n = globVar.r_avail_Num
    for i in range(n):
        ps = r_avail_array[k]
        k += 1
        sqrColor = r_avail_array[k]
        k += 1
        pcColor = r_avail_array[k]
        k += 1
        type = r_avail_array[k]
        k += 1
        label = int(r_avail_array[k])
        k += 1
        p_row = int(r_avail_array[k])
        k += 1
        p_col = int(r_avail_array[k])
        k += 1
        row = int(r_avail_array[k])
        k += 1
        col = int(r_avail_array[k])
        k += 1

        pc = utils.pieceConstructor(pcColor, type)

        pc.label = label
        pc.row = p_row
        pc.col = p_col

        sq = Square(ps, sqrColor, pc, row, col)

        globVar.r_avail.append(sq)

def read_r_PiecesArrays(save, c):
    wp_array = save.readline().split(',')
    k = 0
    if c == "W":
        globVar.r_w_pieces = []
        n = globVar.r_w_NumPieces
    else:
        globVar.r_b_pieces = []
        n = globVar.r_b_NumPieces
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

        pc = utils.pieceConstructor(color, type)

        pc.selected = sl
        pc.label = label
        pc.row = row
        pc.col = col

        if c == "W":
            globVar.r_w_pieces.append(pc)
        else:
            globVar.r_b_pieces.append(pc)

def read_p_moves(save):
    # read white pieces
    p_w_array = save.readline().split(',')
    k = 0
    n = globVar.p_w_Num
    for i in range(n):
        ps = p_w_array[k]
        k += 1
        sqrColor = p_w_array[k]
        k += 1
        pcColor = p_w_array[k]
        k += 1
        type = p_w_array[k]
        k += 1
        label = int(p_w_array[k])
        k += 1
        p_row = int(p_w_array[k])
        k += 1
        p_col = int(p_w_array[k])
        k += 1
        row = int(p_w_array[k])
        k += 1
        col = int(p_w_array[k])
        k += 1

        pc = utils.pieceConstructor(pcColor, type)

        pc.label = label
        pc.row = p_row
        pc.col = p_col

        sq = Square(ps, sqrColor, pc, row, col)

        globVar.p_w_moves.append(sq)

    # read black pieces
    p_b_array = save.readline().split(',')
    k = 0
    n = globVar.p_b_Num
    for i in range(n):
        ps = p_b_array[k]
        k += 1
        sqrColor = p_b_array[k]
        k += 1
        pcColor = p_b_array[k]
        k += 1
        type = p_b_array[k]
        k += 1
        label = int(p_b_array[k])
        k += 1
        p_row = int(p_b_array[k])
        k += 1
        p_col = int(p_b_array[k])
        k += 1
        row = int(p_b_array[k])
        k += 1
        col = int(p_b_array[k])
        k += 1

        pc = utils.pieceConstructor(pcColor, type)

        pc.label = label
        pc.row = p_row
        pc.col = p_col

        sq = Square(ps, sqrColor, pc, row, col)

        globVar.p_b_moves.append(sq)
