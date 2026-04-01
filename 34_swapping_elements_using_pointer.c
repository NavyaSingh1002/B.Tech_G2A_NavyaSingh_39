#include<stdio.h>
int main()
{
    void swap(int*, int*);
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("\nBefore swapping: ");
    printf("\nNumber 1: %d", a);
    printf("\nNumber 2: %d", b);
    swap(&a, &b);
    printf("\nAfter swapping: ");
    printf("\nNumber 1: %d", a);
    printf("\nNumber 2: %d", b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}