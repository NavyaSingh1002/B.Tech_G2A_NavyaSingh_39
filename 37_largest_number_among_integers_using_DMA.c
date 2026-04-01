#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*p, n, i, max;
    printf("Enter number of integers: ");   
    scanf("%d", &n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter %d integers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    max=p[0];
    for(i=0; i<n; i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    printf("The largest number is: %d", max);
    return 0;
}