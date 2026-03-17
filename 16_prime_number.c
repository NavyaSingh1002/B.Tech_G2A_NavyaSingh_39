# include <stdio.h>
# include<stdlib.h>
int main()
{
    int n, i, c=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<=1)
    {
        printf("%d is not a prime number.", n);
        exit(0);
    }
    else
    {
        for (i=2;i<n;i++)
        {
            if(n%i==0)
            {
                c=1;
                break;          
            }
        }
    }
    if(c==1)
    {
        printf("%d is not a prime number.", n);
    }
    else
    {
        printf("%d is a prime number.", n);
    }
    return 0;
}