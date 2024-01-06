#include <stdio.h>
int main()
{
    int N, R, S = 0;
    N = 389;
    while (N != 0)
    {
        R = N % 10;
        S = S + R;
        N = N / 10;
    }
    printf("%d sum of digits", S);
}
