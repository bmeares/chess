import pieces
import square

numPlayers = -1
player = ""
noPlayers = False
playerCount = 0
w_NumPieces = 16
b_NumPieces = 16
r_w_NumPieces = 1
r_b_NumPieces = 1
w_check = False
b_check = False
removed = False
removed_label = -1
removed_color = "none"
last_row = -1
last_col = -1
scanning = False
r_avail_Num = 1
w_pieces = []
b_pieces = []
r_w_pieces = [pieces.Pawn("none", "none")]
r_b_pieces = [pieces.Pawn("none", "none")]
r_avail = [square.Square(False, "none", pieces.Pawn("none","none"), -1, -1)]
