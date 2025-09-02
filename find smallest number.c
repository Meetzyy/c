#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    if (a < b)
    {
        if (a < c)
        {
            printf("%d is the smallest number.", a);
        }
        
    }
    else if (b < c)
    {
        printf("%d is the smallest number.", b);
    }
    else
    {
        printf("%d is the smallest number.", c);
    }
}