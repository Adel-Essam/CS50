from pyfiglet import Figlet

import sys

figlet = Figlet()

figlet.getFonts()
f = sys.argv[2]
figlet.setFont(font=f)

s = input("Input: ")
print("Output: ")
print(figlet.renderText(s))