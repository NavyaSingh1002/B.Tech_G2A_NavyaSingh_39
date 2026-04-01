#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][20];
    char t[20];
    int i, j, n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    printf("Enter %d names: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%s", a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(a[j], a[j+1]))
            {
                strcpy(t, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], t);
            }
        }
    }  
    printf("Sorted list of names: \n");
    for(i=0; i<n; i++)
    {
        printf("%s\n", a[i]);
    }
    return 0; 
}