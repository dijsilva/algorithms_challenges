#1170
qtd = int(input())


listOfInputs = []
for i in range(qtd):
    a = float(input())
    listOfInputs.append(a)

for item in listOfInputs:
    cont = 0
    result = item
    while result > 1:
        result = result / 2
        cont += 1
    print("{} dias".format(cont))

