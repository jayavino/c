#include <stdio.h>

int main()
{
    int sum=1,i,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum*=i;
    }
    printf("%d",sum);
    return 0;
}
