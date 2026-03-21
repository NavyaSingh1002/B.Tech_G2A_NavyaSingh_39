# include<stdio.h>
# include<stdlib.h>
int main()
{
    int a[100];
    int n, i, p, loc, t;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be innserted: ");
    scanf("%d", &t);
    printf("Enter position: ");
    scanf("%d", &p);
    loc=p-1;
    printf("Array before insertion:");
    for(i=0;i<n;i++)
        {
            printf("\t%d",a[i]);
        }
    if(loc>n)
    {
        printf("Insertion is not possible");
        exit(0);
    }
    else
    {
        for(i=n;i>loc;i--)
        {
            a[i]=a[i-1];
        }
        a[loc]=t;
        n=n+1;
        printf("Array after insertion:");
        for(i=0;i<n;i++)
        {
            printf("\t%d",a[i]);
        }
    }
    return 0;
}