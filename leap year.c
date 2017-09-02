#include<stdio.h>
int main()
{
    int y;
    printf("enter the year:");
    scanf("%d",&y);
    if(y%400==0)
    {
       printf("\n leap year");
    }
    else
    {
        print("\n not leap year");
    }
    return 0;
}
