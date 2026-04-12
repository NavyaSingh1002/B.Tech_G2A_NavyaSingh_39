#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float d, r1, r2, real, img;
    printf("Enter coefficients of equation: ");
    scanf("%d%d%d", &a, &b, &c);
    d=(b*b)-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are real: %.2f \t%.2f", r1, r2);
    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        printf("Roots are equal: %.2f \t%.2f", r1, r2);
    }
    else
    {
        real=-b/(2*a);
        img=sqrt(-d)/(2*a);
        printf("Roots are imaginary: %.2f + i%.2f \t%.2f - i%.2f", real, img, real, img);
    }
    return 0;
}