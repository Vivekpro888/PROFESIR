#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int game(char you, char computer)
{

    if (you == computer)
        return -1;
    if (you == 's' && computer == 'p')
        return 0;

    else if (you == 'p' && computer == 's')
        return 1;

    if (you == 's' && computer == 'z')
        return 1;

    else if (you == 'z' && computer == 's')
        return 0;

    if (you == 'p' && computer == 'z')
        return 0;

    else if (you == 'z' && computer == 'p')
        return 1;
}

int main()
{
    int n;
    char you, computer, result;

    srand(time(NULL));

    n = rand() % 100;

    if (n < 33)
        computer = 's';

    else if (n > 33 && n < 66)
        computer = 'p';

    else
        computer = 'z';

    printf("\n\n\n\t\t\t\tenter s for stone,pfor paper ,zfor sissor");

    scanf("%c", &you);

    result = game(you, computer);

    if (result == -1)
    {
        printf("win game");
    }

    else if (result == 1)
    {
        printf("move on");
    }
    else
    {
        printf("you are lost the game");
    }
    printf("yourchoice:%c and computer choice :%c", you, computer);
}