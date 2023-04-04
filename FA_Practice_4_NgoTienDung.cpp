#include <stdio.h>
#include <stdlib.h>

// Hàm kiểm tra xem tất cả các chữ số trong số long n có phải đều khác nhau hay không.
long all_digits_are_different(long n)
{
    long Arr[1001];

    long j, c, i = 0;

    while (n != 0)
    {
        long x = n % 10;
        Arr[i] = x;
        i++;
        n /= 10;
    }

    long temp = 0;

    for (j = 0; j < i - 1; j++)
    {
        for (c = j + 1; c < i; c++)
        {
            if (Arr[j] == Arr[c])
            {
                temp++;
            }
        }
    }

    if (temp == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void differentiate_number(long a, long b)
{
    long count = 0;
    for (long x = a; x <= b; x++)
    {
        if (all_digits_are_different(x) == 1)
        {
            //printf("%ld ", x);
            count++;
        }
    }
    printf("\n%ld ", count);
}

int main()
{
    // Test case 1
    long L1 = 1;
    long R1 = 10;

    differentiate_number(L1, R1);

    // Test case 2
    long L2 = 2;
    long R2 = 15;

    differentiate_number(L2, R2);

    // Test case 3
    long L3 = 10;
    long R3 = 50;

    differentiate_number(L3, R3);

    // Test case 4
    long L4 = 50;
    long R4 = 100;

    differentiate_number(L4, R4);

    // Test case 5
    long L5 = 100;
    long R5 = 500;

    differentiate_number(L5, R5);

    // Test case 6
    long L6 = 1;
    long R6 = 1000;

    differentiate_number(L6, R6);


}
