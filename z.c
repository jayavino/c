#include <stdio.h>

int main()
{
    int range,i=0,sum=0;
    scanf("%d",&range);
    for(i=0;i<=range;i++)
    {
    sum=sum+i;
    }
    printf("\nThe sum of natural number is %d:",sum);
    return 0;
}
