#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int main ()
{
    char board[3][3] = {{'_', '_', '_'},{'_', '_', '_'},{'_', '_', '_'}};
    display_board(board);

    return 0;
}