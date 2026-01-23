#include "raylib.h"
#include "Common.h"

#include <string>
#include <iostream>

int main()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "MERGE");

	SetWindowState(FLAG_WINDOW_RESIZABLE);
	SetTargetFPS(FPS);

	Vector2 gridPosition = { GetScreenWidth() / 2.f - GRID_CELL_SIZE * MAX_GRID_CELLS_X / 2.f, GetScreenHeight() / 2.f - GRID_CELL_SIZE * MAX_GRID_CELLS_Y / 2.f };

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		if (IsWindowResized())
			gridPosition = { GetScreenWidth() / 2.f - GRID_CELL_SIZE * MAX_GRID_CELLS_X / 2.f, GetScreenHeight() / 2.f - GRID_CELL_SIZE * MAX_GRID_CELLS_Y / 2.f };

		for (int i = 0; i <= MAX_GRID_CELLS_X; ++i)
			DrawLine(gridPosition.x + i * GRID_CELL_SIZE, gridPosition.y, gridPosition.x + i * GRID_CELL_SIZE, gridPosition.y + MAX_GRID_CELLS_Y * GRID_CELL_SIZE, BLUE);
		for (int i = 0; i <= MAX_GRID_CELLS_Y; ++i)
			DrawLine(gridPosition.x, gridPosition.y + i * GRID_CELL_SIZE, gridPosition.x + MAX_GRID_CELLS_X * GRID_CELL_SIZE, gridPosition.y + i * GRID_CELL_SIZE, RED);

		EndDrawing();
	}

	CloseWindow();
}