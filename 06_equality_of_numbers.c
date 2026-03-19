#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    if(a==b)
        printf("%d and %d are equal.",a,b);
    else
        printf("%d and %d are not equal.",a,b);
    return 0;
}