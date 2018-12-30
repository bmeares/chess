import pieces
import platform
import globVar
import colors

a_block = "##"
u_block = u'\u2588\u2588'

class Square:
    """
    The Square class contains a piece and data such as color,
    position, and several boolean values.
    """
    def __init__(self, pieceStatus, color, piece, row, col):
        self.pieceStatus = pieceStatus
        self.color = color
        self.piece = piece
        self.row = row
        self.col = col
        self.des = False
        self.option = 0

    def __str__(self):

        global a_block
        global u_block
        out = ""

        if self.des:
            if self.pieceStatus and self.option < 10:
                out += str(self.piece)
                # print(self.piece, end = "")
            elif self.option < 10:
                out += " "
                # print(" ",end="")
            out += str(self.option)

            # print(self.option, end="")

        elif self.pieceStatus:
            out += str(self.piece)
            if self.piece.selected:
                out += "^"
                if globVar.unicode:
                    out = colors.blink_ansi(out)
                # return out
                # print("^",end="")
            else:
                if self.piece.color == "W":
                    out += "'"
                    # print("'", end="")
                elif self.piece.color == "b":
                    out += "."
                    # print(".", end="")

        else:
            out += "  "
            if not globVar.unicode and self.color == "black" and not globVar.limited_unicode:
                out = a_block

        if globVar.unicode:
            if self.color == "black":
                out = colors.color_bg_only(colors.Brown, out)
            else:
                out = colors.color_bg_only(colors.Tan, out)

        elif globVar.limited_unicode:
            if self.color == "black":
                out = colors.BRIGHT_BLUE_BG + out
            else:
                out = colors.BRIGHT_RED_BG + out
        return out
