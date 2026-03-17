# include<stdio.h>
int main()
{
    int a, b, c;
    float d;
    char op;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter operator: ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            c=a+b;
            printf("Result= %d", c);
            break;
        case '-':
            c=a-b;
            printf("Result= %d", c);
            break;
        case '*':
            c=a*b;
            printf("Result= %d", c);
            break;
        case '/':
            d=(float)(a/b);
            printf("Result= %f", d);
            break;
        default:
            printf("Invalid operator.");
    }
    return 0;
}