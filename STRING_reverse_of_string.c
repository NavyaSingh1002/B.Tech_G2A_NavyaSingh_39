#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i=0, j=0;
    printf("Enter string: ");
    scanf("%s", a);
    while(a[i]!='\0')
    {
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        b[j]=a[i];
        j++;
        i--;
    }
    b[j]='\0';
    printf("Reversed string: %s", b);
    return 0;
}