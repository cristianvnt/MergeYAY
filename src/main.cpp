#include "raylib.h"
#include "Common.h"

#include <string>

int main()
{
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "MERGE");

	SetTargetFPS(FPS);

	Vector2 gridPosition = { 50, 50 };

	while (!WindowShouldClose())
	{

	BeginDrawing();
		ClearBackground(RAYWHITE);

		for (int i = 0; i <= MAX_GRID_CELLS_X; ++i)
			DrawLine(gridPosition.x + i * GRID_CELL_SIZE, gridPosition.y, gridPosition.x + i * GRID_CELL_SIZE, gridPosition.y + MAX_GRID_CELLS_Y * GRID_CELL_SIZE, BLUE);
		for (int i = 0; i <= MAX_GRID_CELLS_Y; ++i)
			DrawLine(gridPosition.x, gridPosition.y + i * GRID_CELL_SIZE, gridPosition.x + MAX_GRID_CELLS_X * GRID_CELL_SIZE, gridPosition.y + i * GRID_CELL_SIZE, RED);

	EndDrawing();
	}

	CloseWindow();
}