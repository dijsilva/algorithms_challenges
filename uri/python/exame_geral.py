while True:
    try:
        user_input = input().split(" ")
        n, q = [int(x) for x in user_input]


        notes = []
        while len(notes) < n:
            value_input = int(input())
            notes.append(value_input)
        
        cont = 0
        ordered = notes[:n]
        ordered.sort(reverse=True)
        while cont < q:
            search = int(input())
            print(ordered[search - 1])
            cont += 1
    except EOFError:
        break
