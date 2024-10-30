#include <stdio.h>

int main() {
    int nombre;
    int inverse = 0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);

    // Traiter le cas d'un nombre négatif
    int est_negatif = (nombre < 0) ? 1 : 0;
    if (est_negatif) {
        nombre = -nombre; // Rendre le nombre positif pour le traitement
    }

    // Inverser le nombre
    while (nombre != 0) {
        int chiffre = nombre % 10; // Extraire le dernier chiffre
        inverse = inverse * 10 + chiffre; // Construire le nombre inversé
        nombre /= 10; // Retirer le dernier chiffre du nombre original
    }

    // Si le nombre était négatif, ajouter le signe
    if (est_negatif) {
        printf("L'entier inversé est : -%d\n", inverse);
    } else {
        printf("L'entier inversé est : %d\n", inverse);
    }

    return 0;
}
