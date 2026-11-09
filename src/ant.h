#pragma once
#include "grid.h"


class Ant{
    private:
        int row;
        int column;
        int direction;
    public:

        Ant(int row, int column) : 
        row(row), column(column), direction(0) {}

        void step (Grid &grid);

};