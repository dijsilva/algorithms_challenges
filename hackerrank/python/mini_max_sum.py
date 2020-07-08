def miniMaxSum(arr):
    arr.sort(reverse=False)
    _min = sum(arr[0:4])
    _max = sum(arr[1:])
    print(_min, _max)


miniMaxSum([1,2,3,4,5])