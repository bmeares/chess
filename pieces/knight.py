from pieces import Piece

class Knight(Piece):
    def __init__(self, color, type):
        Piece.__init__(self, color, type)

    def __str__(self):
        if(self.color == "W"):
            return "N"
        else:
            return "n"
