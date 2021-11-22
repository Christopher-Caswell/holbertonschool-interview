#!/usr/bin/python3
"""
Minimum number of operations necessary to copy
and paste h such that it fulfills n
"""


def minOperations(n):
    """ Operate. If n is impossible, return 0 """

    copyAll = 0
    totalPasted = 1
    operationIteration = 0

    if n < 2:
        return 0

    while totalPasted < n:
        if n % totalPasted == 0:
            copyAll = totalPasted
            operationIteration += 1

        totalPasted += copyAll
        operationIteration += 1

    return operationIteration
