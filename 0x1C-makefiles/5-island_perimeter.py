#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Returins the perimiter of an island.
    Args:
        grid (list): list of integers representing an island.
    Returns:
        Perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for i in range(height):
        for x in range(width):
            if grid[i][x] == 1:
                size += 1
                if (x > 0 and grid[i][x - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][x] == 1):
                    edge += 1
    return (size * 4 - edge * 2)
