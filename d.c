#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        printf("\n%d is greater",a);
    }
    else if(b>c)
    {
        printf("\n%d is greater",b);
    }
    else
    {
        printf("\n%d is greater",c);
    }
    return 0;
}
