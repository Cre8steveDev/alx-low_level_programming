def island_perimeter(grid):
    """Calculates the perimeter of the island in the given grid."""

    perimeter = 0
    rows = len(grid)  # Get the number of rows in the grid
    cols = len(grid[0])  # Get the number of columns in the first row

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4 - count_neighbors(grid, row, col, rows, cols)  # pass rows and cols

    return perimeter

def count_neighbors(grid, row, col, rows, cols):  # Receive rows and cols as arguments
    """Counts the number of land neighbors around a cell."""

    neighbors = 0
    for r in range(max(0, row - 1), min(rows, row + 2)):
        for c in range(max(0, col - 1), min(cols, col + 2)):
            if grid[r][c] == 1 and (r != row or c != col):
                neighbors += 1
    return neighbors
