#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year;
    printf("\nAdja meg az évet");
    scanf("%i", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("Szökőév");
    else
        printf("Nem szökőév");
    return 0;
}
