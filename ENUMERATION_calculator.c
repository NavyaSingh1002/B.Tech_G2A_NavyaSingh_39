#include<stdio.h>
enum calculate
{
    sum=1, difference, product, quotient, remainder
};

int main()
{
    int choice;
    int a, b, c;
    float d;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Choices of calculation are:- ");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case sum:
            c=a+b;
            printf("Result= %d", c);
            break;
        case difference:
            c=a-b;
            printf("Result= %d", c);
            break;
        case product:
            c=a*b;
            printf("Result= %d", c);
            break;
        case quotient:
            d=(float)(a/b);
            printf("Result= %f", d);
            break;
        case remainder:
            c=a%b;
            printf("Result=%d", c);
            break;
        default:
            printf("Invalid operator.");
    }
    return 0;
}