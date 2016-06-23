#include<stdio.h>

int main()
{
    int i=0,num,k,rem[10];
    scanf("%d",&num);
   while(num!=0)
   {
     rem[i++]=num%10;
     num=num/10;
     
   }
     for(k=0;k<i;k++)
     {
     printf("%d",rem[k]);
     }
     return 0;
}
