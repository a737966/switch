#include<stdio.h>
int main()
{
    int day;
    printf("enter day number (1-2):");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        default:
        printf("invalid day");
    }
    return 0;
}
