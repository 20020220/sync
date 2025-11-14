#include <stdio.h>
#include <stdbool.h>

int faktorialis(int szam);

int main()
{
    int szam;
    bool ok;
    do
    {
        ok = true;
        printf("\nAdja meg a számot:\n");
        scanf("%d", &szam);
        if (szam < 0 || szam >10)
        {
            ok = false;
            printf("\nHibás szam\n");
        }
    } while (!ok);

    printf("\n%d szám faktoriálisa: %d\n", szam, faktorialis(szam));
    return 0;
}

/** Faktoriális számítása */
int faktorialis(int input)
{
    int sorozat = 1;
    for (int n = 1; n <= input; n++)
    {
        sorozat *= n;
    }
    return sorozat;
}