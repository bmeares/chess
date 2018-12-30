import platform
import os
import globVar

def change_font_windows():
    import ctypes

    LF_FACESIZE = 32
    STD_OUTPUT_HANDLE = -11

    class COORD(ctypes.Structure):
        _fields_ = [("X", ctypes.c_short), ("Y", ctypes.c_short)]

    class CONSOLE_FONT_INFOEX(ctypes.Structure):
        _fields_ = [("cbSize", ctypes.c_ulong),
                    ("nFont", ctypes.c_ulong),
                    ("dwFontSize", COORD),
                    ("FontFamily", ctypes.c_uint),
                    ("FontWeight", ctypes.c_uint),
                    ("FaceName", ctypes.c_wchar * LF_FACESIZE)]

    font = CONSOLE_FONT_INFOEX()
    font.cbSize = ctypes.sizeof(CONSOLE_FONT_INFOEX)
    font.nFont = 12
    font.dwFontSize.X = 11
    font.dwFontSize.Y = 18
    font.FontFamily = 54
    font.FontWeight = 800
    font.FaceName = "Lucida Console"

    handle = ctypes.windll.kernel32.GetStdHandle(STD_OUTPUT_HANDLE)
    ctypes.windll.kernel32.SetCurrentConsoleFontEx(
            handle, ctypes.c_long(False), ctypes.pointer(font))

if(platform.system() == "Windows"):
    import colorama
    colorama.init(convert = True)
    os.system("chcp 65001")
    os.system("CLS")
    change_font_windows()

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

BLUE_FG  = "\033[34m"
BLUE_BG  = "\033[44m"
CYAN  = "\033[1;36m"
GREEN = "\033[0;32m"
RESET = "\033[0;0m"
BOLD    = "\033[;1m"
REVERSE = "\033[;7m"
BRIGHT_WHITE = "\033[107m"
BRIGHT_WHITE_FG = "\033[97m"
DULL_WHITE_FG = "\033[37m"
DULL_WHITE_BG = "\033[47m"
DARK_BLACK = "\033[30m"
DARK_BLACK_BG = "\033[40m"
BRIGHT_BLUE_FG = "\033[94m"
BRIGHT_BLUE_BG = "\033[104m"
BRIGHT_RED_FG = "\033[91m"
BRIGHT_RED_BG = "\033[101m"
DULL_YELLOW_FG = "\033[33m"
BRIGHT_YELLOW_BG = "\033[103m"
BRIGHT_YELLOW_FG = "\033[93m"
DULL_RED_FG = "\033[31m"
DULL_RED_BG = "\033[41m"
BRIGHT_CYAN_FG = "\033[96m"
BRIGHT_GREEN_FG = "\033[92m"
BRIGHT_MAGENTA_FG = "\033[95m"

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

def limited_pieces():
    global w_pawn, w_bishop, w_knight, w_king, w_queen, w_rook
    global b_pawn, b_bishop, b_knight, b_king, b_queen, b_rook
    w_pawn = BRIGHT_WHITE_FG + "P"
    w_bishop = BRIGHT_WHITE_FG + "B"
    w_knight = BRIGHT_WHITE_FG + "N"
    w_king = BRIGHT_WHITE_FG + "K"
    w_queen = BRIGHT_WHITE_FG + "Q"
    w_rook = BRIGHT_WHITE_FG + "R"

    b_pawn = DARK_BLACK + "p"
    b_bishop = DARK_BLACK + "b"
    b_knight = DARK_BLACK + "n"
    b_king = DARK_BLACK + "k"
    b_queen = DARK_BLACK + "q"
    b_rook = DARK_BLACK + "r"

def inverse_ansi(text):
    return "\x1b[7m" + text + "\x1b[0m"

def set_mode():
    print("\x1b[=0mMODE\x1b[0m")

def blink_ansi(text):
    return "\x1b[5m" + text + "\x1b[0m"

def white_header(text):
    if globVar.unicode:
        return colors_ansi(Black, Light_gray, text)
    if globVar.limited_unicode:
        return DARK_BLACK + BRIGHT_WHITE + text

def black_header(text):
    if globVar.unicode:
        return colors_ansi(White, Dark_gray, text)
    if globVar.limited_unicode:
        return BRIGHT_WHITE_FG + DARK_BLACK_BG + text

def header_separator(text):
    if globVar.unicode:
        return colors_ansi(White, Gray, text)
    if globVar.limited_unicode:
        return DULL_YELLOW_FG + DULL_WHITE_BG + text

def normal(text):
    if globVar.limited_unicode:
        return DULL_YELLOW_FG + DULL_RED_BG + text
    return colors_ansi(Pale_yellow, Dark_red, text)

if __name__ == '__main__':
    print(colors_ansi(Tan, Brown, "hm"))
