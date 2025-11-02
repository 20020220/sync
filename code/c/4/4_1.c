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
        printf("Adja meg a szamot:");
        scanf("%d", &szam);
        if (szam >= 0 && szam <= 10)
        {
            ok = false;
            printf("Hibas szam");
        }
    } while (!ok);

    printf("%d szám faktoriálisa: %d", szam, faktorialis(szam));
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