#include<stdio.h>
int main()
{
    struct teacher
    
    {
        char name[20];
        int age;
    }t1,t2;



    
    printf("enter teacher1");
    scanf("%s",&t1.name);
    printf("enter age1");
    scanf("%d",&t1.age);
    printf("enter teacher2");
    scanf("%s",&t2.name);
    printf("enter age2");
    scanf("%d",&t2.age);
    
    printf("%s is %d",t1.name,t1.age);
    printf("%s is %d",t2.name,t2.age);

}