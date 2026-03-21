#include<stdio.h>
int main()
{
    int a[100], b[100], c[100], n1, n2, n3=0, i, j, max;
    printf("Enter size of array 1: ");
    scanf("%d", &n1);
    printf("Enter size of array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements of first array: ", n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter %d elements of second array: ", n2);
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }
    max=n1>n2?n1:n2;
    for(i=0; i<max; i++)
    {
        c[i]=(i<n1?a[i]:0)+(i<n2?b[i]:0);
        n3++;
    }
    printf("Sum of two arrays is: ");
    for(i=0; i<n3; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
