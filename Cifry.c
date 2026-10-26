#include <stdio.h>

// Vlastna funkcia, ktora vrati pocet cifier zadaného cisla
int zistiPocetCifier(int cislo) {
    if (cislo == 0) return 1;
    
    int dlzka = 0;
    while (cislo > 0) {
        cislo /= 10;
        dlzka++;
    }
    return dlzka;
}

int main() {
    int cislo;

    printf("Zadaj cele cislo od 0 do 1 000 000 000: ");
    
    // Osetrenie chybneho vstupu (napr. pismena namiesto cisla)
    if (scanf("%d", &cislo) != 1) {
        printf("Chyba: Neplatny vstup!\n");
        return 1;
    }

    if (cislo < 0 || cislo > 1000000000) {
        printf("Chyba: Cislo je mimo povoleného rozsahu.\n");
        return 1;
    }

    // Specialny pripad pre nulu
    if (cislo == 0) {
        printf("Pocet cifier: 1\n");
        printf("Sucet cifier: 0\n");
        printf("Parne cifry: 1\n");
        printf("Neparne cifry: 0\n");
        printf("Pocet cifier rovnych 0: 1\n");
        return 0;
    }

    int temp = cislo;
    int pocet = 0;
    int sucet = 0;
    int parne = 0;
    int neparne = 0;
    int nuly = 0;

    // Hlavna slucka na prechod ciframi
    while (temp > 0) {
        int cifra = temp % 10;
        
        pocet++;
        sucet += cifra;

        if (cifra == 0) {
            nuly++;
        }

        if (cifra % 2 == 0) {
            parne++;
        } else {
            neparne++;
        }

        temp /= 10;
    }

    // Vysledky
    printf("Pocet cifier: %d\n", pocet);
    printf("Sucet cifier: %d\n", sucet);
    printf("Parne cifry: %d\n", parne);
    printf("Neparne cifry: %d\n", neparne);
    printf("Pocet cifier rovnych 0: %d\n", nuly);

    return 0;
}
