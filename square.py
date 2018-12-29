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
            # print(self.piece, end="")
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
            if not globVar.unicode and self.color == "black":
                out = a_block
            # if self.color == "black":
            #     if(globVar.unicode):
            #         return colors.bg_ansi("  ", "black")
            #         # return u_block
            #     else:
            #         return a_block
            #     # if platform.system() == "Windows":
            #     #     return a_block
            #     # else:
            #     #     return u_block
            # elif self.color == "white":
            #     return colors.bg_ansi("  ", "white")

        if self.color == "black" and globVar.unicode:
            out = colors.color_bg_only(colors.Brown, out)
            # out = colors.colors_ansi(colors.White, colors.Brown, out)
            # out = colors.bg_ansi(out, "black")
        elif globVar.unicode:
            out = colors.color_bg_only(colors.Tan, out)
            # out = colors.colors_ansi(colors.Black, colors.Tan, out)
            # out = colors.bg_ansi(out, "white")
        return out
