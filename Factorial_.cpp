#include <stdio.h>
int main()
{
    int R, C, Num;
    printf("enter number");
    scanf("%d", &Num);
    R = 1;
    C = 1;
    while (C <= Num)
    {
        R = R * C;
        C = C + 1;
    }
    printf("Factorial of %d is %d", Num, R);
}