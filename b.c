#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("\nEntered number is even ");
    }
    else
    {
        printf("\nEntered number is odd");
    }
    return 0;
}
