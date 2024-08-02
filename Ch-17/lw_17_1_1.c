#include<stdio.h>

void cube()
{
    int c;
    printf("Enter any number:");
    scanf("%d",&c);

    printf("Cube of %d is:%d",c,c*c*c);
    
}
int main()
{
    cube();
}