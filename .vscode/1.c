#include <stdio.h>
int main()
{
    int lim, term = 1, c = 0;
    printf("Enter Number of terms: ");
    scanf("%d", &lim);

    while (c <= lim)
    {
        printf("%d ", term); // output
        c++;
        term *= 10;
    }
    return 0;
}

