#include <stdio.h>

int main()
{
    int num,x,count=1,i;
    scanf("%d %d",&num,&x);
    for(i=1;i<=x;i++)
    
    {
         
      count=count*num;
         
    }
    
    printf("\nThe power value is %d",count);
    return 0;
}
