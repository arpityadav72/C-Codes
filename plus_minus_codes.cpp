#include <stdio.h>
#include <conio.h>
int main()
{
    int Num1, Num2;
    char Op, Ch = 'y';
    while (Ch == 'y')
    {
        printf("Num1:");
        scanf("%d", &Num1);
        printf("Num2:");
        scanf("%d", &Num2);
        getch();
        printf("Enter+or-:");
        scanf("%c", &Op);
        if (Op == '+')
        {
            printf("Results is %d", Num1 + Num2);
        }
        else if (Op == '-')
            printf("Result is %d", Num1 - Num2);
        getch();
        printf("\nDo you want to continue(Y/N)?");
        scanf("%c", &Ch);
    }
    printf("programme over");
}
