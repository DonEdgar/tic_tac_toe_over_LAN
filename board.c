#include <stdio.h>
#include "board.h"

void display_board(char board [3][3])
{
    int i = 0, j = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" | %c | ", board[i][j]);
        }
        printf("\n");
    }
}