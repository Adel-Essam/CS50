# TODO
def main():
    while True:
        try:
            n = int(input("Height: "))
            if int(n) and (n >= 1 and n <= 8):
                l = n
                for i in range(1, n + 1):
                    if l > 1:
                        print(" " * (l - 1), end="")
                    print("#" * i + "  " + "#" * i)
                    l -= 1
                if i == n:
                    break
        except :
                ...


main()
