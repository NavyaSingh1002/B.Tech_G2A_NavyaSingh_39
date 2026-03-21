#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if (a>65 && a<90)
    {
        printf("%c is an uppercase letter.",a);
    }
    else if (a>97 && a<122)
    {
        printf("%c is a lowercase letter.",a);
    }
    else if (a>47 && a<58)
    {
        printf("%c is a digit.",a);
    }
    else
    {
        printf("%c is a special character.",a);
    }
    return 0;
}