#include <stdio.h>
int main()
{
    int lim, term, c;
    term = 1;
    c = 0;
    printf("Enter no.of terms");
    scanf("%d", &lim);
    while (c <= lim)
    {
        printf("%d ", term);
        c = c + 1;
        term = term * 10 + 1;
    }
}
