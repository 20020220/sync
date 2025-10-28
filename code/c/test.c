#include <stdio.h>

int main()
{
    printf("The rint esult is %i\n", 6*2/3+5/2-7*3%2);
    printf("The float result is %f\n", 6*2.0f/3+5.0f/2-7*3%2);
    int x = 0;
    int n1 = x++;
    x = 0;
    int n2 = ++x;
    printf("x++ %i\n",n1);
    printf("++x %i\n",n2);
    return 0;
}