# Chess
This is a text-based version of Chess written in Python.

Use `python3 main.py` to run, or run the .exe I compiled for Windows (check the releases tab).

You can toggle between fancy graphics (Unicode / ANSI magic), sorta fancy (for legacy systems), and classic ASCII (typically a last resort).
 - Fancy
   - Unicode / ANSI magic
 - Sorta Fancy
   - Intended for legacy systems
   - Desinged on Windows 7
 - Classic
   - All ASCII
   - Typically a last resort
   
<img src="https://i.imgur.com/sdLRtp9.png" alt="Fancy" height=400> <img src="https://i.imgur.com/TTWpJTv.png" alt="Sorta fancy" height=400> <img src="https://i.imgur.com/8sXVB08.png" alt="Classic" height=400>

**Simulation mode:**

Enter "s" at any menu prompt to enter Simulation Mode. From here you can run up to 1000 games and see the resulting statistics. This feature is functional yet is still under construction, so let me know if you have any suggestions!

**Features:**
- Autosaves your progress
- Outputs each turn to a .txt file
- Prevents players from entering check
- Easy-to-use input
- Can be paused/quit and resumed
- Displays the remaining number of pieces on the board
- Exchange pawns for other pieces when reaching the other side of the board
- 0, 1, or 2 player modes



This project demonstrates inheritance by using six types of pieces, each with
its own scan() function. The program tracks players' remaining moves and pieces
and populates an array of potential moves after each turn. Once the list of
potential moves reaches zero, checkmate is called and the game ends.

I should have caught most bugs! Let me know how you break my code.

**Bugs:**
- None* at the moment

**To be implemented:**
- Castling
