#include <stdio.h>

int main() {
    int integer;

    printf("insert number:\n");
    scanf("%d", &integer);

    if(integer%2 == 0) {
        printf("O numero e par");
    } else {
        printf("numero e impar");

    }
    return 0;
}
