#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) {
        return 0; // Les nombres <= 1 ne sont pas premiers
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n n'est pas premier
        }
    }
    return 1; // n est premier
}

int main() {
    int lignes;

    printf("Entrez le nombre de lignes pour la pyramide : ");
    scanf("%d", &lignes);

    int compteur = 0;
    int nombre = 2; // Le premier nombre premier

    while (compteur < lignes) {
        if (est_premier(nombre)) {
            // Afficher les espaces pour centrer la pyramide
            for (int j = 0; j < lignes - compteur - 1; j++) {
                printf(" ");
            }
            // Afficher les étoiles
            for (int j = 0; j < nombre; j++) {
                printf("*");
            }
            printf("\n");
            somme+=nombre
            compteur++;
        }
        
    }

    return 0;
}
