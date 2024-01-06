#include <stdio.h>
#include<conio.h>
int main()
{
    int i = 0, N1, N2, S;
    for (i = 0; i <40; i++)
    {
        printf("$");
    }
    printf("Enter no.1");
    scanf("%d", &N1);
    for (i = 0; i < 40; i++)
    {
        printf("$");

        
    }
    printf("Enter no.2");
    scanf("%d", &N2);
    for (i = 0; i <40; i++)
        printf("$");

    S= N1 + N2;
    printf("\n sum is %d\n", S);
    for (i = 0; i < 40; i++)
    {
        printf("$");
    }
}