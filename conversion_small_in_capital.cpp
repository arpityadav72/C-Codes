#include <stdio.h>
int main()
{
    char name[20];
    int i;
    printf("please enter name");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] - 32;
    }
    printf("name is %s", name);
}