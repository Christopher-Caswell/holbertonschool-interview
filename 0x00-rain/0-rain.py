#!/usr/bin/python3
""" Calculates how much water is retained. """


def rain(walls):
    """ Given a list of non-negative integers representing
    the heights of walls with unit width 1, as if viewing the
    cross-section of a relief map, calculate how many
    square units of water will be retained after it rains. """
    collected_water = 0
    LWall = -1
    RWall = -1

    for i in range(len(walls)):
        if LWall == -1 and walls[i] > 0:
            """ LWall = -1 """
            LWall = i
        elif LWall != -1 and walls[i] >= walls[LWall]:
            collected_water += (i - (LWall + 1)) * walls[LWall]
            LWall = i

    """ for i in range(len(walls)):
        if RWall == -1 and walls[i] > 0:
            RWall = i"""

    for i in range(len(walls) - 1, -1, -1):
        if RWall == -1 and walls[i] > 0:
            RWall = i
        elif RWall != -1 and walls[i] >= walls[RWall]:
            collected_water += (RWall - (i + 1)) * walls[RWall]
            RWall = i
        if RWall == LWall:
            """ continue """
            break

    return collected_water
