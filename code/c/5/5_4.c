#include <stdio.h>
#include <stdbool.h>

int scan_range(int min, int max);

int main()
{
    printf("\nAdd meg az órák számát\n");
    int h = scan_range(0, 23);
    printf("\nAdd meg a percek számát\n");
    int m = scan_range(0, 59);
    printf("\nAdd meg a másodpercek számát\n");
    int s = scan_range(0, 59);

    int total_s = s + m * 60 + h * (60 * 60);
    printf("\nMásodpercek összesen: %i\n", total_s);
    printf("\nPercek összesen: %i\n", total_s / 60);
    printf("\nÓrák összesen: %i\n", total_s / (60 * 60));
    return 0;
}

int scan_range(int min, int max)
{
    int target;
    while (true)
    {
        if (scanf("%i", &target) != 1)
        {
            printf("\nHibás szám\n");
            continue;
        }
        if (target < min || target > max)
        {
            printf("\nHatáron kívül\n");
        }
        return target;
    }
}