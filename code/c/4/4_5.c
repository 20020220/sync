#include <stdio.h>
#include <stdbool.h>

int price_per_minute[] = {40, 60, 100};

int main()
{
    int total = 0;
    while (true)
    {
        printf("\nAdd meg egy telefonhívás tipusának számát.\n1: hálózaton belüli\n2: hálózatok kívüli\n3: külföldi\n0: befejezés\n");
        int type;
        if (scanf("%d", &type) != 1 || type < 0 || type > 3)
        {
            printf("\nHibás szám.\n");
            continue;
        }
        if (type == 0)
        {
            printf("\nSzámolás vége, összeg: %iFt\n", total);
            break;
        }
        int duration;
        printf("\nAdd meg a időtartamát percben.\n");
        if (scanf("%d", &duration) != 1)
        {
            printf("\nHibás szám.\n");
            continue;
        }
        int price = price_per_minute[type + 1] * type * duration;
        total += price;
    }
    return 0;
}