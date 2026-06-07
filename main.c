#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int main ()
{
    char board[GRID_S][GRID_S] = {{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};
    display_board(board);

    return 0;
}
