#include "flood_fill.h"

void fill(char **tab, t_point size, char target, int row, int column)
{
            if (row < 0 || column < 0 || row >= size.y || column >= size.x)
                        return;
            if (tab[row][column] == 'F' || tab[row][column] != target)
                        return;
            tab[row][column] = 'F';

            fill(tab, size, target, row + 1, column);
            fill(tab, size, target, row - 1, column);
            fill(tab, size, target, row, column + 1);
            fill(tab, size, target, row, column - 1);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
            char target = tab[begin.y][begin.x];
            fill(tab, size, target, begin.y, begin.x);
}