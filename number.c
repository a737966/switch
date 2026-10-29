#include<stdio.h>
int main()
{
    int secret=25;
    int guess;
    int attempts=0;
    printf("guess a number\n");
    printf("guess a number between 1 and 50:");
    scanf("%d",&guess);
    while(guess!=secret)
    {
        attempts++;
        if(guess>secret)
        {
            printf("too high\n");
        }
        else
        {
            printf("too low\n");
        }
        printf("\nguess a number 1 and 50:");
        scanf("%d",&guess);
    }
    attempts++;
    printf("\ncongratulation! you gaussed the correct number.\n");
    printf("total attempts: %d\n",attempts);
    printf("game over");
    return 0;
}