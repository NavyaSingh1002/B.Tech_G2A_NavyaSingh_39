#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2, r3, c3, i, j;
    printf("Enter order of matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter order of matrix 2: ");
    scanf("%d%d", &r2, &c2);
    printf("Enter %d elements of matrix 1: ", r1*c1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter %d elements of matrix 2: ", r2*c2);
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matrices: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2)
    {
        printf("Multiplication of matrices is not possible.");
        exit(0);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(int k=0; k<c1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Product of matrices: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}