#include <stdio.h>
int main()
{
    int r;
    float a, c;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area of circle=%f", a);
    printf("\nCircumference of circle=%f", c);
    return 0;
}