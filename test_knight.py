import unittest
import globVar
import board
from square import Square
import pieces


class TestKnight(unittest.TestCase):
	def test_scan(self):

		# Generate empty chess board
		b = board
		b.grid = []
		for i in range(16):
			b.grid.append([])
			for j in range(16):
				b.grid[i].append(Square(False, "b", pieces.Piece("none", "none"), i, j))

		# List of hardcoded moves relative to starting position
		# For example knight_moves[0] = [-1, 2] implies one move left and two moves up
		knight_moves = [[-1, 2], [1, 2], [2, 1], [2, -1], [1, -2], [-1, -2], [-2, -1], [-2, 1]]

		# Create a knight at location 3,3
		# This should allow the knight all of its possible moves
		b.Grid(3, 3).piece = pieces.Knight(False, "Knight")
		b.Grid(3, 3).piece.row = 3
		b.Grid(3, 3).piece.col = 3

		# Add relative moves to current location to get list of true movement locations
		possible_moves = []
		for i in range(8):
			possible_moves.append([3, 3])
			possible_moves[i][0] += knight_moves[i][0]
			possible_moves[i][1] += knight_moves[i][1]

		# Ask the game to fetch possible moves for this piece
		availMoves = b.Grid(3, 3).piece.scan()

		given_moves = []
		for move in availMoves:
			given_moves.append([move.row, move.col])

		A = set(map(tuple, possible_moves))
		B = set(map(tuple, given_moves))

		# By definition two sets are the same if set1 is a subset of set2 and set2 is a subset of set1
		# Here we assert that the set of moves given by the game is the same as the true movement of the knight piece
		self.assertTrue(A.issubset(B))
		self.assertTrue(B.issubset(A))


unittest.main()

