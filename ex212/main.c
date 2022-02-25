#include <stdio.h>

int main() {
    int a, b, c;

    printf("Insert integers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if((a > b) && (a > c)){
        printf("%d is the bigger integer", a);
    }else{
        if((b > c) && (b > c)){
            printf("%d is the bigger integer", b);
        }else{
            if((c > a) && (c > b)){
                printf("%d is the bigger integer", c);
            }else{
                if((a = c) && (a = b)){
                    printf("The 3 integers have the same value");
                }
            }
        }
    }
}