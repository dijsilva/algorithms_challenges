pecas_1 = str(input())
pecas_2 = str(input())

valor_1 = int(pecas_1.split(" ")[1]) * float(pecas_1.split(" ")[2])
valor_2 = int(pecas_2.split(" ")[1]) * float(pecas_2.split(" ")[2])

print("VALOR A PAGAR: R$ {:.2f}".format(valor_1 + valor_2))