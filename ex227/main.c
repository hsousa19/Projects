#include <stdio.h>

int main() {
    int n_lados;

    printf("Insira o numero de lados:\n");
    scanf("%d", &n_lados);

    if((n_lados >= 15) || (n_lados) <= 2){
        printf("ERRROR");
    }else{
        if(n_lados == 3){
            printf("Triangulo");
        }else{
            if(n_lados==4){
                printf("Quadrado");
            }else{
                if(n_lados==5){
                    printf("Pentagono");
                }else{
                    if(n_lados==6){
                        printf("Hexagono");
                    }else {
                        if(n_lados==7){
                            printf("Heptagono");
                        }else{
                            if(n_lados==8){
                                printf("Octogono");
                            }else{
                                if(n_lados==9){
                                    printf("Eneagono");
                                }else{
                                    if(n_lados==10){
                                        printf("Decagono");
                                    }else{
                                        if(n_lados==11){
                                            printf("Undecagono");
                                        }else{
                                            if(n_lados==12){
                                                printf("Dodecagono");
                                            }else{
                                                if(n_lados==13) {
                                                    printf("Tridecagono");
                                                }else{
                                                    if(n_lados){
                                                        printf("Tetradecagono");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
