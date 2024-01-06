#include <stdio.h>
int main()
{
    int ch;
    int M;W;F;
    printf("Enter first letter of weakday M,W,F");
    scanf("%d",&ch);
    switch (ch)
    {
    case 'M':
        printf("weakday=Monday");
        break;
    case 'W':
        printf("weakday=Wednesday");
        break;
    case 'F':
        printf("weakday=friday");
        break;
    default:
        printf("invalid choice");
    }
}
