#include <stdio.h>
int main()
{
    int N, Num, i, low;
    printf("enter the no. of values that you wish to enter");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("enter no%d", i);
        scanf("%d", &Num);
        if (i == 1)
        {
            low = Num;
        }
        else
        {
            if (low > Num)
            {
                low = Num;
            }
        }
    }
    printf("lowest Num is %d", low);
}
