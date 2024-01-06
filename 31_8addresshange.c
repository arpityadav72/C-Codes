#include <stdio.h>

int main()
{
    char *cptr;
    char ch = 'y';
    cptr = &ch;
    cptr=cptr+1;
    *cptr=*cptr+1;
    printf("%c is ch through pointer", *cptr);
    printf("%u is memory address of ch", cptr);
}