def staircase(n):
    for i in list(range(1, n+1)):
        print("{}{}".format(" " * (n - i), "#" * i))

staircase(4)