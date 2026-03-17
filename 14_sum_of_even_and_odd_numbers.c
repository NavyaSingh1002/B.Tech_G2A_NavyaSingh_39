#include<stdio.h>
int main()
{
    int n, s1=0, s2=0, i;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        if (i%2==0)
        s1=s1+i;
        else
        s2=s2+i;
    }
    printf("Sum of even numbers: %d\n", s1);
    printf("Sum of odd numbers: %d\n", s2);
    return 0;
}