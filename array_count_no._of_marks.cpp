#include <stdio.h>
int main()
{
    int m[10], A, B, C, i;
    A = 0, B = 0, C = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the marks of %d", i + 1);
        scanf("%d", &m[i]);
        if (m[i] > 45 and m[i] < 60)
            A = A + 1;
        else if (m[i] > 60 and m[i] < 70)
            B = B + 1;
        else if (m[i] > 70 and m[i] < 100)
            C = C + 1;
    }
    printf("count of A is %d\n", A);
    printf("count of B is %d\n", B);
    printf("count of C is %d\n", C);
}
