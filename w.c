#include <stdio.h>

int main()
{
    int num,sum=0,i,rem;
    scanf("%d",&num);
    i=num;
   while(num!=0)
   {
       rem=num%10;
       sum=(sum*10)+rem;
       num=num/10;
   }
    
    if(i==sum)
    {
    printf("\n%d is palindrome",i);
    }
    
     else
    {
    printf("\n%d is not a  palindrome",i);
    }
    
    return 0;
}
