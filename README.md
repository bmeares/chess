# Chess
This is a text-based version of Chess written in Python.

Use `python3 main.py` to run, or run the .exe I compiled for Windows (check the releases tab).

<img src="https://i.imgur.com/sdLRtp9.png" alt="Fancy" height=400> <img src="https://i.imgur.com/TTWpJTv.png" alt="Sorta fancy" height=400> <img src="https://i.imgur.com/8sXVB08.png" alt="Classic" height=400>


**Options:**

From the command line, run the game with the following flags to configure various settings. Use `python3 main.py -h` to display all options or `python3 main.py -m` to display all menus instead of using flags.


|      	| GRAPHICS              	|   	|      	| GAME MODES            	|
|------	|------------------------	|---- |------	|------------------------ |
| `-a` 	| *ASCII-only*          	|   	| `-0` 	| *0 Player*            	|
| `-l` 	| *Limited ANSI*        	|   	| `-1` 	| *1 Player*            	|
| `-u` 	| *Full Unicode / ANSI* 	|   	| `-2` 	| *2 Player*            	|
|      	|                       	|   	|      	|                       	|
|      	| **AI BEHAVIOR**       	|   	|      	| **MISC**              	|
| `-f` 	| *Fast*                	|   	| `-m` 	| *Show all menus*      	|
| `-s` 	| *Slow*                	|   	| `-h` 	| *Show help / options* 	|
| `-n` 	| *Normal*              	|   	| `-i` 	| *Simulation*          	|
| `-g` 	| *Aggressive*          	|   	|      	|                       	|
| `-c` 	| *Chill*               	|   	|      	|                       	|




**Simulation mode:**

Enter "s" at any menu prompt to enter Simulation Mode. From here you can run up to 1,000,000 games and see the resulting statistics.

**Features:**
- Autosaves your progress
- Outputs each turn to a .txt file
- Prevents players from entering check
- Easy-to-use input
- Can be paused/quit and resumed
- Displays the remaining number of pieces on the board
- Exchange pawns for other pieces when reaching the other side of the board
- 0, 1, or 2 player modes


I should have caught most bugs! Let me know how you break my code.

**Bugs:**
- None* at the moment

**To be implemented:**
- Castling

