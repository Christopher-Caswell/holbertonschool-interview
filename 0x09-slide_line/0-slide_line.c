#include "slide_line.h"

/**
* slide_line - Replicate the function of 2048 (game, not year) in a single line
* @line: the integers used
* @size: the size of the array
* @direction: the path onward
* Return: 1 if the array is modified, 0 otherwise
*/

int slide_line(int *line, size_t size, int direction)
{

if (direction == SLIDE_LEFT)
slideLeft(line, size);

else if (direction == SLIDE_RIGHT)
slideRight(line, size);

else
return (0);

return (1);
}

/**
* slideLeft - slide, left
* @line: the integers used
* @size: the size of the array
* Return: void
*/

void slideLeft(int *line, size_t size)
{

size_t x = 1;
size_t y = 0;

for (; x < size; x++)
{

if (line[x] == 0)
continue;

if (line[y] == line[x])
{

line[y] += line[x];
line[x] = 0;
y++;
}

else if (line[y] == 0)
{

line[y] = line[x];
line[x] = 0;
}

else
y++;
}
}

/**
* slideRight - slide, right
* @line: the integers used
* @size: the size of the array
* Return: void
*/

void slideRight(int *line, size_t size)
{

size_t x = size - 2;
size_t y = size - 1;

if (size > 1)
{
for (; x != 0; x--)
{

if (line[x] == 0)
continue;

if (line[y] == line[x])
{

line[y] += line[x];
line[x] = 0;
y--;
}

else if (line[y] == 0)
{

line[y] = line[x];
line[x] = 0;
}

else if (line[y - 1] == 0 && line[x] != 0)
{

y--;
line[x] = line[y];
line[x] = 0;
}
else
y--;
}

if (line[y] == line[x] || line[y] == 0)
{

line[y] += line[x];
line[x] = 0;
}
}

return;
}
