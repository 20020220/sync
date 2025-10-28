#include <stdio.h>

int main(){
    printf("Add meg a 3szög 3 oldalainak hosszát a következő formátumban: 'a b c'\n");
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if(a+b<c||a+c<b||b+c<a)
        printf("A 3szög nem valós.\n");
    else
        printf("A háromszög valós.\n");
    return 0;
}