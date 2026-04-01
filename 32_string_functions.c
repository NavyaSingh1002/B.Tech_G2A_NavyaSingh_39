#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i, j, l ,r;
    printf("Enter string: ");
    scanf("%s", a);
    l=strlen(a);
    printf("Length of string=%d", l);
    strcpy(b,a);
    printf("\nCopied string: %s", b);
    strrev(a);
    printf("\nReversed string: %s", a);
    i=strcmp(a,b);
    if(i==0)
    {
        printf("\nString is palindrome.");   
    }
    else
    {
        printf("\nString is not palindrome.");
    }
    strcat(a,b);
    printf("\nCombined string: %s", a);
    return 0;
}