#!/usr/bin/python3
""" Make change """


def makeChange(coins, total):
    """
    Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount total.
    Prototype: def makeChange(coins, total)
    Return: fewest number of coins needed to meet total
    If total is 0 or less, return 0
    If total cannot be met by any number of coins you have, return -1
    coins is a list of the values of the coins in your possession
    The value of a coin will always be an integer greater than 0
    You can assume you have an infinite number of each denomination of coin in the list
    Your solution’s runtime will be evaluated in this task
    """
    if total <= 0:
        return 0

    variable = [0]
    for i in range(1, total + 1):
        variable.append(-1)
        for coin in coins:
            if (i - coin >= 0 and s[i - coin] != -1 and
               (variable[i] > variable[i - coin] or variable[i] == -1)):
                variable[i] = 1 + variable[i - coin]

    return variable[total]
