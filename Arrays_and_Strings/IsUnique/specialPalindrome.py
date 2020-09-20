import math
import os
import random
import re
import sys

def substrCount(n, s):
    count = len(s)
    for i, c in enumerate(s):
        middle = 0
        for x in range(i+1, n):
            if c == s[x]:
                if middle == 0:
                    count += 1
                elif x - middle == middle - i:
                    count += 1
                    break
            else:
                if middle == 0:
                    middle = x
                else:
                    break
    return count

substrCount(7, 'abcbaba')