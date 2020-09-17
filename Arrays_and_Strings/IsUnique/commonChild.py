#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the commonChild function below.
def commonChild(s1, s2):
    newS1 = ""
    newS2 = ""

    for i in range(len(s1)):
        if s1[i] in s2:
            newS1 += s1[i]
        if s2[i] in s1:
            newS2 += s2[i]
    
    if newS1 == "" or newS2 == "":
        return 0

    m = len(newS1)
    n = len(newS2)

    L = [[None]*(n+1) for i in range(m+1)]
    for i in range(m+1):
        for j in range(n+1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif newS1[i-1] == newS2[j-1]:
                L[i][j] = L[i-1][j-1]+1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])
    return L[m][n]


print(commonChild("ABCDEF", "FBDAMN"))

