#include <stdio.h>

int main() {
    float eur, dol;
    printf("Insert quantity (Euros):");
    scanf("%f", &eur);

    dol = 1.14 * eur;
    printf("Quantity (dollar): %.2f", dol);
}
