# TODO
def main():
    n = int(input("Height: "))
    l = n
    for i in range(1, n + 1):
        print(" " * l, end="")
        print("#" * i + "  " + "#" * i)
        l -= 1


main()
