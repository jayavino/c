#include <stdio.h>

int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%2==1)
        {
            printf("%d ",i);
        }
   }
    
    return 0;
}
