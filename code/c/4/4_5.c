#include <stdio.h>
#include <stdbool.h>

int price_per_minute[] = {40, 60, 100};

void clear_stdin()
{
    while (true)
    {
        int c = getchar();
        if (c == EOF || c == '\n')
            break;
    }
}

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
            clear_stdin();
            continue;
        }
        if (type == 0)
        {
            printf("\nSzámolás vége, összeg: %iFt\n", total);
            break;
        }
        while (true){
            int duration;
            printf("\nAdd meg a időtartamát percben.\n");
            if (scanf("%d", &duration) != 1 || duration<=0)
            {
                printf("\nHibás szám.\n");
                clear_stdin();
                continue;
            }
            int price = price_per_minute[type + 1] * type * duration;
            total += price;
            break;
        }
    }
    return 0;
}