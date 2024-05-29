#!/usr/bin/python3
"""

This document calculates the perimetr of a zone as specifid
in grid

"""
def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid shows land by 1 and water by 0

    Args:
        grid(list): A listr of integers that represen the island
    Returns:
        the perimeter of the island

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
