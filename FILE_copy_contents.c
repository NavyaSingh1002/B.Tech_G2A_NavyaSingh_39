#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs, *ft;
    char c;
    int i;
    fs=fopen("file1.txt", "r");
    if (fs==NULL)
    {
        printf("Cannot open file1.txt");
        return 0;
    }
    ft=fopen("file2.txt", "w");
    if(ft==NULL)
    {
        printf("Cannot open file2.txt");
        return 0;
    }
    while(i>=0)
    {
        c=fgetc(fs);
        if(c==EOF)
        {
            break;
        }
        fputc(c, ft);
    }
    fcloseall();
    return 0;
}
