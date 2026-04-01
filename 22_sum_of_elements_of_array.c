#include<stdio.h>
int main()
{
    int a[100], n, s=0, i;
    printf("Enter size of array<100: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        s=s+a[i];
    }
    printf("Sum of elements of array is= %d", s);
    return 0;
}