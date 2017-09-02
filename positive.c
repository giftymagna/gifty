#include <stdio.h>

int main()
{
     int num;
     printf("Enter a num: ");
     scanf("%d", &num);
     if (num <= 0)
     {
        if (num == 0)
            printf("num is zero");
        else
            printf("num is negative");
    }
    else
        printf("num is positive");
    return 0;
