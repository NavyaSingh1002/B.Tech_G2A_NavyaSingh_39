#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, i, n ,s=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    for (i=0; i<n; i++)
    {
        s=s+(*(p+i));
    }
    printf("Sum of elements: %d", s);
    return 0;
}