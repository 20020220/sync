#include <stdio.h>
#include <math.h>

int main()
{
    printf("Add meg a másodfokú egyenlet 'a', 'b' és 'c' értékét a következő formátumban: 'a b c', a következő képletből: 'ax^2 + bx + c = 0'\n");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = pow(b, 2.0) - 4.0 * a * c;
    if(d<0){
        printf("D kissebb mint 0, nincs valós gyök.\n");
        return 1;
    }
    float x1 = (-b + sqrt(d))/(2.0*a);
    float x2 = (-b - sqrt(d))/(2.0*a);
    printf("x1='%f'\nx2='%f'\n", x1, x2);
    return 0;
}