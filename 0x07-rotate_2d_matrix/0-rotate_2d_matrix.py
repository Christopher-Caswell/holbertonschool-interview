#!/usr/bin/python3
"""
Return nothing. The matrix must be edited in-place.
Assume the matrix will have 2 dimensions and will not be empty.
"""


def rotate_2d_matrix(matrix):
    """
    Rotate matrix 90 degrees clockwise
    """
    Rot8 = [[]]
    Rot8 = list(zip(*matrix[::-1]))
    for x in range(len(matrix)):
        for y in range(len(matrix[x])):
            matrix[x][y] = Rot8[x][y]

    return Rot8

"""
main file:
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = [[1, 2, 3],
              [4, 5, 6],
              [7, 8, 9]]

    rotate_2d_matrix(matrix)
    print(matrix)
"""
