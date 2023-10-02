# TODO
def main():
    n = int(input("Height: "))
    if n < 1:
        print("Enter a positive value")
        return 1
    l = n
    for i in range(1, n + 1):
        if l > 1:
            print(" " * (l - 1), end="")
        print("#" * i + "  " + "#" * i)
        l -= 1


main()
