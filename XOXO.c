#include<stdio.h>

//print the board
    //assign characters to each position
    //give the user an example and be minimalistic
    //print the board each time a new move is given
//input moves
    //only X or O
//check if moves are valid
    //move valid for the given position
//alternate between X and O
    //users' inputs in a while loop
    //since this is a game between two players taking a turn each
//check if pattern is a win or a draw
    //enter all possible win conditions, either X or O wins
    //else it's a draw

char c1, c2, c3, c4, c5, c6, c7, c8, c9;

void XOXOBoard()
{
    printf(" %c | %c | %c \n", c1, c2, c3);
    printf(" - + - + - \n");
    printf(" %c | %c | %c \n", c4, c5, c6);
    printf(" - + - + - \n");
    printf(" %c | %c | %c \n", c7, c8, c9);
}
int main()
{
    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = ' ';
    XOXOBoard();
    return 0;
}
