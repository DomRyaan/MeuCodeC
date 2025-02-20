#include <stdio.h>

int main(){
    int tv2020, tv2021, tv2022;
    int noteb2020, noteb2021, noteb2022;
    int smart2020, smart2021, smart2022;

    tv2020 = 1; 
    tv2021 = 5; 
    tv2022 = 6;

    noteb2020 = 5;
    noteb2021 =  6;
    noteb2022 = 7;

    smart2020 = 8; 
    smart2021 = 9; 
    smart2022 = 12;

    float media2020, media2021, media2022;

    media2020 = (tv2020 + noteb2020 + smart2020) / 3.0;
    media2021 = (tv2021 + noteb2021 + smart2021) / 3.0;
    media2022 = (tv2022 + noteb2022 + smart2022) / 3.0;

    printf("\n A media de 2020 foi: %.1f", media2020);
    printf("\n A media de 2021 foi: %.1f", media2021);
    printf("\n A media de 2022 foi: %.1f", media2022);

    return 0;
}