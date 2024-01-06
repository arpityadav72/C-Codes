#include<stdio.h>
int main()
{
    int age;

    printf("ENTER AGE\n");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("YES THEY CAN VOTE");
    }
    else
    printf("THEY CAN'T VOTE");
}