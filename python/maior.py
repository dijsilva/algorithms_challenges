valores = str(input())

valores_list = [int(x) for x in valores.split(" ")]

maiorAb = ((valores_list[0] + valores_list[1] + abs(valores_list[0] - valores_list[1])) / 2)
maiorAc = ((valores_list[0] + valores_list[2] + abs(valores_list[0] - valores_list[2])) / 2)

if maiorAb > maiorAc:
    print("{} eh o maior".format(int(maiorAb)))
else:
    print("{} eh o maior".format(int(maiorAc)))
