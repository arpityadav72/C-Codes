#include <stdio.h>
int main()

{
    int a, b;

    printf("ENTER TWO INTEGER NUMBER\n");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("a is big\n");
    }
    else
    {
        printf("b is big\n");
    }
}