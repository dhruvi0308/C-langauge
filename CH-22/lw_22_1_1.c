#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int age;
    char course[20];
    char city[20];
    int std;
    char school[20];
};

int main()
{
    struct Student s1;

    for(int i=0;i<4;i++)
    {
        printf("Enter id: ");
        scanf("%d", &s1.id);
        printf("Enter name: ");
        scanf("%s", &s1.name);
        printf("Enter age: ");
        scanf("%d", &s1.age);
        printf("Enter course: ");
        scanf("%s", &s1.course);
        printf("Enter city: ");
        scanf("%s", &s1.city);
        printf("Enter std: ");
        scanf("%d", &s1.std);
        printf("Enter school: ");
        scanf("%s", &s1.school);
    }
    for(int i=0;i<4;i++)
    {
        printf("Id: %d\n", s1.id);
        printf("Name: %s\n", s1.name);
        printf("Age: %d\n", s1.age);
        printf("Course: %s\n", s1.course);
        printf("City: %s\n", s1.city);
        printf("Std: %d\n", s1.std);
        printf("School: %s\n", s1.school);
    }
}