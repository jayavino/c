#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d",&num);
    while(num!=0)
    {
         
         count++;
         num=num/10;
    }
    
    printf("\nThe number  of digit in  the given  integers is %d",count);
    return 0;
}