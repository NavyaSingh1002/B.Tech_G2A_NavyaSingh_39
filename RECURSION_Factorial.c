#include <stdio.h>
int main()
{
    int fact(int);
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial= %d", fact(n));
    return 0;
}

int fact(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return n*fact(n-1);
}