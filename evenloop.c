#include<stdio.h>

int main()

{
  
    int i,n,s=0,v=0;
     printf("Enter The No.=");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)

    {
        if (i%2==0)
        {
            s=s+i;
        }
        else 
        {
            v=v+i;
        }

    }
    printf("even sum is %d",s);
    printf("odd is %d",v);
    
    }
    