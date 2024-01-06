#include <stdio.h>
int main()
{
    int Num, c = 1;
    char ch;
    printf("Enter Any No.(2-9):");
    scanf("%d", &Num);
    printf("Do you want to print the table(Y/N)?");
    scanf("%c", &ch);
    while (ch == 'y' || ch == 'Y')
    {
        printf("%d*%d=%d", Num, c, Num * c);
        printf("Next Term(Y/N)?");
        scanf("%c", &ch);
        c = c + 1;
    }
    return 1;
}
