#include <stdio.h>
int main()
{
    int i;
    // program to accept name from the user and display the name horizontally and vertically.
    char name[20];
    printf("Enter your name (10 characters max)");
    scanf("%s", &name);
    for (i = 0; name[i] = '\0'; i++)
    {
        printf("%c", name[i]);
    }
}
