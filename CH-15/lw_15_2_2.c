#include<stdio.h>
#include<string.h>
int main()
{
    char e1[20]="admin123@gmail.com";
    char p1[20]="123456";

    char e2[20];
    char p2[20];

    printf("Enter your email:");
    scanf("%s",&e2);
    printf("Enter your password:");
    scanf("%s",&p2);
    
    if(strcmp(e1,e2) == 0 && strcmp(p1,p2) == 0)
    {
        printf("Login successful");
    }
    else
    {
        printf("Invalid Credentials");
    }
}