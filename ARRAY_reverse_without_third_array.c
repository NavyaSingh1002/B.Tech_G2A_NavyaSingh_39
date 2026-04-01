#include <stdio.h>
int main()
{
    int a[100], i, j, n, t;
    printf("Enter size<100 of array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n/2; i++)
    {
        j=n-1-i;
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("Reversed array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}