def plusMinus(arr):
    total = len(arr)
    minus = 0
    plus = 0
    zero = 0
    for i in arr:
        if i > 0:
            plus += 1
        elif i < 0:
            minus += 1
        else:
            zero += 1
    print("{:.6f}".format(plus / total))
    print("{:.6f}".format(minus / total))
    print("{:.6f}".format(zero / total))

plusMinus([-4, 3, -9, 0, 4, 1])