#!/usr/bin/python3
""" Returns the perimeer of an island"""

def island_perimeter(grid):
    """ Returns the perimiter of the island described by grid where:

        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with zides length 1
        - Grid cells are conected horizontally/ vertically (not diag)
        - Grid is rectangular, width and height dont exceed 100
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1

    return size * 4 - edges * 2
