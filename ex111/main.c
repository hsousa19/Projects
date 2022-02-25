#include <stdio.h>
#include <string.h>


int main() {
   char name[256];       /*espaco da variavel(256=8bits)*/
   int age, weight;

    printf("Insert Name, Age and Weight: \n");
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%d", &weight);


    printf("My name is %s, i am %d years old and I weight %d kilos", name, age, weight);
    return 0;

}
