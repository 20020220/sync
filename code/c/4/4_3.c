#include <stdio.h>
#include <stdbool.h>

int hatvany(int alap, int kitevo);

int main()
{
    int kitevo, alap;
    bool ok;
    do
    {
        ok = true;
        printf("\nAdja meg az alapot és a kitevőt a következő formátumban: \"alap kitevő\"\n");
        if (scanf("%d %d", &alap, &kitevo) != 2)
        {
            ok = false;
            printf("\nHibás bemenet\n");
        }
        else if (!(alap > 0 && kitevo >= 0))
        {
            ok = false;
            printf("Hibás adat");
        }
    } while (!ok);
    printf  ("%d %d hatványa %d",alap,kitevo,hatvany(alap,kitevo));
    return 0;
}

int hatvany(int alap, int kitevo)
{
    int sorozat = alap;
    for (int n = 1; n < kitevo; n++)
    {
        sorozat *= alap;
    }
    return sorozat;
}