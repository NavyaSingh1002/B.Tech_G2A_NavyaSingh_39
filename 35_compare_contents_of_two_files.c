#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fa, *fb;
    char ca, cb;
    fa=fopen("file1.txt", "r");
    if(fa==NULL)
    {
        printf("Cannot open file1.txt");
        exit(0);
    }
    fb=fopen("file2.txt", "r");
    if(fb==NULL)
    {
        printf("Cannot open file2.txt");
        exit(0);
    }
    while(1)
    {
        ca=fgetc(fa);
        cb=fgetc(fb);
        if(ca==EOF || cb==EOF)
        {
            break;
        }
        if(ca!=cb)
        {
            printf("Files are different.");
            fcloseall();
            exit(0);
        }
    }
    printf("Files are same.");
    fcloseall();
    return 0;
}