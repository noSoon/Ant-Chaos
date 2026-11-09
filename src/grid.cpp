#include "grid.h"
#include "raylib.h"

void Grid::drawGrid()
{
    for (int row{0}; row < rows; ++row){
        for (int column{0}; column < columns; ++column){
            Color color = cells[row][column] ? Color{0, 255, 0, 255} : Color{150, 150, 150, 255};
            DrawRectangle(column * cellSize, row * cellSize, cellSize-1, cellSize-1, color);
        }
    }
}

void Grid::toggleCell(int row, int column)
{
    cells[row][column] = !cells[row][column];
}
