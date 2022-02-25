#include <stdio.h>

int main() {
    int hour, minutes;
    printf("insert hour:");
    scanf("%d", &hour);
    printf("insert minutes:");
    scanf("%d", &minutes);

    if((hour > 12) && (hour < 24)){
        hour = hour-12;
        printf("%d:%d pm", hour, minutes);
    }else{
        printf("%d:%d am", hour, minutes);
    }
    return 0;
}