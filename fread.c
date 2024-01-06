#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr; char str1[1000000];
fptr=fopen("Datafile.Txt","r");
fgets(&str1,100000,fptr);
printf("%s",str1);



}