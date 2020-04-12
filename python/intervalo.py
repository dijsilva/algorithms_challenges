intervalos = ("[0,25]", "(25,50]", "(50,75]", "(75,100]")

user_input = float(input())

for intervalo in intervalos:
    if (user_input < 0) or (user_input > 100):
        print("Fora de intervalo")
        break
    values = intervalo.split(",")
    if '[' in values[0]:
        if ']' in values[1]:
            if (user_input >= int(values[0].split("[")[1])) and (user_input <= int(values[1].split("]")[0])):
                print("Intervalo {}".format(intervalo))
        else:
            if (user_input >= int(values[0].split("[")[1])) and (user_input < int(values[1].split(")")[0])):
                print("Intervalo {}".format(intervalo))
    else:
        if ']' in values[1]:
            if (user_input > int(values[0].split("(")[1])) and (user_input <= int(values[1].split("]")[0])):
                print("Intervalo {}".format(intervalo))
        else:
            if (user_input > int(values[0].split("(")[1])) and (user_input < int(values[1].split(")")[0])):
                print("Intervalo {}".format(intervalo))
