def remove_duplicates(arr):
    master = dict()
    org = [o for o in arr]
    minus = 0
    for ele in range(len(org)):
        if org[ele] in master:
            arr.pop(ele-minus)
            minus += 1
        else:
            master[org[ele]] = 1
    return arr

array_ex = [10, 5, 7, 3, 20, 190, 190, 190, 190, 10, 7, 3, 6, 23, 7]
remove_duplicates(array_ex)