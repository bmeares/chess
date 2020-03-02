import unittest
import globVar
import board
from square import Square
import pieces

class TestPawn(unittest.TestCase):
	def test_scan(self):

		# Define position of pawn
		pos = [12, 1]

		# Generate empty chess board
		test_board = board
		test_board.grid = []
		for i in range(16):
			test_board.grid.append([])
			for j in range(16):
				test_board.grid[i].append(Square(False, "b", pieces.Piece("none", "none"), i, j))

		standard_moves = [[pos[0] - 1, pos[1]]]
		other_moves = [[pos[0] - 1, pos[1]], [pos[0] - 2, pos[1]]]

		test_board.grid[pos[0]][pos[1]].piece = pieces.Pawn("W", "Pawn")
		test_board.grid[pos[0]][pos[1]].piece.row = pos[0]
		test_board.grid[pos[0]][pos[1]].piece.col = pos[1]
		#test_board.grid[pos[0]][pos[1]].piece.firstMove = True

		found_moves = test_board.grid[pos[0]][pos[1]].piece.scan()

		#print(found_moves[0].row, ", ", found_moves[0].col)
		assert(pos[0] == found_moves[0].row+1)
		assert(pos[1] == found_moves[0].col)

# class Testpawn(unittest.TestCase):
# 	def test_scan(self):
#
# 		# Generate empty chess board
# 		b = board
# 		b.grid = []
# 		for i in range(16):
# 			b.grid.append([])
# 			for j in range(16):
# 				b.grid[i].append(Square(False, "b", pieces.Piece("none", "none"), i, j))
#
# 		# List of hardcoded moves relative to starting position
# 		#Pawn_moves = [[0, 1]]
#
# 		# Create a pawn at location 3,3
# 		# This should allow the knight all of its possible moves
# 		b.Grid(1, 1).piece = pieces.Pawn(False, "Pawn")
# 		b.Grid(1, 0).piece.row = 1
# 		b.Grid(1, 0).piece.col = 0
#
#
# 		# Add relative moves to current location to get list of true movement locations
# 		# possible_moves = []
# 		# for i in range(8):
# 		# 	possible_moves.append([3, 3])
# 		# 	possible_moves[i][0] += Pawn_moves[i][0]
# 		# 	possible_moves[i][1] += Pawn_moves[i][1]
#
# 		# Ask the game to fetch possible moves for this piece
# 		availMoves = b.Grid(1, 0).piece.scan()
# 		print(availMoves)
#
# 		# given_moves = []
# 		# for move in availMoves:
# 		# 	given_moves.append([move.row, move.col])
# 		#
# 		# A = set(map(tuple, possible_moves))
# 		# B = set(map(tuple, given_moves))
#
# 		# By definition two sets are the same if set1 is a subset of set2 and set2 is a subset of set1
# 		# Here we assert that the set of moves given by the game is the same as the true movement of the knight piece
# 		# self.assertTrue(A.issubset(B))
# 		# self.assertTrue(B.issubset(A))
# 		#assert(availMoves[0][0] == 1)


unittest.main()