#include <stdio.h>

int main() {
    char c = 256; // Can assing integer values to varibble char, variable char taken up to only 1byte=8bits(255)
    c = c +10;
    printf("%d", c);
    return 0;
}

//Como char so pode ter valores ate 255,a partir do 256 volta a zero e conta de nov, ex 256 -->0, 257-->1, etc