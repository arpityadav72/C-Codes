#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x is %d and y is %d",*x,*y);
}
int main()
{
    int a,b;
    a=100;
    b=200;
    swap(&a,&b);
    printf("a is %d and b is %d",a,b);
}