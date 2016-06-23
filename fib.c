#include <stdio.h>

int main()
{
    int i,a=0,b=1,c,num;
    scanf("%d",&num);
    printf("fibanocci series :%d %d ",a,b);
    for(i=3;i<=num;i++)
    {
        c=a+b;a=b;b=c;
        printf("%d ",c);
    }
    
    return 0;
}
