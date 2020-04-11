n_cases = int(input())

for i in range(0, n_cases):
    nOfRocks_distanceOfMargin = input()
    n_of_rocks = int(nOfRocks_distanceOfMargin.split()[0])
    distanceOfMargin = int(nOfRocks_distanceOfMargin.split()[1])

    sizes_of_rocks = input()
    sizes_of_rocks = sizes_of_rocks.split(" ")

    start_distance = 0
    salts = []


    # # go to margin
    # for pos, rock in sizes_of_rocks:
    #     type_of_rock = rock.split("-")[0]
    #     if type_of_rock == 'S':
    #         start_distance += rock.split("-")[1]

    #         del sizes_of_rocks[pos]
    #     elif type_of_rock == 'B':
    #         start_distance += rock.split("-")[1]
    #     if start_distance >= distanceOfMargin:
    #         break


    # # return to home
    # for pos, rock in sizes_of_rocks[ : : -1]:
    #     type_of_rock = rock.split("-")[0]
    #     if type_of_rock == 'S':
    #         start_distance -= (distanceOfMargin - rock.split("-")[1])
    #         del sizes_of_rocks[pos]
    #     elif type_of_rock == 'B':
    #         start_distance -= (distanceOfMargin - rock.split("-")[1])
    #     if start_distance <= 0:
    #         break
