#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if((a=='a' || a=='A')||(a=='e' || a=='e')||(a=='i' || a=='I')||(a=='o' || a=='O')||(a=='u' || a=='U'))
    {
        printf("\nEntered alphabet is vowels ");
    }
    else
    {
        printf("\nEntered number is consonants");
    }
    return 0;
}
