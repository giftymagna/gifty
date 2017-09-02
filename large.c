#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the num:");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        printf("\n %d num is large",x);
    }
    if((y>x)&&(y>z))
    {
        printf("\n %d num is large",y);
    }
    if((z>x)&&(z>y))
    {
        printf("\n %d num is large ",z);
    }

}
