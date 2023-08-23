#!/usr/bin/python3
"""Function to print perimeter of an island"""

def islandPerimeter(grid):
    """
        Function to print the perimeter of an island
        
        Argument:
        grid: matrix representation of the island

        Return:
        Perimeter
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # land cell
                # check top cell
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # check bottom cell
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # check left cell
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check right cell
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                    
    return perimeter



