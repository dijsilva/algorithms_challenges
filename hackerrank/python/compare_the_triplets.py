def compareTriplets(a, b):
    if len(a) != len(b):
        return
    alice = 0
    bob = 0
    for i in list(range(len(a))):
        if a[i] > b[i]:
            bob += 1
        elif a[i] < b[i]:
            alice += 1
        else:
            pass
    
    return [alice, bob]


print(compareTriplets([17, 28, 30], [99, 16, 8]))