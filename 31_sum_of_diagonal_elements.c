#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10];
    int r, c, i, j, s=0;
    printf("Enter order of matrix: ");
    scanf("%d%d", &r, &c);
    if(r!=c)
    {
        printf("Sum is not possible.");
        exit(0);
    }
    printf("Enter %d elements of the matrix: ", r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("Sum of diagonal elements= %d", s);
    return 0;
}