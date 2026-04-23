#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("Number of command line arguments= %d", argc);
    printf("\nThe command line arguments are:");
    for(i=0; i<argc; i++)
    {
        printf("\n%d. %s", i+1, argv[i]);
    }
    return 0;
}