#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int c=0, t=0, s=0, l=0;
    char ch;
    fp=fopen("file1.txt", "r");
    if(fp==NULL)
    {
        printf("Cannot open file1.txt");
        return 0;
    }
    while((ch=fgetc(fp)) != EOF)
    {
        c++;
        if(ch=='\t')
        t++;
        if(ch==' ')
        s++;
        if(ch=='\n')
        l++;
    }
    if(c>0)
    l++;
    printf("Total characters: %d", c);
    printf("\nTotal tabs: %d", t);
    printf("\nTotal spaces: %d", s);
    printf("\nTotal lines: %d", l);
    fclose(fp);
    return 0;
}