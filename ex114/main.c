#include <stdio.h>
#include<math.h>

int main() {
    int ca, cb;
    float hip;

    printf("Insira o  valor dos catetos\n");
    scanf("%d %d",&ca, &cb);

    hip = sqrt((ca*ca)+(cb*cb));

    printf("O valor da hipotenusa e %f", hip);
    return 69;
}

//casas decimais
