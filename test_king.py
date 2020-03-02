  import unittest
  import globVar
  import board
  from square import Square
  import pieces

  class TestKing(unittest.TestCase):
           def test_scan(self):
   
          # King position
          b = board
          b.grid = []
          for i in range(16):
                  b.grid[i].append(Square(False, "b", pieces.Piece("none", "none"), i, j))
                  for j in range(16):
                          b.grid[i].append(Square(False, "b", pieces.Piece("none", "none"), i, j))
  
          #king moves
          king_movees = [[0, 1], [0, -1], [1, 0], [-1, 0], [-1, 1], [1, -1], [1, 1], [-1, -1]]
  
  
          #Create the king w/ all possible moves
          b.Grid(3, 3).piece = pieces.King(False, "King")
          b.Grid(3, 3).piece.row = 3
       	  b.Grid(3, 3).piece.col = 3
  
          #relative moves
          possible_moves = []
          for i in range(8):
                  possible_moves.append([3, 3])
                  possible_moves[i][0] += king_moves[i][0]
                  possible_moves[i][1] += king_moves[i][1]
  
  
          #fetch movies
          availMoves = b.Grid(3, 3).piece.scan()
  
          given_moves = []
          for move in availMoves:
                 given_moves.append([move.row, move.col])
  
          A = set(map(tuple, possible_moves))
          B = set(map(tuple, given_moves))
  
          self.assertTrue(A.issubset(B))
          self.assertTrue(B.issubset(A))
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
~                                                                                                     
Type  :quit<Enter>  to exit Vim                                                     21,0-1        All

