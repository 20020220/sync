#include <stdio.h>
#include <stdbool.h>

int main()
{
    float total = 0;
    printf("\nSzámok összeadása. Kezdés 0-tól.");
    while (true)
    {
        float input;
        printf("\nAdd meg a következő számot, vagy írj \"0\"t a befejezéshez.\n");
        if (scanf("%f", &input) != 1)
        {
            printf("Érvénytelen szám.");
            continue;
        }
        if (input == 0)
            break;
        total += input;
        printf("\nÚj összeg: %f", total);
    }
    printf("Végső eredmény: %f", total);
    return 0;
}