#include <stdio.h>
#include <stdbool.h>

void clear_stdin()
{
    while (true)
    {
        int c = getchar();
        if (c == '\n' || c == EOF)
            break;
    }
}

int main()
{
    int y, m, d;
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (true)
    {
        printf("\nAdd meg a vizsgált dátumot a következő formátumban: \"év honap nap\"\n");
        if (scanf("%i %i %i", &y, &m, &d) != 3)
        {
            printf("\nHibás bemenet\n");
            clear_stdin();
            continue;
        }
        int date_of_year = d;
        for (int n = 1; n <= m; n++)
            date_of_year += days_in_months[n - 1];
        printf("\nA megadott dátum a %i. napja az évnek.\n",date_of_year);
    }
    return 0;
}