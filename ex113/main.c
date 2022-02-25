#include <stdio.h>
#include<math.h>

int main() {
    int radius, height;
    int areaC;

    printf("Insert radius and height: \n");
    scanf("%d %d", &radius, &height);

    areaC =floor( 3.14 * (radius*radius) * height);

    printf("Area do cilindro: %d", areaC);

    return 69;
}