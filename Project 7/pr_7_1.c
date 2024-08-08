#include "function.c"
int main()
{
    int choice;
    do{
    printf("press 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %%\n");
    printf("press 0 for exit\n");
    int a=getint("a");
    int b=getint("b");
    choice=getint();
    switch(choice)
    {
        case 1:
            printf("Addition is %d\n",sum(a,b));
            break;
        case 2:
            printf("Subtraction is %d\n",sub(a,b));
            break;
        case 3:
            printf("Multiplication is %d\n",mul(a,b));
            break;
        case 4:
            printf("Division is %.2f\n",div(a,b));
            break;
        case 5:
            printf("modulus is %d\n",mod(a,b));
            break;
        case 0:
            printf("Exit!\n");
            break;
        default:
            printf("Invalid\n\n");
            break;
    }
    }while(choice!=0);
}