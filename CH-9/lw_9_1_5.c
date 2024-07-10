#include<stdio.h>
int main()
{
    int y1,y2;

    printf("Enter year 1:");
    scanf("%d",&y1);
    printf("Enter year 2:");
    scanf("%d",&y2);

    while(y1<=y2)
    {
        if(y1%4==0 && y2%4==0)
        {
            printf("%d ",y1);
        }
    y1++;    
    }
}