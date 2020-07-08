frases = [
        "Putz vei, o Leo ta demorando muito pra jogar...",
        "Os atributos dos monstros vao ser inteligencia, sabedoria...", 
        "Iron Maiden's gonna get you, no matter how far!", 
        "Urano perdeu algo muito precioso..."
        ]


def returnUnique(vector):
    repeats = {}
    for i in vector:
        if i not in repeats:
            repeats[i] = 1
        else:
            repeats[i] += 1
    for key, value in repeats.items():
        if value == 1:
            unique = key
        else:
            repeat = key
    return unique, repeat


while True:
    try:
        user_input = input().split(" ")
        if user_input[0] == user_input[1] == user_input[2]:
            print(frases[0])

        elif len(list(set(user_input))) == 2:
            unique, repeat = returnUnique(user_input)

            if (unique == 'pedra' and repeat == 'papel') or (unique == 'tesoura' and repeat == 'pedra') or (unique == 'papel' and repeat == 'tesoura'):
                print(frases[0])
            else:
                print(frases[user_input.index(unique) + 1])
        else:
            print(frases[0])
    except EOFError:
        break
