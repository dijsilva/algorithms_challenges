qtdStars = int(input())
list_carneiros = input()
carneiros = [int(x) for x in list_carneiros.split(" ")]

indexsOfStar = list(range(qtdStars))

starsAtaccked = []
index = 0
while True:
    
    if index in indexsOfStar:
        if index not in starsAtaccked:
            starsAtaccked.append(index)

        nOfAnimals = carneiros[index]

        if nOfAnimals > 0:
            carneiros[index] = nOfAnimals - 1
        
        if nOfAnimals % 2 == 0:
            index -= 1
        else:
            index += 1
    else:
        break

print("{} {}".format(len(starsAtaccked), sum(carneiros)))
