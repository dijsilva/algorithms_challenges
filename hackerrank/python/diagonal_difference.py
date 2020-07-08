def diagonalDifference(arr):
    first_diagonal_sum = 0
    second_diagonal_sum = 0
    for pos, i in enumerate(arr):
        first_diagonal_sum += i[pos]

        second_diagonal_sum += i[-1 - pos]
    return abs(first_diagonal_sum - second_diagonal_sum)
        




print(diagonalDifference([[11, 2, 4], [4, 5, 6], [10, 8, -12]]))