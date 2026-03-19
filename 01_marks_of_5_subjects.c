#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, s, p;
    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);   
    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks of subject 3: ");   
    scanf("%d", &m3);
    printf("Enter marks of subject 4: ");
    scanf("%d", &m4);
    printf("Enter marks of subject 5: ");
    scanf("%d", &m5);
    s = m1 + m2 + m3 + m4 + m5; 
    p = s / 5;
    printf("Total marks = %d", s);
    printf("\nPercentage = %d", p);
    return 0;
}