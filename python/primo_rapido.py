from math import sqrt
#criando uma lista de numeros primos usando o crivo de Eratóstenes
def found_prime(value: int):
    A = [True] * (value +1)
    A[0] = A[1] = False
    for pos, prime in enumerate(A):
        if prime:
            for i in range(pos**2, value + 1, pos):
                A[i] = False
    
    primes = [i for i,info in enumerate(A) if info == True]
    return primes 


qtd = int(input())

listOfInputs = []
for i in range(qtd):
    num = int(input())

    listOfInputs.append(num)

primes = found_prime(round(sqrt(max(listOfInputs))))

for item in listOfInputs:

    check = True
    for i in primes:
        if i < item:
            if (item % i == 0):
                check = False
                break
        else:
            break
    if check == True:
        print('Prime')
    else:
        print('Not Prime')
