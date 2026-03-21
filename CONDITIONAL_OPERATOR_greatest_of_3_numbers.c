#include<stdio.h> 
int main() 
{ 
    int a, b, c, max; 
    printf("Enter number 1: "); 
    scanf("%d", &a); 
    printf("Enter number 2: "); 
    scanf("%d", &b); 
    printf("Enter number 3: "); 
    scanf("%d", &c); 
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c); 
    printf("The greatest number is: %d", max); 
    return 0; 
}