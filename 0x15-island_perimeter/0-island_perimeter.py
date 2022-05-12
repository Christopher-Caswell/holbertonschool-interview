#!/usr/bin/python3
""" Let's find us an island"""


def island_perimeter(grid):
  """
    Given a grid of 1s and 0s, find the perimeter of the island.
    grid is a list of list of integers:
    0 represents water
    1 represents land
    Each cell is square, with a side length of 1
    Cells are connected horizontally/vertically (not diagonally).
    grid is rectangular, with its width and height not exceeding 100
    The grid is completely surrounded by water
    There is only one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water surrounding the island).
  """

  dirt = 0

  for rows in range(len(grid)):
    for cols in range(len(grid[0])):
      if grid[rows][cols] == 1:
        if rows == 0 or grid[rows - 1][cols] == 0:
          dirt += 1
        if rows == len(grid) - 1 or grid[rows + 1 ][cols] == 0:
          dirt += 1
        if cols == 0 or grid[rows][cols - 1] == 0:
          dirt += 1
        if cols == len(grid[0]) - 1 or grid[rows][cols + 1] == 0:
          dirt += 1

  return dirt
