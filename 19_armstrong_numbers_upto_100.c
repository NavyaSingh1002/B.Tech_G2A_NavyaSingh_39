# include <stdio.h>
int main()
{
    int n, n1, n2, s, c, i, d, t;
    printf("Armstrong numbers upto 100 are:");
    for (n=1;n<=100;n++)
    {
        n1=n2=n;
        s=0;
        c=0;
        while(n1>0)
        {
            n1=n1/10;
            c=c+1;
        }
        while(n2>0)
        {
            t=1;
            d=n2%10;
            for(i=1;i<=c;i++)
            {
                t=t*d;
            }
            s=s+t;
            n2=n2/10;
        }
        if(s==n)
        {
            printf("\n%d ", n);
        }
    }
    return 0;
}