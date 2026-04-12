#include<stdio.h>
#define cube(x) (x*x*x)
int main()
{
    int n, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    s=cube(n);
    printf("The cube of %d is %d", n, s);
    return 0;
}