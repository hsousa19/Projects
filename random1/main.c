#include <stdio.h>

int main() {
    int day, month, year, age;

     printf("Put your birthday in format DD/MM/YYYY:\n" );
     scanf("%d/%d/%d", &day, &month, &year);

     age = 2022 - year;

     if((year >= 2023)||((month==2)&&(day>=26))||((year==2022)&&(month>=3))){
         printf("ERROR");
     }else{
         printf("You are %d years old", age);
     }
    return 0;
}
