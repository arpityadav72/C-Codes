#include <stdio.h>
int main()
{
    int m[7], num, i, ele, c, j;
    for (i = 0; i < 7; i++)
    {
        printf("Enter the number of %d", i + 1);
        scanf("%d", &m[i]);
    }
    for (j = 0; j < 7; j++)
    {
        for (i = 0; i < 7; i++)
            ele = m[j];
        c = 0;
        {
            m[i] == ele;
            c = c + 1;
        }
        printf("count of %d is %d\n", ele, c);
    }
}