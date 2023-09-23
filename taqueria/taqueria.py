from sys import exit

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
        try:
            s = input("Enter an item: ").capitalize()
            sum += items[s]
            print(f"total: {sum:.2f}")
        except EOFError:
            print()
            exit(0)

main()
