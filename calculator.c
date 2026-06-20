#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("===== SIMPLE CALCULATOR =====\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
