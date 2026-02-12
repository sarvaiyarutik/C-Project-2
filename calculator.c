

#include <stdio.h>

int main()
{

    int operand1, operand2;

    char operation;
    printf("operation value :  ");
    scanf(" %c", &operation);

    printf("first number:  ");
    scanf("%d", &operand1);

    printf("second number:  ");
    scanf("%d", &operand2);

    switch (operation)
    {
    case '+':
        printf("addition number:%d", operand1 + operand2);
        break;

    case '-':
        printf("subtraction number:%d", operand1 - operand2);
        break;

    case '*':
        printf("multiplay number:%d", operand1 * operand2);
        break;

    case '/':
        printf("division number:%d", operand1 / operand2);
        break;

    default:
        break;
    }

    return 0;
}