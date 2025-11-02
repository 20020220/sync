#include <stdio.h>
#include <stdbool.h>

int coins[] = {5, 10, 20, 50, 100, 200};
int coinCount = sizeof(coins) / sizeof(coins[0]);

int main()
{
    printf("\nÍrd be az összeget, legyen 5-el osztható\n");
    int total;
    if (scanf("%i", &total) != 1)
    {
        printf("Hibás szám");
        return 1;
    }
    if (total < 5)
    {
        printf("Kissebb mint 5");
        return 1;
    }
    if (total % 5 != 0)
    {
        printf("Nem osztható 5-el");
        return 1;
    }
    printf("\nKiadott címletek:\n");
    for (int n = coinCount - 1; n >= 0; n--)
    {
        int coin = coins[n];
        int addedCoins = 0;
        while (coin <= total && total > 0)
        {
            addedCoins++;
            total -= coin;
        }
        if (addedCoins > 0)
            printf("%i x %i\n", coin, addedCoins);
    }
    return 0;
}