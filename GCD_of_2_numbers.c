#include<stdio.h>
int main()
{
    int a, b, gcd, min, i;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    min=(a<b)?a:b;
    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is: %d", a, b, gcd);
    return 0;
}