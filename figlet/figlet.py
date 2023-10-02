from pyfiglet import Figlet

from sys import argv

import random

figlet = Figlet()

figlet.getFonts()
if len(argv) < 3 and len(argv) != 1 :
    print("Invalid usage length")
    print(len(argv))
    exit(1)

elif len(argv) == 3:
    if  argv[1] != '-f':
        print("Invalid usage flag")
        exit(1)

    try:
        fo = argv[2]

        if figlet.setFont(font = fo) == None:
            text = input("Text: ")
            output = figlet.renderText(text)
            print("Output:")
            print(output)

    except:
        print("Invalid usage")
elif len(argv) == 1:

    figlet.setFont(font = random.choice(["slant", "rectangles", "digital", "slant", "alphabet", "epic", "isometric3", "roman"]))
    text = input("Text: ")
    output = figlet.renderText(text)
    print("Output:")
    print(output)
    