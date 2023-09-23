from pyfiglet import Figlet
from sys import argv

figlet = Figlet()

figlet.getFonts()
f = argv[2]
figlet.setFont(font=f)

s = input("Input: ")
print("Output: ")
print(figlet.renderText(s))