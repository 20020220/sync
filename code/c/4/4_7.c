#include <stdio.h>
#include <stdbool.h>

int main()
{
    int total = 0;
    while (true)
    {
        printf("\nAdj meg egy matematikai műveletet a következő formátumban: \"szám művelet szám\"");
        float left, right;
        char operator;
        if (scanf("%f %c %f", &left, &operator, &right) != 3)
        {
            printf("\nHibás bemenet\n");
            continue;
        }
        float result;
        switch (operator)
        {
        case '+':
            result = left + right;
            break;

        case '-':
            result = left - right;
            break;

        case '*':
            result = left * right;
            break;

        case '/':
            if (right == 0)
            {
                printf("\n0-val nem lehet osztani\n");
                continue;
            }
            result = left / right;
            break;

        default:
            printf("\nHibás operátor\n");
            continue;
            break;
        }
        printf("\nEredmény: %f\n", result);
    }
    return 0;
}