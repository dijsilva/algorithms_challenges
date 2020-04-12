line_of_matriz = int(input())
operation = str(input())

values = []

for i in range(0, 144):
    value = float(input())
    values.append(value)

if operation == 'S':
    init = line_of_matriz * 12
    end = init + 12
    line_selected = values[init: end]
    soma = sum(line_selected)
    print(soma)
else:
    init = line_of_matriz * 12
    end = init + 12
    line_selected = values[init: end]
    media = sum(line_selected) / len(line_selected)
    print(media)
