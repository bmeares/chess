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
            if globVar.unicode or globVar.limited_unicode:
                out += colors.BRIGHT_GREEN_FG
            if self.pieceStatus and self.option < 10:
                out += str(self.piece)
                if globVar.unicode or globVar.limited_unicode:
                    out += colors.BRIGHT_MAGENTA_FG
            elif self.pieceStatus and (globVar.unicode or globVar.limited_unicode): # clean this up
                out += colors.BRIGHT_MAGENTA_FG
            elif self.option < 10:
                out += " "
            out += str(self.option)

        elif self.pieceStatus:
            out += str(self.piece)
            if self.piece.selected:
                out += "^"
                if globVar.unicode:
                    out = colors.blink_ansi(out)
            else:
                if self.piece.color == "W":
                    out += "'"
                elif self.piece.color == "b":
                    out += "."
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
            temp_out = ""
            if self.color == "black":
                out = colors.BRIGHT_BLUE_BG + out
            else:
                out = colors.BRIGHT_RED_BG + out
        return out
