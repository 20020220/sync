#include <stdio.h>

int main()
{
    int n = 1000;
    do
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
        printf("\n%i\n", n);
    } while (n > 1);
    return 0;
}