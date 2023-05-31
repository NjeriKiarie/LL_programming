#!/usr/bin/python3
"""creates a function def island_perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described
    in grid

    grid represents water by 0 and land by 1.

    Args:
        grid (list): A list os integers represent an island.
    return:
        the perimeter of the island in the grid
    """
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edged += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
