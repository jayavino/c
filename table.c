#include <stdio.h>

int main()
{
    int i,num,range;
    scanf("%d %d",&num,&range);
    for(i=1;i<=range;i++)
    {
        printf("%d * %d =%d\n",i,num,i*num);
    }
    
    return 0;
}
