#include<stdio.h>
int main()
{
    int dectobin(int n);
    int bintodec(int m);
    int choice, n, b, d;
    printf("1. Decimal to Binary");
    printf("\n2. Binary to Decimal");
    printf("\nEnter type: ");
    scanf("%d", &choice);
    if(choice==1)
    {
        printf("Enter decimal number: ");
        scanf("%d", &n);
        b=dectobin(n);
        printf("Conversion: %d", b);
    }
    else if(choice==2)
    {
        printf("Enter binary number: ");
        scanf("%d", &b);
        d=bintodec(b);
        printf("Conversion: %d", d);
    }
    return 0;
}

int dectobin(int m)
{
    int s=0, t;
    while(m>0)
    {
        t=m%2;
        s=s*10+t;
        m=m/2;
    }
    return s;
}

int bintodec(int m)
{
    int s=0, p, t, i, c=0;
    while(m>0)
    {
        t=m%10;
        p=1;
        for(i=0; i<c; i++)
        {
            p=p*2;
        }
        s=s+(t*p);
        m=m/10;
        c++;
    }
    return s;
}