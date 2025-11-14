#include <stdio.h>
#include <stdbool.h>

int main()
{
    int p = 1;
    int pp = 0;
    while (true)
    {
        int f = p + pp;
        if (f >= 1000)
        break;
        printf("\n%i\n", f);
        pp = p;
        p = f;
    }
    return 0;
}