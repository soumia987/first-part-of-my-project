#include <stdio.h>

int est_premier(int n) {
    if (n <= 1) {
        return 0; // Les nombres <= 1 ne sont pas premiers
    }
    for (int i = 2; i * i <= n; i++) { // On teste jusqu'à la racine carrée de n
        if (n % i == 0) {
            return 0; // n n'est pas premier
        }
    }
    return 1; // n est premier
}

int main() {
    int nombre;

    printf("Entrez un entier: ");
    scanf("%d", &nombre);

    if (est_premier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
