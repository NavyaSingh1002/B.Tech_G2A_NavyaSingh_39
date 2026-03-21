#include<stdio.h>
int main()
{
    int a[100], n, i, max, min;
    printf("Enter size of array<100: ");
    scanf("%d", &n);
    printf("Enter %d elements of array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum element in array is= %d", max);
    printf("\nMinimum element in array is= %d", min);
    return 0;
}