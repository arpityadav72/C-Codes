#include <stdio.h>
int main()
{
    char a,*cptr;
    a = 'w';
    cptr = &a;
    *cptr=*cptr+1;
    printf("value through iptr%c", *cptr);
    printf("address liked to iptr %u", cptr);
    printf("value of a is  %c",a);
    cptr=cptr+1;
     printf("value through iptr%c", *cptr);
     

}