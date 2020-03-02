import board
import globVar
import copy
import pieces
# import record

# def writeSave():
#     startData = "True"
#     save = open("chess.save","w")
#
#     save.write(startData)
#     save.write("\n")
#
#     # write board
#     writeBoard(save)
#     # write global variables
#     writeGlobal(save)
#     # write pieces arrays
#     writePiecesArrays(save)
#     # write deleted pieces arrays
#     write_r_PiecesArrays(save)
#     # write potenial moves
#     write_p_moves(save)
#     # write firstPawns
#     write_firstPawns(save)
#
#     save.write("\n")
#     save.close()
#
# def writeBoard(save):
#     for i in range(8):
#         for j in range(8):
#             save.write(str(board.Grid(i,j).pieceStatus))
#             save.write(",")
#             save.write(str(board.Grid(i,j).color))
#             save.write(",")
#             save.write(str(board.Grid(i,j).row))
#             save.write(",")
#             save.write(str(board.Grid(i,j).col))
#             save.write(",")
#             save.write(str(board.Grid(i,j).des))
#             save.write(",")
#             save.write(str(board.Grid(i,j).option))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.type))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.color))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.selected))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.label))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.row))
#             save.write(",")
#             save.write(str(board.Grid(i,j).piece.col))
#             save.write(",")
#
# def writeGlobal(save):
#     save.write("\n")
#     save.write(str(globVar.numPlayers))
#     save.write("\n")
#     save.write(str(globVar.player))
#     save.write("\n")
#     save.write(str(globVar.noPlayers))
#     save.write("\n")
#     save.write(str(globVar.playerCount))
#     save.write("\n")
#     save.write(str(globVar.w_NumPieces))
#     save.write("\n")
#     save.write(str(globVar.b_NumPieces))
#     save.write("\n")
#     save.write(str(globVar.r_w_NumPieces))
#     save.write("\n")
#     save.write(str(globVar.r_b_NumPieces))
#     save.write("\n")
#     save.write(str(globVar.w_check))
#     save.write("\n")
#     save.write(str(globVar.b_check))
#     save.write("\n")
#     save.write(str(globVar.removed))
#     save.write("\n")
#     save.write(str(globVar.removed_label))
#     save.write("\n")
#     save.write(str(globVar.removed_color))
#     save.write("\n")
#     save.write(str(globVar.last_row))
#     save.write("\n")
#     save.write(str(globVar.last_col))
#     save.write("\n")
#     save.write(str(globVar.scanning))
#     save.write("\n")
#     save.write(str(globVar.r_avail_Num))
#     save.write("\n")
#     save.write(str(globVar.p_w_Num))
#     save.write("\n")
#     save.write(str(globVar.p_b_Num))
#     save.write("\n")
#     save.write(str(globVar.m_f_ps))
#     save.write("\n")
#     save.write(str(globVar.m_f_p_color))
#     save.write("\n")
#     save.write(str(globVar.m_f_p_type))
#     save.write("\n")
#     save.write(str(globVar.m_f_p_label))
#     save.write("\n")
#     save.write(str(globVar.m_f_row))
#     save.write("\n")
#     save.write(str(globVar.m_f_col))
#     save.write("\n")
#     save.write(str(globVar.m_t_ps))
#     save.write("\n")
#     save.write(str(globVar.m_t_p_color))
#     save.write("\n")
#     save.write(str(globVar.m_t_p_type))
#     save.write("\n")
#     save.write(str(globVar.m_t_p_label))
#     save.write("\n")
#     save.write(str(globVar.m_t_row))
#     save.write("\n")
#     save.write(str(globVar.m_t_col))
#     save.write("\n")
#     save.write(str(globVar.m_fm))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_ps))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_p_color))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_p_type))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_p_label))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_row))
#     save.write("\n")
#     save.write(str(globVar.u_m_f_col))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_ps))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_p_color))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_p_type))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_p_label))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_row))
#     save.write("\n")
#     save.write(str(globVar.u_m_t_col))
#     save.write("\n")
#     save.write(str(globVar.u_m_fm))
#     save.write("\n")
#     save.write(str(globVar.no_b_king))
#     save.write("\n")
#     save.write(str(globVar.no_w_king))
#     save.write("\n")
#     save.write(str(globVar.firstPawnsNum))
#     save.write("\n")
#     save.write(str(globVar.checkmate))
#     save.write("\n")
#     save.write(str(globVar.slow_speed))
#     save.write("\n")
#     save.write(str(globVar.unicode))
#     save.write("\n")
#     save.write(str(globVar.ready))
#     save.write("\n")
#     save.write(str(globVar.limited_unicode))
#     save.write("\n")
#     save.write(str(globVar.aggressive))
#     save.write("\n")
#     save.write(str(globVar.chill))
#     save.write("\n")
#     save.write(str(globVar.simulation))
#     save.write("\n")
#     save.write(str(globVar.show_all_menus) + "\n")
#
# def writePiecesArrays(save):
#     # save w_pieces
#     for i in range(len(globVar.w_pieces)):
#         save.write(str(globVar.w_pieces[i].color))
#         save.write(",")
#         save.write(str(globVar.w_pieces[i].selected))
#         save.write(",")
#         save.write(str(globVar.w_pieces[i].type))
#         save.write(",")
#         save.write(str(globVar.w_pieces[i].label))
#         save.write(",")
#         save.write(str(globVar.w_pieces[i].row))
#         save.write(",")
#         save.write(str(globVar.w_pieces[i].col))
#         save.write(",")
#
#     save.write("\n")
#
#     # save b_pieces
#     for i in range(len(globVar.b_pieces)):
#         save.write(str(globVar.b_pieces[i].color))
#         save.write(",")
#         save.write(str(globVar.b_pieces[i].selected))
#         save.write(",")
#         save.write(str(globVar.b_pieces[i].type))
#         save.write(",")
#         save.write(str(globVar.b_pieces[i].label))
#         save.write(",")
#         save.write(str(globVar.b_pieces[i].row))
#         save.write(",")
#         save.write(str(globVar.b_pieces[i].col))
#         save.write(",")
#
# def write_r_PiecesArrays(save):
#     save.write("\n")
#
#     # save r_w_pieces
#     for i in range(len(globVar.r_w_pieces)):
#         save.write(str(globVar.r_w_pieces[i].color))
#         save.write(",")
#         save.write(str(globVar.r_w_pieces[i].selected))
#         save.write(",")
#         save.write(str(globVar.r_w_pieces[i].type))
#         save.write(",")
#         save.write(str(globVar.r_w_pieces[i].label))
#         save.write(",")
#         save.write(str(globVar.r_w_pieces[i].row))
#         save.write(",")
#         save.write(str(globVar.r_w_pieces[i].col))
#         save.write(",")
#
#     save.write("\n")
#
#     # save r_b_pieces
#     for i in range(len(globVar.r_b_pieces)):
#         save.write(str(globVar.r_b_pieces[i].color))
#         save.write(",")
#         save.write(str(globVar.r_b_pieces[i].selected))
#         save.write(",")
#         save.write(str(globVar.r_b_pieces[i].type))
#         save.write(",")
#         save.write(str(globVar.r_b_pieces[i].label))
#         save.write(",")
#         save.write(str(globVar.r_b_pieces[i].row))
#         save.write(",")
#         save.write(str(globVar.r_b_pieces[i].col))
#         save.write(",")
#
#     save.write("\n")
#
#     # save r_avail
#     for i in range(len(globVar.r_avail)):
#         save.write(str(globVar.r_avail[i].pieceStatus))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].color))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].piece.color))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].piece.type))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].piece.label))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].piece.row))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].piece.col))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].row))
#         save.write(",")
#         save.write(str(globVar.r_avail[i].col))
#         save.write(",")
#
#     save.write("\n")
#
# def write_firstPawns(save):
#     recordFirstPawns()
#     # save firstPawns
#     for i in range(len(globVar.firstPawns)):
#         save.write(str(globVar.firstPawns[i].color))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].selected))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].type))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].label))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].row))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].col))
#         save.write(",")
#         save.write(str(globVar.firstPawns[i].firstMove))
#         save.write(",")
#
# def write_p_moves(save):
#     # white potenial moves
#     for i in range(len(globVar.p_w_moves)):
#         save.write(str(globVar.p_w_moves[i].pieceStatus))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].color))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].piece.color))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].piece.type))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].piece.label))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].piece.row))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].piece.col))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].row))
#         save.write(",")
#         save.write(str(globVar.p_w_moves[i].col))
#         save.write(",")
#
#     save.write("\n")
#
#     # black potenial moves
#     for i in range(len(globVar.p_b_moves)):
#         save.write(str(globVar.p_b_moves[i].pieceStatus))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].color))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].piece.color))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].piece.type))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].piece.label))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].piece.row))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].piece.col))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].row))
#         save.write(",")
#         save.write(str(globVar.p_b_moves[i].col))
#         save.write(",")
#
#     save.write("\n")
#
#
# def recordFirstPawns():
#     globVar.firstPawnsNum = 0
#     globVar.firstPawns = [pieces.Pawn("none", "none")]
#     for i in range(8):
#         for j in range(8):
#             if (board.Grid(i,j).piece.type == "pawn" and
#             board.Grid(i,j).piece.firstMove and
#             board.Grid(i,j).piece.color != "none"):
#                 globVar.firstPawns.append(board.Grid(i,j).piece)
#     globVar.firstPawnsNum = len(globVar.firstPawns)
#
# def record_user_move(fpc, availMoves, choice):
#     toSqr = copy.deepcopy(availMoves[choice - 1])
#     tpc = toSqr.piece
#     file = open("moves.txt", "a+")
#     file.write("Turn #{}\n".format(globVar.playerCount + 1))
#     if globVar.player == "W":
#         file.write("WHITE\n")
#     else:
#         file.write("BLACK\n")
#
#     file.write(fpc.type + "\n")
#
#     f_col = chr(fpc.col + 65)
#     f_row = (8 - fpc.row)
#     t_col = chr(tpc.col + 65)
#     t_row = (8 - tpc.row)
#
#     file.write(str(f_col) + str(f_row) + " ---> " + str(t_col) + str(t_row) + "\n\n")
#     file.close()
#
#     globVar.u_m_f_ps = board.Grid(fpc.row, fpc.col).pieceStatus
#     globVar.u_m_f_p_color = fpc.color
#     globVar.u_m_f_p_type = fpc.type
#     globVar.u_m_f_p_label = fpc.label
#     globVar.u_m_f_row = fpc.row
#     globVar.u_m_f_col = fpc.col
#     # record toSqr
#     globVar.u_m_t_ps = board.Grid(tpc.row, tpc.col).pieceStatus
#     globVar.u_m_t_p_color = tpc.color
#     globVar.u_m_t_p_type = tpc.type
#     globVar.u_m_t_p_label = tpc.label
#     globVar.u_m_t_row = toSqr.row
#     globVar.u_m_t_col = toSqr.col
#
#     if fpc.type == "pawn":
#         globVar.u_m_fm = fpc.firstMove
#         board.Grid(fpc.row, fpc.col).piece.firstMove = False
#
# def recordMove(fromSqr, toSqr):
#     # record fromSqr
#     globVar.m_f_ps = fromSqr.pieceStatus
#     globVar.m_f_p_color = fromSqr.piece.color
#     globVar.m_f_p_type = fromSqr.piece.type
#     globVar.m_f_p_label = fromSqr.piece.label
#     globVar.m_f_row = fromSqr.row
#     globVar.m_f_col = fromSqr.col
#     # record toSqr
#     globVar.m_t_ps = toSqr.pieceStatus
#     globVar.m_t_p_color = toSqr.piece.color
#     globVar.m_t_p_type = toSqr.piece.type
#     globVar.m_t_p_label = toSqr.piece.label
#     globVar.m_t_row = toSqr.row
#     globVar.m_t_col = toSqr.col
#
#     if fromSqr.piece.type == "pawn":
#         globVar.m_fm = fromSqr.piece.firstMove
#         board.Grid(fromSqr.row, fromSqr.col).piece.firstMove = False
