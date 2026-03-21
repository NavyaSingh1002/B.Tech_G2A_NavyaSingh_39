#include<stdio.h>
int main()
{
    int n, i, a[100], loc=-1, s;
    printf("Enter size<100 of array: ");
    scanf("%d", &n);
    printf("Enter %d elements of the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &s);
    for(i=0; i<n; i++)
    {
        if(a[i]==s)
        {
            loc=i;
            break;
        }
    }
    if(loc==-1)
    {
        printf("Element %d not found in the array.", s);
    }
    else
    {
        printf("Element %d found at position %d.", s, loc);
    } 
    return 0;
}