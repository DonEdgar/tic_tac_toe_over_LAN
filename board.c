#include <stdio.h>
#include "board.h"

void display_board(char board [GRID_S][GRID_S])
{
    printf("+---+---+---+");
    for (int i = 0; i < GRID_S; i++)
    {
        printf("\n");
        for (int j = 0; j < GRID_S; j++)
        {
            printf("| %c ", board[i][j]);
        }
        printf("|");
        printf("\n");
        printf("+---+---+---+");
    }
    printf("\n");
}
