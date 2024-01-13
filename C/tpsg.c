#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int game(char you, char computer)
{
    if (you == computer)
        return -1;

    else if (you == 's' && computer == 'p')
        return 1;

    if (you == 's' && computer == 'z')
        return 1;

    else if (you == 'p' && computer == 'z')
        return 1;

    if (you == 'p' && computer == 's')
        return 0;

    else if (you == 'z' && computer == 's')
        return 1;

    else if (you == 'z' && computer == 'p')
        return 0;
}

int main()
{
    char you, computer, result;
    int n;
    srand(time(NULL));

    n = rand() % 100;

    if (n < 30)
        computer == 's';

    else if (n > 30 && n < 66)

        computer == 'z';

    else

        computer == 'p';

    printf("first game");
    scanf("%c", &you);

    result = game(you, computer);

    if (result == -1)
    {
        printf("winn");
    }
    else
    {
        printf("bad luck");
    }

   
}