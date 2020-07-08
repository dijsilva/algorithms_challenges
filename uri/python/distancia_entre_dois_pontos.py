ponto_1 = str(input())
ponto_2 = str(input())

x_1, y_1 = [float(x) for x in ponto_1.split(" ")]
x_2, y_2 = [float(x) for x in ponto_2.split(" ")]

distance  = (((x_2 - x_1) ** 2) + ((y_2 - y_1)** 2)) ** 0.5

print("{:.4f}".format(distance))