#include <stdio.h>

int main() {
    int n;

    printf("Insert month(1-12):\n");
    scanf("%d", &n);

    if((n == 0)||(n>12)){
        printf("ERROR");
    }else{
        if(n==1){
            printf("Janeiro");
        }else{
            if(n==2){
                printf("Feveiro");
            }else{
                if(n==3){
                    printf("Marco");
                }else{
                    if(n==4){
                        printf("Abril");
                    }else{
                        if(n==5){
                            printf("Maio");
                        }else{
                            if(n==6){
                                printf("Junho");
                            }else{
                                if(n==7){
                                    printf("Julho");
                                }else{
                                    if(n==8){
                                        printf("Agosto");
                                    }else{
                                        if(n==9){
                                            printf("Setembro");
                                        }else{
                                            if(n==10){
                                                printf("Outubro");
                                            }else{
                                                if(n==11){
                                                    printf("Novembro");
                                                }else{
                                                    if(n==12){
                                                        printf("Dezembro");
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
