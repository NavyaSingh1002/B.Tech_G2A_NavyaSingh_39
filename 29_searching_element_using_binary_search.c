#include<stdio.h>
int main()
{
    int a[100], n, l, h, m, i, s;
    printf("Enter size<100 of array: ");
    scanf("%d", &n);  
    printf("Enter elements: ");
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
            printf("EElement found at %d position.", m+1);
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
    return 0;
}