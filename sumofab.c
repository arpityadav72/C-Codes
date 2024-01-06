#include <stdio.h> 
void sum(int a, int b) //signature
{
    int s;
    s = a + b;
    printf("%d is sum", s);
}
int main()
{
    int a, b;
    sum(10, 20);
    printf("enter values");
    scanf("%d", &a);
    printf("enter values");
    scanf("%d", &b);
    sum(a, b);
}