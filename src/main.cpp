#include "raylib.h"
#include "grid.h"
#include "ant.h"

int main()
{
    const int W_WIDTH {1200};
    const int W_HEIGTH {750};
    const char* TITLE {"Ant Chaos"};
    const int GRID_CELL_SIZE {10};
    const int FPS {30};
    const int STEPS_PER_FRAME {10};
    int counter{0};

    InitWindow(W_WIDTH, W_HEIGTH, TITLE);

    SetTargetFPS(FPS);

    Grid grid(W_WIDTH, W_HEIGTH, GRID_CELL_SIZE);
    Ant ant(25, 60);

    while (!WindowShouldClose())
{
    for (int i{0}; i < STEPS_PER_FRAME; ++i)
        ant.step(grid);
    counter += STEPS_PER_FRAME;

    BeginDrawing();
    ClearBackground(GRAY);
    grid.drawGrid();
    DrawText(TextFormat("Counter Steps: %d", counter), 10, 10, 20, LIGHTGRAY);
    EndDrawing();
}
    CloseWindow();

    return 0;
}