#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i=0, j=0, f=0, l;
    printf("Enter string: ");
    scanf("%s", a);
    while(a[i]!='\0')
    {
        i++;
    }
    i=i-1;
    l=i;
    while(i>=0)
    {
        b[j]=a[i];
        j++;
        i--;
    }
    b[j]='\0';
    for(i=0; i<l/2; i++)
    {
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("%s is not palindrome.", a);
    else
    printf("%s is palindrome.", a);
    return 0;
}
