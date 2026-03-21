# include<stdio.h>
# include <stdlib.h>
int main()
{
    int n, m, i, t;
    printf("Enter the base number: ");
    scanf("%d", &n);   
    printf("Enter the exponent: ");
    scanf("%d", &m);
    if(m<0)
    {
        printf("Invalid exponent.");
        exit(0);
    }
    else if(m==0)
    {
        printf("Answer= 1");
    }
    else
    {
        t=1;
        for(i=1; i<=m; i++)
        {
            t=t*n;
        }
        printf("Answer= %d", t);
    }
    return 0;
}