values = {
    1: 4.00,
    2: 4.50,
    3: 5.00,
    4: 2.00,
    5: 1.50
}
user_input = [int(x) for x in input().split()]

print("Total: R$ {:.2f}".format(values[user_input[0]] * user_input[1]))
