#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int dado1, dado2, dif;

    srand(time(0));
    dado1 = (rand() % 6) + 1;
    printf("Dado1: %d\n", dado1);
    dado2 = (rand() % 6) + 1;
    printf("Dado2: %d\n", dado2);

    dif = abs(dado1 - dado2);

    printf("%d\n", dif);

    if(dif < 2){
        printf("A diferenca e menor que 2");
    }else{
        if((dif >= 2) && (dif < 4)){
            printf("A diferenca e menor que 4");
        }else{
            if((dif == 4) || (dif > 4)){
                printf("A difereneca e maior que 3");
            }
        }
    }

    return 0;
}
