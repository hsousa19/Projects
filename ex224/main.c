#include <stdio.h>

int main() {
    int season, day, month;

    printf("Insert day: \n");
    scanf("%d", &day);
    printf("Insert month: \n");
    scanf("%d", &month);

    if((month == 1) || (month == 2)){
        printf("Inverno");
    }else{
        if((month == 12)&&(day < 22)){
        printf("Outono");
        }else{
            if((month == 12)&&(day >= 22)){
            printf("Inverno");
            }else{
                if((month == 3)&&(day < 20)){
                    printf("Inverno");
                }else{
                    if((month == 3)&&(day >=20)){
                        printf("Spring");
                    }else{
                        if((month == 4) || (month == 5)){
                            printf("Spring");
                        }else{
                            if((month == 6)&&(day < 21)){
                                printf("Sprint");
                            }else{
                                if((month == 6)&&(day>=21)){
                                    printf("Summer");
                                }else{
                                    if((month == 7) || (month==8)){
                                        printf("Summer");
                                    }else{
                                        if((month == 9) && (month<22)){
                                            printf("Summer");
                                        }else{
                                            if((month == 9) && (day >= 22)){
                                                printf("Winter is coming");
                                            }else{
                                                if((month == 10) || (month==11)){
                                                    printf("Winter is coming");
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
