

#include <stdio.h>

int main()
{

    int mark;

    printf("\n Enter your mark:");

    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("\n you have achieve A grade:");
    }
    else if (mark >= 80)
    {
        printf("\n you have achieve B grade:");
    }

    else if (mark >= 70)
    {
        printf("\n you have achieve C grade:");
    }

    else if (mark >= 60)
    {
        printf("\n you have achieve D grade:");
    }

    else if (mark >= 35)
    {
        printf("\n you have achieve E grade:");
    }

    else
    {
        printf("You have failed");
    }

    return 0;
}