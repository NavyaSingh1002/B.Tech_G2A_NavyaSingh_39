#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if(age <= 12)
    printf("The person is a child.");
    else if(age > 12 && age <=19)
    printf("The person is a teenager.");
    else if(age > 19 && age <=60)
    printf("The person is an adult.");
    else
    printf("The person is a senior citizen.");
    return 0;
}