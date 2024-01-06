#include <stdio.h>
int main()
{
    int n, i, so = 0, se = 0;
    printf("enter the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            so = so + i;
        }
        else
            se = se + i;
    }
    printf("sum of odd number is %d\n", so);
    printf("sum of even number is %d\n", se);
}