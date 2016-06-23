#include <stdio.h>

int main()
{
    int a[100],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
        if((a[i]+a[j])==0)
        {
          printf("%d %d",a[i],a[j]);
          break;
        }
    }
    }
    return 0;
}
