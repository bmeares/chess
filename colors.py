RED   = "\033[1;31m"
BLUE  = "\033[1;34m"
CYAN  = "\033[1;36m"
GREEN = "\033[0;32m"
RESET = "\033[0;0m"
BOLD    = "\033[;1m"
REVERSE = "\033[;7m"

BLOCK = "█"
MAP = ""

def rgb_ansi(r,g,b,text):
    return "\x1b[38;2;" + str(r) + ";" + str(g) + ";" + str(b) + "m" + text + "\x1b[0m"

def rgb_bg_ansi(r,g,b,r_bg,g_bg,b_bg,text):
    return "\x1b[38;2;" + str(r) + ";" + str(g) + ";" + str(b) + "m" + text + "\x1b[0m"
    # \e[38;2;r;g;bmtext\e[0m

def inverse_ansi(text):
    return "\x1b[7m" + text + "\x1b[0m"

def set_mode():
    print("\x1b[=0mMODE\x1b[0m")

def blink_ansi(text):
    return "\x1b[5m" + text + "\x1b[0m"

def bg_ansi(text, color):
    if color == "white":
        return "\x1b[30;47m" + text + "\x1b[0m"
    if color == "black":
        return "\x1b[37;40m" + text + "\x1b[0m"
    if color == "grey" or color == "gray":
        return "\x1b[48;5;8m" + text + "\x1b[0m"

if __name__ == '__main__':
    print("hm")
    set_mode()
    blink()
    print(bg_ansi("TEST"))
