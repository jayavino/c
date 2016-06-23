#include <stdio.h>

int main()
{
int num,i,j,k=0,sum,t=1,a[100];
scanf("%d",&num);
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}
scanf("%d",&sum);
for(i=0;i<num;i++)
{
    for(j=1;j<=num;j++)
    {
        if((a[i]+a[j])==9)
        {
            printf("%d %d",a[i],a[j]);
        }
    }
}
    return 0;
}
