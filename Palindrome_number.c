# include <stdio.h>
int main()
{
    int n, n1, s=0, d;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==n1)
    {
        printf("%d is a palindrome number.",n1);
    }
    else
    {
        printf("%d is not a palindrome number.",n1);
    }
    return 0;
}