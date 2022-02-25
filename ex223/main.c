#include <stdio.h>

int main() {
    int grade;

    printf("Insert your grade (0-20): \n");
    scanf("%d", &grade);

    if((grade < 0) || (grade > 20)){
        printf("ERROR");
    }else{
        if((grade >= 0) && (grade <= 9)){
            printf("Insuficiente");
        }else{
            if((grade >= 10) && (grade <= 13)){
                printf("Suficiente");
            }else{
                if((grade >= 14) && (grade <= 16)){
                    printf("Bom");
                }else{
                    if((grade >= 16) && (grade <= 20)){
                        printf("Excelente");
                    }
                }
            }
        }
    }
    return 0;
}
