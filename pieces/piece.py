class Piece:
    def __init__(self, color, type):
        self.color = color
        self.option = 1
        self.selected = False
        self.des = False
        self.type = type
        self.label = ""

    def __str__(self):
        if self.des:
            return "*" + self.label

        elif self.selected:
            return "[]"

        elif self.color == "white" and self.type == "pawn":
            return " p"
