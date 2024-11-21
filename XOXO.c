#include<stdio.h>

char c1, c2, c3, c4, c5, c6, c7, c8, c9;

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

void XOXOMove(int n, char Player)
{
    switch(n)
    {
        case 1: c1=Player;
        break;
        case 2: c2=Player;
        break;
        case 3: c3=Player;
        break;
        case 4: c4=Player;
        break;
        case 5: c5=Player;
        break;
        case 6: c6=Player;
        break;
        case 7: c7=Player;
        break;
        case 8: c8=Player;
        break;
        case 9: c9=Player;
        break;
    }
}
int main()
{
    c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = ' ';

    int n;
    char Player = 'X';
    int GameOver = 0;

    printf("Ready to play Tic Tac Toe?\nSelect a number between 1 and 9 to make your move -\n\n");
    printf(" 1 | 2 | 3 \n");
    printf(" - + - + - \n");
    printf(" 4 | 5 | 6 \n");
    printf(" - + - + - \n");
    printf(" 7 | 8 | 9 \n\n\n");

    while(GameOver==0)
    {
        XOXOBoard();
        printf("\nYour turn, player %c: ", Player);
        scanf("%d", &n);
        printf("\n");

        if(n<1 || n>9)
        {
            printf("Invalid move, player. Enter a number between 1 and 9.\n");
            continue;
        }

        if(XOXOValid(n))
        {
            XOXOMove(n, Player);

            if((c1==c2 && c2==c3 && c1!=' ' && c2!=' ' && c3!=' ') ||
               (c4==c5 && c5==c6 && c4!=' ' && c5!=' ' && c6!=' ') ||
               (c7==c8 && c8==c9 && c7!=' ' && c8!=' ' && c9!=' ') ||
               (c1==c4 && c4==c7 && c1!=' ' && c4!=' ' && c7!=' ') ||
               (c2==c5 && c5==c8 && c2!=' ' && c5!=' ' && c8!=' ') ||
               (c3==c6 && c6==c9 && c3!=' ' && c6!=' ' && c9!=' ') ||
               (c1==c5 && c5==c9 && c1!=' ' && c5!=' ' && c9!=' ') ||
               (c3==c5 && c5==c7 && c3!=' ' && c5!=' ' && c7!=' '))
                {
                    GameOver=1;
                    XOXOBoard();
                    printf("Player %c wins!\n", Player);
                }
            else if(c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' ' && c9!=' ')
                {
                    GameOver=1;
                    XOXOBoard();
                    printf("It's a draw!\n");
                }
                else
                {
                    Player = (Player=='X') ? 'O' : 'X';
                }
        }
        else
        {
            printf("Invalid move, player. Position %d is already taken. Try again.\n\n", n);
        }
    }

    return 0;
}
