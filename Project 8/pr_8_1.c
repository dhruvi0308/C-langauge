#include<stdio.h>
int main()
{
    int l=0;
    char str[100];

    printf("Enter a string : ");
    scanf("%[^\n]",&str);

    int *ptr[20];
    for(int i=0;str[i]!='\0';i++)
    {
        ptr[i]=&str[i];
        l++;
    }
    printf("Lenth of string = %d",l);
}