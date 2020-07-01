inputs = []

loopVar = True
while loopVar == True:
    user_input = int(input())
    if user_input == 0:
        loopVar = False
    # index = 0
    size_matriz = list(range(1, user_input + 1))
    for row in size_matriz:
        centerOfMatriz = round(user_input / 2)
        # check = centerOfMatriz - 1
        for column in size_matriz:
            if (column <= centerOfMatriz) and (row <= centerOfMatriz):
                if column < (user_input):
                    print("   {}".format(min(column, row)), end="")
                elif column == (user_input):
                    print("   {}".format(min(column, row)))
            
            # elif (column == centerOfMatriz + 1) and (row == centerOfMatriz + 1):
            #     if column < (user_input):
            #         print("   {}".format(min(user_input - row, user_input - column)), end="")
            #     elif column == (user_input):
            #         print("   {}".format(min(user_input - row, user_input - column)))
            else:
                if column < (user_input):
                    print("   {}".format(min(user_input + 1 - row, user_input + 1 - column)), end="")
                elif column == (user_input):
                    print("   {}".format(min(user_input + 1 - row, user_input + 1 - column)))
