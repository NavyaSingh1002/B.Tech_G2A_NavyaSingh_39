#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int flag=0;
    FILE *fs;
    fs=fopen("file1.txt", "r");
    if (fs==NULL)
    {
        printf("Cannot open file1.txt");
        exit(0);
    }
    char word[20];
    printf("Enter a word to search: ");
    scanf("%s", word);
    char str[200];
    while(fgets(str, 200, fs)!=NULL)
    {
        if(strstr(str, word)!=NULL)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Word found in file.");
    }
    else
    {
        printf("Word not found in file.");
    }
    fclose(fs);
    return 0;
}