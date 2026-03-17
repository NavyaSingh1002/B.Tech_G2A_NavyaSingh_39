#include <stdio.h>
int main()
{
   int a, b, temp;
   printf("Enter number 1: ");
   scanf("%d", &a);
   printf("Enter number 2: ");
   scanf("%d", &b);
   printf("Before swapping");
   printf("\nNumber 1: %d", a);
   printf("\nNumber 2: %d", b);
   temp=a;
   a=b;
   b=temp;
   printf("\nAfter swapping");
   printf("\nNumber 1: %d", a);
   printf("\nNumber 2: %d", b);
   return 0;
}