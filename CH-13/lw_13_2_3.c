#include <stdio.h>

int main() 
{
    int n1, n2, i;
    int a[10], b[10], c[10];

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements for the first array:", n1);
    for(i = 0; i < n1; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements for the second array:", n2);
    for(i = 0; i < n2; i++) 
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < n1; i++) 
    {
        c[i] = a[i];  
    }
    for(i = 0; i < n2; i++) 
    {
        c[n1+i] = b[i];  
    }

    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) 
    {
        printf("%d ", c[i]);
    }
}