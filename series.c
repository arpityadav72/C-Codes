#include <stdio.h>
int main()
{
    int num = 1, m = 200;
    while (num >= m)
    {
        num = num + 3;

        printf("series is %d", num);
    }
}