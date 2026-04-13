#include<stdio.h>
int main()
{
    int a, b ,c;
    printf("Enter side 1 of triangle: ");
    scanf("%d", &a);
    printf("Enter side 2 of triangle: ");
    scanf("%d", &b);
    printf("Enter side 3 of triangle: ");
    scanf("%d", &c);
    if(a==b && b==c && c==a)
    {
        printf("The triangle is an equilateral triangle.");
    }
    else if(a==b || b==c || c==a)
    {
        printf("The triangle is an isosceles triangle.");
    }
    else
    {
        printf("The triangle is a scalene triangle.");
    }
    return 0;
}