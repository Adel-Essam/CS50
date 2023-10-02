# TODO
def main():
    n = input("Number: ")
    le = len(n)
    n = int(n)
    sum1 = 0
    sum2 = 0
    check = 0
    for i in range(le):
        y = n % 10
        if i % 2 == 1:
            sum1 += int((y * 2) % 10)
            sum1 += int((y * 2) / 10)
        else:
            sum2 += n % 10
        if i == le - 2:
            check = n
            check = int(check)
        n /= 10
        n = int(n)
    if (sum1 + sum2) % 10 == 0:
        if (check >= 51 and check <= 55) and le == 16:
            print("MASTERCARD")
        elif (check == 34 or check == 37) and le == 15:
            print("AMEX")
        elif int(check / 10) == 4:
            if le == 13 or le == 16:
                print("VISA")
        else:
            print("INVALID")
    else:
        print("INVALID")


main()
