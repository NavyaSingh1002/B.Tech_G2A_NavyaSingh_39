#include<stdio.h>
int main()
{
    int n, n1, d, s=0, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    n1=n;
    t=n1*n1;
    while (t>0)
    {
        d=t%10;
        s=s+d;
        t=t/10;
    }
    if(s==n)
    {
        printf("%d is a neon number.", n);
    }
    else
    {
        printf("%d is not a neon number.", n);
    }
    return 0;
}