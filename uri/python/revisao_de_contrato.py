#1120
while True:
    try:
        key, value = input().split(" ")

        if (key == '0') and (value == '0'):
            break
        algorisms = value.split(key)

        newValue = ''

        for item in algorisms:
            newValue += item


        if (len(newValue) > 0) and (int(newValue) > 0):
            print(int(newValue))
        else:
            print(0)

    except EOFError:
        break