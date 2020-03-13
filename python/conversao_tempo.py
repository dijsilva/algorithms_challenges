value = int(input())

horas = 0
minutos = 0
segundos = 0
horas_teste = value // 60
if horas_teste > 60:
    horas = horas_teste // 60
    sub = horas * (60**2)
    value = value - sub

minutos_teste = value // 60
if minutos_teste > 0:
    minutos = minutos_teste
    segundos = value - (minutos * 60)
else:
    segundos = value


print("{}:{}:{}".format(horas, minutos, segundos))
