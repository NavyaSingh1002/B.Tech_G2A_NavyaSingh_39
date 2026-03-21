# include<stdio.h>
# include<stdlib.h>
int main()
{
    int a[100];
    int n, i, p, loc;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &p);
    loc=p-1;
    printf("Array before deletion:");
    for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    if(loc>n)
    {
        printf("Deletion is not possible");
        exit(0);
    }
    else
    {
        for(i=loc;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        printf("\nArray after deletion:");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}