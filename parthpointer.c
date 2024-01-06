#include <stdio.h>
int main()
{
    int a, *ptr;
    a = 5;
    ptr = &a;
    char ch = 'A';
    char *ptr = &ch; // Pointer to char

    printf("address of a is %p", ptr);
    printf("value of a is %p", *ptr);
    printf("value of a is %p", a);
}