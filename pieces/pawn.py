from pieces import Piece

class Pawn(Piece):
    def __init__(self, color, type):
        super().__init__(color, type)

    def __str__(self):
        if(self.color == "white"):
            return " P"
        else:
            return " p"
