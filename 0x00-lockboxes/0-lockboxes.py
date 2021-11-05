#!/usr/bin/python3
"""Method that determines the consent of a box"""


def canUnlockAll(boxes):
    """Determine box-opening capability"""
    safeword = [0]
    banana = 0

    while banana < len(safeword):
        banana = len(safeword)
        for box in range(len(boxes)):
            if box in safeword:
                for key in boxes[box]:
                    if key < len(boxes) and key not in safeword:
                        safeword.append(key)

    return len(safeword) == len(boxes)
