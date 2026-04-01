#include<stdio.h>
int main()
{
    int a[100], i, j, n, temp;
    printf("Enter size<100 of array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array before sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nArray after sorting:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}