class Jar:
    def __init__(self, capacity = 12):
        self.cap = capacity
        self.cap2 = capacity

    def __str__(self):
        return "🍪"*self.cap
    def deposit(self, n):
        self.cap+= n

    def withdraw(self, n):
        self.cap -= n

    def capacity(self):
        return self.cap2
    def size(self):
        return self.cap

def main():

    jar1 = Jar(10)
    print(jar1.__str__())

    jar1.withdraw(2)
    print(jar1.__str__())

    jar1.deposit(5)
    print(jar1.__str__())

    print(jar1.capacity())
    print(jar1.size())

main()