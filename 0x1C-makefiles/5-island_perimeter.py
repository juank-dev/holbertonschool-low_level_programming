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
                if grid[i -1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
