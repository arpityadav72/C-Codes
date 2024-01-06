#include <stdio.h>
int main()
{
    int p, i, r,m ;
    p=1;
    r=1;
    printf("Enter the  value of p");
    scanf("%d", &p);
    printf("Enter the value of m");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
{
        r=r*p;
            
    }

    printf("value of r is %d", r);
}