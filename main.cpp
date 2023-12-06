#include <iostream>
#include "raylib.h"

int main()
{
    int width = 800;
    int height = 450;

    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT);
    InitWindow(width, height, "Dapper Dasher");
    SetTargetFPS(60);

    float deltatime;

    while (!WindowShouldClose())
    {
        deltatime = GetFrameTime();

        BeginDrawing();

        ClearBackground(LIGHTGRAY); // avoid flickering while double buffering

        EndDrawing();
    }

    // Clean up
    CloseWindow();
}
