#include <stdio.h>

int main() {
    int a, b, result;

    printf("Coloque dois inteiros:\n");
    scanf("%d %d", &a, &b);

    result = a + b;

    printf("%d + %d = %d", a, b, result);

    return 0;
}
