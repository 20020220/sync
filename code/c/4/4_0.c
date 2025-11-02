#include <stdio.h>
#include <stdbool.h>

bool szokoev(int year);

int main()
{
    int also, felso;
    bool ok;
    do
    {
        ok = true;
        printf("Adja meg az alsó és felső határt");
        if (scanf("%d,%d", &also, &felso) != 2)
        {
            printf("Hibás bemenet");
            ok = false;
            while (getchar() != "\n")
                ;
        }
        else if (also < 0 || also > felso || felso > 3000)
        {
            printf("Hibas adat");
            ok = false;
        }
    } while (!ok);
    int counter = 0;
    for (int yr = also; yr <= felso; yr++)
    {
        if (szokoev(yr))
        {
            printf("Szokoev %d\n", yr);
            counter++;
        }
        else
            printf("Nem szokoev %d", yr);
    }
    printf("Összesen %d", counter);
    return 0;
}

bool szokoev(int year)
{
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}