value = int(input())
print(value)

notas_100 = value // 100
if notas_100 > 0:
    value = value - (notas_100 * 100)

notas_50 = value // 50
if notas_50 > 0:
    value = value - (notas_50 * 50)

notas_20 = value // 20
if notas_20 > 0:
    value = value - (notas_20 * 20)

notas_10 = value // 10
if notas_10 > 0:
    value = value - (notas_10 * 10)

notas_5 = value // 5
if notas_5 > 0:
    value = value - (notas_5 * 5)


notas_2 = value // 2
if notas_2 > 0:
    value = value - (notas_2 * 2)

notas_1 = value
print("{} nota(s) de R$ 100,00".format(notas_100))
print("{} nota(s) de R$ 50,00".format(notas_50))
print("{} nota(s) de R$ 20,00".format(notas_20))
print("{} nota(s) de R$ 10,00".format(notas_10))
print("{} nota(s) de R$ 5,00".format(notas_5))
print("{} nota(s) de R$ 2,00".format(notas_2))
print("{} nota(s) de R$ 1,00".format(notas_1))


    
    
