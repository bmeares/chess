def runAgain():
    clear()
    yes = False
    y = input("\n Run again? (y/n): ")

    if y == 'y' or y == 'Y':
        yes = True

    return yes
