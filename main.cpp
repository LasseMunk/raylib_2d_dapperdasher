#include <iostream>
#include "raylib.h"

int main()
{
    const int windowWidth = 512;
    const int windowHeight = 380;

    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_VSYNC_HINT);
    InitWindow(windowWidth, windowHeight, "Dapper Dasher");
    SetTargetFPS(60);

    float deltatime;

    while (!WindowShouldClose())
    {
        deltatime = GetFrameTime();

        BeginDrawing();

        ClearBackground(WHITE); // avoid flickering while double buffering

        EndDrawing();
    }

    // Clean up
    CloseWindow();
}
