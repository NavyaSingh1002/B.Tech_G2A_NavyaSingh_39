# include<stdio.h>
int main()
{
    float p, r, t, s, c, a, i, n, n1=1;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter time period: ");
    scanf("%f", &t);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    s=(p*t*r)/100;
    n=(1+(r/100));
    for (i=1; i<=t; i++)
    {
        n1=n1*n;
    }
    a=p*n1;
    c=a-p;
    printf("Simple Interest=%f", s);
    printf("\nCompound Interest=%f", c);
    return 0;
}