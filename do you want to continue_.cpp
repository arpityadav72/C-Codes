#include <stdio.h>
#include <conio.h>
int main()
{
    int Num, c = 1;
    char ch;
    printf("Enter Any No.(2-9):");
    scanf("%d", &Num);
    getch();
    printf("Do you want to print the table(Y/N)?");
    scanf("%c", &ch);
    getch();
    while (ch == 'y' || ch == 'Y')
    {
        printf("%d*%d=%d", Num, c, Num * c);
        printf("Next Term(Y/N)?");
        scanf("%c", &ch);
        getch();
        c = c + 1;
    }
    return 1;
}
