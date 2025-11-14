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
    printf("\nAdd meg az elsőfokú egyenlet \"ax+b=0\" \"a\" és \"b\" értékeit a következő formátumban: \"a b\"\n");
    float a, b;
    while (true)
    {
        if (scanf("%f %f", &a, &b) != 2)
        {
            printf("\nHibás szám\n");
            clear_stdin();
            continue;
        }
        if(b==0)
        {
            printf("\n\"b\" nem lehet 0\n");
            clear_stdin();
            continue;
        }
        break;
    }
    float x=-b/a;
    printf("\n\"x\" = %.2f\n",x);
    return 0;
}