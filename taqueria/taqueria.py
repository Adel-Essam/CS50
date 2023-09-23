def main():
    items = {
        "Baja Taco": 4.00,
        "Burrito": 7.50,
        "Bowl": 8.50,
        "Nachos": 11.00,
        "Quesadilla": 8.50,
        "Super Burrito": 8.50,
        "Super Quesadilla": 9.50,
        "Taco": 3.00,
        "Tortilla Salad": 8.00,
    }

    sum = 0
    while True:
        s = input("Enter an item and to exit press '-d': ")
        if s == "-d":
            break
        sum += items[s]
        print(f"total: {sum:.2f}")


main()
