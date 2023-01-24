#include <stdio.h>
int main()
{
    char op;
    printf("Enter the operation you want to perform : ");
    scanf("%c", &op);

    float num1, num2;
    printf("Enter first number : ");
    scanf("%f", &num1);
    printf("Enter second number : ");
    scanf("%f", &num2);
    printf("Answer : ");
    switch (op)
    {
    case '+':
        printf("%.3f", num1 + num2);
        break;
    case '-':
        printf("%.3f", num1 - num2);
        break;
    case '*':
        printf("%.3f", num1 * num2);
        break;
    case '/':
        printf("%.3f", num1 / num2);
        break;
    }
}