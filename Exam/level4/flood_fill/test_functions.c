#include "test_functions.h"
#include "flood_fill.h"

void **make_area(char *zone[])
{
                t_point size = {8, 5};

    // Allocate memory for the 2D array
    char **area = (char **)malloc(size.y * sizeof(char *));
    for (int i = 0; i < size.y; i++) {
        area[i] = (char *)malloc(size.x * sizeof(char));
    }

    // Fill the area based on the input zone
    for (int y = 0; y < size.y; y++) {
        for (int x = 0; x < size.x; x++) {
            area[y][x] = zone[y][x * 2] - '0'; // Convert char '1' or '0' to int 1 or 0
        }
    }

    return area;
}

void print_tab(char **area)
{
        t_point size = {8, 5}; // Assuming the size of the area is known

    for (int y = 0; y < size.y; y++) {
        for (int x = 0; x < size.x; x++) {
            printf("%d ", area[y][x]);
        }
        printf("\n");
    }    
}