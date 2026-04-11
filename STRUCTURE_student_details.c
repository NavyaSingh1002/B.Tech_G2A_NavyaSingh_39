#include<stdio.h>

struct dob
{
    int d, m, y;
};

struct student
{
    int r;
    char n[100], ad[100];
    struct dob date;
};

int main()
{
    struct student s[100];
    int m, i;
    printf("Enter number of students: ");
    scanf("%d", &m);
    printf("Enter details of students: ");
    for(i=0; i<m; i++)
    {
        printf("\nEnter details of student %d: ", i+1);
        scanf("%d%s%d%d%d%s", &s[i].r, s[i].n, &s[i].date.d, &s[i].date.m, &s[i].date.y, s[i].ad);
    }

    //Displaying details of students
    printf("\nDetails of students are: ");
    for(i=0; i<m; i++)
    {
        printf("\nDetails of %d student: ", i+1);
        printf("\nROLL NUMBER: %d \tNAME: %s \tDOB: %d/%d/%d \tADDRESS: %s", s[i].r, s[i].n, s[i].date.d, s[i].date.m, s[i].date.y, s[i].ad);
    }

    //Specific details of those students whose month is January
    printf("\nDetails of students whose month of birth is January: ");
    for(i=0; i<m; i++)
    {
        if(s[i].date.m==1)
        {
            printf("\nROLL NUMBER: %d \tNAME: %s \tDOB: %d/%d/%d \tADDRESS: %s", s[i].r, s[i].n, s[i].date.d, s[i].date.m, s[i].date.y, s[i].ad);
        }
    }
    return 0;
}