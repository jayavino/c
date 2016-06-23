#include<stdio.h>

int main()
{
    int i,num,sum=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum*i;
       
    }
     printf("%d",sum);
}
