#!/usr/bin/python3
""" A prime example of steak """


def isWinner(x, nums):
    """
    Maria and Ben are playing a game.
    Given a set of consecutive integers
    starting from 1 up to and including n,
    they take turns choosing a prime number
    from the set and removing that number and
    its multiples from the set. The player
    that cannot make a move loses the game.

    They play x rounds of the game, where n
    may be different for each round.
    Assuming Maria always goes first and
    both players play optimally, determine
    who the winner of each game is.

    Prototype: def isWinner(x, nums)
    where x is the number of rounds and nums is an array of n
    Return: name of the player that won the most rounds
    If the winner cannot be determined, return None
    You can assume n and x will not be larger than 10000
    You cannot import any packages in this task
    """

    if x is None or nums is None or x == 0 or nums == []:
            return None
    newList = []
    if len(nums) == 1 and nums[0] == 1:
        return "Ben"
    for i in nums:
        if isPrime(i):
            newList.append(i)
    if len(newList) == 0:
        return None
    else:
        if len(newList) % 2 == 0:
            return "Maria"
        else:
            return "Ben"


def isPrime(n):
    if n == 2 or n == 3:
        return True
    if n < 2 or n % 2 == 0:
        return False
    if n < 9:
        return True
    if n % 3 == 0:
        return False
    r = int(n**0.5)
    # since all primes > 3 are of the form 6n ± 1
    # start with f=5 (which is prime)
    # and test f, f+2 for being prime
    # then loop by 6.
    f = 5
    while f <= r:
        # print('\t',f)
        if n % f == 0:
            return False
        if n % (f+2) == 0:
            return False
        f += 6
    return True
