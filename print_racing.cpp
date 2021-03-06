/*
 * print_racing.cpp
 * by Nick Metzger
 * working with Iris Oliver,
 * Leah Stern, Elias Marcopolis, Andrew Savage
 * rASCIIng
 *
 * Prints out the current view of the game.
 */


#include "print_racing.h"

#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

/*
 * Purpose:     Prints the current grid of the 2D array of the racing map.
 * Parameters:  map is the map to be printed from
 * Value returned: None (void function).
 */
void print_race(Map *map, User car)
{
        int map_width = map->getWidth();
        int map_height = map->getHeight();
        for (int j = VIEW_LENGTH + car.row; j > car.row - 4; j--)
        {
                if (j < map_height)
                {
                        char *row = map->getMapLine(j);
                        print_row(car, row, map_width, j);
                } else {
                        fputc('\n', stdout);
                }
        }
}

void print_countdown()
{
        cout << "Ready?" << endl;
        cout.flush();
        Sleep(500000);
        cout << "3.. ";
        cout.flush();
        Sleep(1000000);
        cout << "2.. ";
        cout.flush();
        Sleep(1000000);
        cout << "1.. ";
        cout.flush();
        Sleep(1000000);
        cout << "GO!" << endl;
        cout.flush();
        Sleep(500000);
}

/*
 * Purpose:     Prints out the characters associated with the contents of the 
 *              map row.
 * Parameters:  row is the pointer to the array of characters.
 * Value returned: None (void function).
 */


void print_row(User car, char *row, int width, int row_index)
{
        for (int i = 0; i < width; i++)
        {
                if (row_index == car.row && i == car.col)
                {
                       fputc(CAR_BUMPER, stdout);         

                }

                else if (row_index == car.row - 1 && i == car.col - 2)      
                {
                        fputc(CAR_WHEEL, stdout);
                        fputc(CAR_EDGE, stdout);
                        fputc(' ', stdout);
                        fputc(CAR_EDGE, stdout); 
                        fputc(CAR_WHEEL, stdout);
                        i += 4;

                }
                else if (row_index == car.row - 2 && i == car.col - 1)  
                {
                        fputc(CAR_EDGE, stdout);
                        fputc(' ', stdout);
                        fputc(CAR_EDGE, stdout);
                        i += 2;
                }
                else if (row_index == car.row - 3 && i == car.col - 2) 
                {
                        fputc(CAR_WHEEL, stdout);
                        fputc(CAR_EDGE, stdout);
                        fputc(CAR_BUMPER, stdout);
                        fputc(CAR_EDGE, stdout); 
                        fputc(CAR_WHEEL, stdout);
                        i+=4;
                }
                else
                {
                    fputc(row[i], stdout);
                }
                if (i == width - 1)
                {
                        fputc('\n', stdout);
                }

        }
} 
