#include<stdio.h>
#include<stdlib.h>
int main()
{

    FILE *fptr; char str1[40];
    int age;
    int accountno;

fptr=fopen("wrt.txt","w");
printf("enter your name");
gets(str1);
printf("enter age");
scanf("%d",&age);
printf("enter accountno");
scanf("%d",&accountno);
fprintf(fptr, "%s %d %d",str1,age,accountno);
fclose(fptr);



}