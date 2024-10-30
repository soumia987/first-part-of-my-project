

#include <stdio.h>

int main() {
    float nombre;

    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre : ");
    if (scanf("%f", &nombre) != 1) {
        printf("Veuillez entrer une valeur numérique valide.\n");
        return 1;
    }

    // Vérifie si le nombre est positif, négatif ou nul
    if (nombre < 0) {
        printf("Le nombre %.2f est négatif.\n", nombre);
    } else if (nombre > 0) {
        printf("Le nombre %.2f est positif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}