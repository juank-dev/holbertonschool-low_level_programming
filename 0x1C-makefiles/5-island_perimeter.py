#!/usr/bin/python3
""" PERIMETER OF A ISLAND"""


def island_perimeter(grid):
    """
    function def island_perimeter(grid):
    that returns the perimeter of the island described in grid
    """
    if len(grid) > 100 or len(grid[0]) > 100:
        return
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                k = i
                h = j
                if i - 1 < 0:
                    k = 1
                    perimeter += 1
                if j - 1 < 0:
                    h = 1
                    perimeter += 1
                if j == len(grid[i]) -1:
                    h = j - 1
                    perimeter += 1
                if i == len(grid) -1:
                    k = i - 1
                    perimeter += 1
                if grid[k - 1][j] == 0:
                    perimeter += 1
                if grid[i][h - 1] == 0:
                    perimeter += 1
                if grid[i][h + 1] == 0:
                    perimeter += 1
                if grid[k + 1][j] == 0:
                    perimeter += 1
    return perimeter
