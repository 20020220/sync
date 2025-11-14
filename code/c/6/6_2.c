#include <stdio.h>
#include <stdbool.h>

float read_float();
char read_unit();
void clear_stdin();
float convert(float input, char unit);

int main()
{
    printf("\nAdd meg a hőmérsékletet Celziusz fokban\n");
    float input = read_float();
    printf("\nAdd meg a konvertálás mértékegységét\n");
    char unit = read_unit();
    float converted = convert(input, unit);
    printf("\n%c %.2f\n", unit, converted);

    return 0;
}

float convert(float input, char unit)
{
    switch (unit)
    {
    case 'K':
        return input + 273.15;
    case 'F':
        return input * 1.8f + 32;
    default:
        break;
    }
}

float read_float()
{
    float target;
    while (true)
    {
        if (scanf("%f", &target) != 1)
        {
            printf("\nHibás szám\n");
            clear_stdin();
            continue;
        }
        clear_stdin();
        return target;
    }
}

char read_unit()
{
    char target;
    while (true)
    {
        if (scanf("%c", &target) != 1)
        {
            printf("\nHibás karakter\n");
            clear_stdin();
            continue;
        }
        if (target != 'K' && target != 'F')
        {
            printf("Hibás mértékegység");
            clear_stdin();
            continue;
        }
        return target;
        clear_stdin();
    }
}

void clear_stdin()
{
    while (true)
    {
        int c = getchar();
        if (c == EOF || c == '\n')
            break;
    }
}