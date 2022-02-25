#include <stdio.h>

int main() {
    int age;

    printf("Insert your age");
    scanf("%d", &age);

    if(age < 12){
        printf("Pagamento gratuito");
    }else{
        if(age > 13 && age < 24){
            printf("O seu bilhete e o Bilhete Radical");
        }else{
            if( age > 25 && age < 36){
                printf("O seu bilhete e o Bilhete Light");
            }else{
                if( age > 37 && age < 48){
                    printf("o seu Bilhete e o Bilhete Normal");
                }else{
                    if(age > 49 && age < 60){
                        printf("o seu bilhete e o Bilhete Light");
                    }else{
                        if(age > 61){
                            printf("Pagamento Gratuito");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
