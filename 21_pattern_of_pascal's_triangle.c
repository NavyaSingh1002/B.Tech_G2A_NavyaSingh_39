#include<stdio.h>
int main()
{
    int i, j, n, t;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        t=1;
        for(j=0;j<n-i;j++)
        {
            printf("  ");
        }

        for(j=0;j<=i;j++)
        {
            printf("%4d", t);
            t=t*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}