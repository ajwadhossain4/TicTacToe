#include<stdio.h>

//print the board
    //assign characters to each position
    //give the user an example and be minimalistic
    //print the board each time a new move is given
//input moves
    //only X or O
//check if moves are valid
    //move valid for the given position
    //is the position empty
//alternate between X and O
    //users' inputs in a while loop
    //since this is a game between two players taking a turn each
//check if pattern is a win or a draw
    //enter all possible win conditions, either X or O wins
    //else it's a draw
    //game only ends when either the whole board is full or if the pattern matches

char c1, c2, c3, c4, c5, c6, c7, c8, c9;

//(c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' ' && c9!=' ')

void XOXOBoard()
{
    printf(" %c | %c | %c \n", c1, c2, c3);
    printf(" - + - + - \n");
    printf(" %c | %c | %c \n", c4, c5, c6);
    printf(" - + - + - \n");
    printf(" %c | %c | %c \n\n", c7, c8, c9);
}

int XOXOValid(int n)
{
    switch(n)
    {
    case 1:
        return c1 == ' ';
    case 2:
        return c2 == ' ';
    case 3:
        return c3 == ' ';
    case 4:
        return c4 == ' ';
    case 5:
        return c5 == ' ';
    case 6:
        return c6 == ' ';
    case 7:
        return c7 == ' ';
    case 8:
        return c8 == ' ';
    case 9:
        return c9 == ' ';
    default:
        return 0;
    }
}
int main()
{
    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = ' ';

    int n;
    char Player = 'X';
    int GameOver = 0;

    printf("Let's play Tic Tac Toe!\nEnter the position number where you'd like to make your move -\n\n");
    printf(" 1 | 2 | 3 \n");
    printf(" - + - + - \n");
    printf(" 4 | 5 | 6 \n");
    printf(" - + - + - \n");
    printf(" 7 | 8 | 9 \n\n\n");

    while(GameOver==0)
    {
        XOXOBoard();
        printf("\nChoose your move, player %c: ", Player);
        scanf("%d", &n);
        printf("\n");

        if(XOXOValid(n))
        {
            switch(n)
            {
            case 1:
                c1=Player;
                break;
            case 2:
                c2=Player;
                break;
            case 3:
                c3=Player;
                break;
            case 4:
                c4=Player;
                break;
            case 5:
                c5=Player;
                break;
            case 6:
                c6=Player;
                break;
            case 7:
                c7=Player;
                break;
            case 8:
                c8=Player;
                break;
            case 9:
                c9=Player;
                break;
            }
                if((c1==c2 && c2==c3) || (c4==c5 && c5==c6) || (c7==c8 && c8==c9) || (c1==c4 && c4==c7) || (c2==c5 && c5==c8) || (c3==c6 && c6==c9) || (c1==c5 && c5==c9) || (c3==c5 && c5==c7))
                {
                    GameOver=1;
                    printf("Player %c wins!", Player);
                }
                else if(c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' ' && c9!=' ')
                {
                    GameOver=1;
                    printf("It's a draw!");
                }
        }
        else
        {
            printf("Invalid move, player. Try again.\n");
        }
    }

    return 0;
}
