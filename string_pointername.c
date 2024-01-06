#include <stdio.h>

int main()
{
    char Name[15], *cptr;
    int i = 0;
    printf("Enter Name");
    // scanf("%s", &Name);
    gets(Name);
    cptr = &Name;
    printf("%c", *cptr);
    for (cptr = &Name; *cptr != '\0'; cptr ++ ,i++)
    {
        printf("character is %c", *cptr);
        printf("length is %d", i);
    }
}