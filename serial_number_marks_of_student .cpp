#include <stdio.h>
int main()
{
    int m[5], sno, i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of %d", i + 1);
        scanf("%d", &m[i]);
    }
    printf("enter serial number of student ");
    scanf("%d", &sno);
    printf("%d", m[sno - 1]);
}
