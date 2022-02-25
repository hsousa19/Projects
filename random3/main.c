#include <stdio.h>

int main() {
    float answer, tempC;

    printf("Temperature:\n");
    scanf("%.2f", &tempC);

    answer = (tempC * 1.8) + 32;

    printf("Graus Farenheit = %.2f", answer);

    return 69;
}
//o resultado nao diz o valor exato