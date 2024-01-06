#include <stdio.h>
void draw_line()
{
    int i;
    for (i = 0; i < 40; i++)
        printf("_");
    printf("\n");
}
int main()
{
    int N1, N2, S;
    draw_line();
    printf("Enter no.1");
    scanf("%d", &N1);
    draw_line();
    printf("Enter no.2");
    scanf("%d", &N2);
    S = N1 + N2;
    draw_line();
    printf("sum is %d", S);
}
