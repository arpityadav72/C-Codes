#include<stdio.h>

#include<string.h>
int main()
{
    char str1[20],str2[20],str3[50];

     printf("enter str1");

    gets(str1);
    printf("length of %s is %d",str1,strlen(str1));
    strcpy(str2,str1);
    printf("str2 is %s",str2);
    printf("Name is %s",strcat("mr",str1));
    


}