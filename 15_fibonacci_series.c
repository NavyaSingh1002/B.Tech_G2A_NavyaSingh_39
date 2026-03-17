# include<stdio.h>
# include <stdlib.h>
int main()
{
    int n, a=0, b=1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Invalid number of terms.");
        exit(0);
    }
    else if(n==1)
    {
        printf("Fibonacci Series: %d", a);
    }
    else if(n==2)
    {
        printf("Fibonacci Series: %d\t %d", a, b);
    }
    else
    {
        printf("Fibonacci Series: %d\t %d", a, b);
        for(i=3; i<=n; i++)
        {
            c=a+b;
            printf("\t%d", c);
            a=b;
            b=c;
        }
    }
}