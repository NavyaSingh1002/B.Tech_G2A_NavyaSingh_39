#include<stdio.h>
int main()
{
    int a[100];
    int n, s, l, h, m, i, loc=-1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d", &s);
    l=1;
    h=n;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==s)
        {
           loc=m;
           break;
        }
        else if(a[m]<s)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    if(loc==-1)
    printf("Element not found.");
    else
    printf("Element found at %d position,", loc+1);
    return 0;
}