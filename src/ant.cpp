#include "ant.h"

void Ant::step(Grid &grid)
{
    if (grid.getCell(row, column))
        direction = (direction + 3) % 4;
    else
        direction = (direction + 1) % 4;

    grid.toggleCell(row, column);

    static const int dRow[4] = {-1, 0, 1, 0};
    static const int dColumn[4] = { 0, 1, 0, -1};

    row = (row + dRow[direction] + grid.getRows()) % grid.getRows();
    column = (column + dColumn[direction] + grid.getColumns()) % grid.getColumns();
}