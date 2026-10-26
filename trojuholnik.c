//napíš program, ktorý načíta od používateľa celé číslo n a pomocou cyklov vypíše trojuholník podľa vzoru svojho variantu.
//Rastúci trojuholník zarovnaný vľavo. Prvý riadok obsahuje jednu hviezdičku, každý ďalší o jednu viac.


#include <stdio.h>

int main(void){

    int vyska;

    printf("Zadaj cislo  ");
    scanf("%d" , &vyska);

    for (int i = 1; vyska >= i; i++)
    {
        for (int j = 1; j <= i; j++){
            printf("*");
    }

    printf("\n");
    }
    return 0;

}
