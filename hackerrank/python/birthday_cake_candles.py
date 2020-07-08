def birthdayCakeCandles(ar):
    tallest = max(ar)
    occurrences = ar.count(tallest)
    return occurrences


birthdayCakeCandles([3,2,1,3])