#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i=0, j, temp;
    printf("Enter string: ");
    scanf("%s", a);
    while(a[i]!='\0')
    {
        i++;
    }
    i=i-1;;
    for(j=0; j<=i/2; j++)
    {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i--;
    }
    printf("Reversed string: %s", a);
    return 0;
}
