class Color:
    def __init__(self, r, g, b):
        self.r = r
        self.g = g
        self.b = b


Brown = Color(86,48,8)
Tan = Color(239, 159, 83)
White = Color(255, 255, 255)
Black = Color(0, 0, 0)
Pale_yellow = Color(249, 236, 137)
Dark_red = Color(130, 5, 5)
Light_gray = Color(211, 211, 211)
Gray = Color(130, 130, 130)
Dark_gray = Color(50, 50, 50)
BLUE  = "\033[1;34m"
CYAN  = "\033[1;36m"
GREEN = "\033[0;32m"
RESET = "\033[0;0m"
BOLD    = "\033[;1m"
REVERSE = "\033[;7m"
BRIGHT_WHITE = "\033[1;107m"
DARK_BLACK = "\033[1;30m"


BLOCK = "█"
MAP = ""

def rgb_ansi(r,g,b,text):
    return "\x1b[38;2;" + str(r) + ";" + str(g) + ";" + str(b) + "m" + text + "\x1b[0m"

def colors_ansi(fore, back, text):
    return "\x1b[38;2;" + str(fore.r) + ";" + str(fore.g) + ";" + str(fore.b) + "m" + "\x1b" + "[48;2;" + str(back.r) + ";" + str(back.g) + ";" + str(back.b) + "m" + text

def color_bg_only(back, text):
    return "\x1b" + "[48;2;" + str(back.r) + ";" + str(back.g) + ";" + str(back.b) + "m" + text

def color_fore_only(fore, text):
    return "\x1b[38;2;" + str(fore.r) + ";" + str(fore.g) + ";" + str(fore.b) + "m" + text

w_pawn = color_fore_only(White, "♟")
w_bishop = color_fore_only(White, "♝")
w_knight = color_fore_only(White, "♞")
w_king = color_fore_only(White, "♚")
w_queen = color_fore_only(White, "♛")
w_rook = color_fore_only(White, "♜")

b_pawn = color_fore_only(Black, "♟")
b_bishop = color_fore_only(Black, "♝")
b_knight = color_fore_only(Black, "♞")
b_king = color_fore_only(Black, "♚")
b_queen = color_fore_only(Black, "♛")
b_rook = color_fore_only(Black, "♜")

def inverse_ansi(text):
    return "\x1b[7m" + text + "\x1b[0m"

def set_mode():
    print("\x1b[=0mMODE\x1b[0m")

def blink_ansi(text):
    return "\x1b[5m" + text + "\x1b[0m"

def bg_ansi(text, color):
    if color == "white":
        return "\x1b[;47m" + text + "\x1b[0m"
        # return "\x1b[30;107m" + text + "\x1b[0m"
    if color == "black":
        # return "\x1b[37;40m" + text + "\x1b[0m"
        return "\x1b[;100m" + text + "\x1b[0m"
    if color == "grey" or color == "gray":
        return "\x1b[48;5;8m" + text + "\x1b[0m"


def normal(text):
    return colors_ansi(Pale_yellow, Dark_red, text)

if __name__ == '__main__':
    print(colors_ansi(Tan, Brown, "hm"))
