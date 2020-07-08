inputUser = input()
a, b, c = [int(x) for x in inputUser.split(" ")]

Sub1 = b - a

Sub2 = c - b


if a == b:
    if c > b:
        print(":)")
    else:
        print(":(")

elif (Sub1 > 0) and (Sub2 > 0):
    if Sub2 >= Sub1:
        print(":)")
    else:
        print(":(")

elif (Sub1 < 0) and (Sub2 < 0):
    if Sub2 <= Sub1:
        print(":(")
    else: 
        print(":)")

elif (Sub1 > 0) and (Sub2 <= 0):
    print(":(")

elif (Sub1 < 0) and (Sub2 >= 0):
    print(":)")