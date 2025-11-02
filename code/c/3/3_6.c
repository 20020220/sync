#include <stdio.h>

int main()
{
    printf("\nAdja meg a pontszámot:");
    int score;
    scanf("%d", &score);
    if (score >= 90)
        printf("jeles");
    else if (score >= 50)
        printf("közepes");
    else
        printf("elégtelen");
    return 0;
}