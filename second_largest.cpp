#include <stdio.h>
int main()
{
    int N, i, lar, Num, SL;
    printf("Enter the No.of values that you wish to enter");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("enter No %d", i);
        scanf("%d", &Num);
        if (i == 1)
        {
            lar = Num;
            SL = Num;
        }
        else
        {
            if (lar < Num)
            {
                SL = lar;
                lar = Num;
            }
            else
            {
                if (SL < Num)
                    SL = Num;
            }
        }
    }
    printf("Largest Num is %d", lar);
    printf("second largest is %d", SL);
}
