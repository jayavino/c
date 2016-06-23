#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, i, temp1, temp2, remainder, n = 0, result = 0;

    //printf("Enter two numbers(intervals): ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d an %d are: ", n1, n2);

    for(i = n1; i<n2; ++i)
    {
        temp2 = i;
        temp1 = i;

        // number of digits calculation
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }

        // result contains sum of nth power of its digits
        while (temp2 != 0)
        {
            remainder = temp2%10;
            result += pow(remainder, n);
            temp2 /= 10;
        }

        // checks if number i is equal to the sum of nth power of its digits
        if (result == i) {
            printf("%d ", i);
        }

        // resetting values to check Armstrong number for next iteration
        n = 0;
        result = 0;

    }
    return 0;
}
