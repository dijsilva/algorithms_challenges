valores = str(input())

valor_A, valor_B, valor_C = [float(x) for x in valores.split(" ")]

print("TRIANGULO: {:.3f}".format((valor_A * valor_C) / 2))
print("CIRCULO: {:.3f}".format(3.14159 * (valor_C ** 2)))
print("TRAPEZIO: {:.3f}".format((((valor_A + valor_B) * valor_C) / 2)))
print("QUADRADO: {:.3f}".format(valor_B ** 2))
print("RETANGULO: {:.3f}".format(valor_A * valor_B))