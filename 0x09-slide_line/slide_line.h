#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H
#include <stdlib.h>
#include <stdio.h>

int slide_line(int *line, size_t size, int direction);
void slideRight(int *line, size_t size);
void slideLeft(int *line, size_t size);
#define SLIDE_LEFT 1
#define SLIDE_RIGHT 0

#endif
