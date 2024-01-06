#include <stdio.h> 
void sum(int, int); //prototype/declaration
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
void sum(int a, int b) //definition 
{
    int s;
    s = a + b;
    printf("%d is sum", s);
}