#include<stdio.h>
int main()
{
    int marks;
    char grade;

    printf("Enter your marks:");
    scanf("%d",&marks);

    (marks<=100 && marks>=91)
        ?printf("Grade:A.")
        :(marks<=90 && marks>=81)
            ?printf("Grade:B.")
            :(marks<=80 && marks>=71)
                ?printf("Grade:C.")
                :(marks<=70 && marks>=61)
                    ?printf("Grade:D.")
                    :(marks<=60 && marks>=34)
                        ?printf("Grade:E.")
                        :(marks<=33)
                            ?printf("Grade:'F.")
                            :printf("Invalid marks.");
    
                            
    if(marks<=100 && marks>=91)
    {
        grade = 'A';
    }
    else if(marks<=90 && marks>=81)
    {
        grade = 'B';
    }
    else if(marks<=80 && marks>=71)
    {
        grade = 'C';
    }
    else if(marks<=70 && marks>=61)
    {
        grade = 'D';
    }
    else if(marks<=60 && marks>=34)
    {
        grade = 'E';
    }
    else if(marks<=33)
    {
        grade = 'F';
    }

    switch(grade)
    {
        case 'A':
            printf("Excellent Work!!");
            break;
        case 'B':
            printf("Well Done!!");
            break;
        case 'C':
            printf("Good Job!!");
            break;
        case 'D':
            printf("You can do better!!");
            break;
        case 'E':
            printf("Practice More!!");
            break;
        case 'F':
            printf("Sorry,You failed!!");
            break;
        default:
            printf("Invalid grade!!");
            
    }

    if(grade=='F')
    {
        printf("You are not eligible.");
    }    
    else
    {
        printf("You are eligible.");
    }
            
}