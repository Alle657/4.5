#include <stdio.h>

int main() {
    int numero_prodotti, contatore = 1;
    float costo, somma = 0;


    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &numero_prodotti);


    while (contatore <= numero_prodotti) {
        printf("Inserisci il costo del prodotto %d: ", contatore);
        scanf("%f", &costo);
        somma += costo;
        contatore++;
    }


    printf("L'importo totale da pagare e': %.2f euro\n", somma);

    return 0;
}
