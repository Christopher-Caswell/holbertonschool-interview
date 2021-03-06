#include "sandpiles.h"

/**
 * sandpiles_sum - add two sandpiles
 * @grid1: sandpile
 * @grid2: sandpile added
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int x, y;
	int grid[3][3];

	for (y = 0; y < 3; y++)
		for (x = 0; x < 3; x++)
			grid1[y][x] += grid2[y][x];

	while (!stableSand(grid1))
	{
		print_grid(grid1);

		for (y = 0; y < 3; y++)
			for (x = 0; x < 3; x++)
				grid[y][x] = 0;

		for (y = 0; y < 3; y++)
		{
			for (x = 0; x < 3; x++)
			{
				if (x != 0 && grid1[y][x - 1] > 3)
					grid[y][x]++;
				if (x != 2 && grid1[y][x + 1] > 3)
					grid[y][x]++;
				if (y != 0 && grid1[y - 1][x] > 3)
					grid[y][x]++;
				if (y != 2 && grid1[y + 1][x] > 3)
					grid[y][x]++;
			}
		}

		for (y = 0; y < 3; y++)
		{
			for (x = 0; x < 3; x++)
			{
				if (grid1[y][x] > 3)
					grid1[y][x] -= 4;
				grid1[y][x] += grid[y][x];
			}
		}
	}
}

/**
 * stableSand - checks sand stability
 * @grid: sandpile checked
 *
 * Return: 1 if stable
 */
int stableSand(int grid[3][3])
{
	int y, x;

	for (y = 0; y < 3; y++)
		for (x = 0; x < 3; x++)
			if (grid[y][x] > 3)
				return (0);

	return (1);
}

/**
 * print_grid - Print grid
 * @grid: 3x3 grid
 *
 */

static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}
