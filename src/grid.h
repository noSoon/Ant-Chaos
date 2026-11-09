#pragma once
#include <vector>

class Grid{
    private:
        int rows;
        int columns;
        int cellSize;
        std::vector<std::vector<bool>> cells;
    public:
        Grid (int width, int heigth, int cellSize) : 
        rows(heigth/cellSize), columns(width/cellSize), cellSize(cellSize), cells(rows, std::vector<bool>(columns, false)) {};

        void drawGrid();

        bool getCell(int row, int column) const {
            return cells[row][column];
        }

        int getRows () const{
            return rows;
        }

        int getColumns () const{
            return columns;
        }

        void toggleCell(int row, int column);

};