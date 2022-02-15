#include "menger.h"

/**
* menger - a sponge, fresh out the dishwasher
* @level: menger sponge's power
* Return: a printout
*/
void menger(int level)
{
// francis is the print-in-place we need to show the sponge
char francis = '#';
// iterators
int x, y, z, calculon = pow(3, level);
// first loop, defines the vertical/columns
for (y = 0; y < calculon; y++)
{
// second loop, defines the horizontal/rows
for (x = 0; x < calculon; x++)
{
// the action: redefine francis, iterate, produce the hole
// print at francis' level all instances contrarywise
francis = '#';
for (z = 1; z < calculon; z *= 3)
// At points x=3 and y=3, the space is the place
if (y / z % 3 == 1 && x / z % 3 == 1)
francis = 32;
putchar(francis);
}
putchar(10);
}
}
