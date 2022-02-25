#include <stdio.h>
#include<math.h>

int main() {
    int base, height;
    float areaT;

    printf("base and height:\n");
    scanf("%d %d", &base, &height);

    areaT = floor(base * height) / 2; /*floor= arrendodamento por defeito, ceil= arredondamento por excesso*/

    printf("Area do triangulo = %.2f", areaT);

    return 69;
}
//o resultado da area não dá valor exato