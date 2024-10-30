#include <stdio.h>
#include <math.h>

// Fonction qui définit l'équation
double fonction(double x) {
    return x * x * x + 12 * x * x + 1; // x^3 + 12x^2 + 1
}

int main() {
    double a = -15.0; // borne inférieure
    double b = -10.0; // borne supérieure
    double c; // point milieu
    double precision = 0.00001; // précision désirée

    // Vérification initiale pour s'assurer que la solution existe
    if (fonction(a) * fonction(b) >= 0) {
        printf("Aucune solution dans l'intervalle [%f, %f].\n", a, b);
        return 1; // Sortir si la solution n'existe pas
    }

    // Méthode de dichotomie
    while ((b - a) >= precision) {
        c = (a + b) / 2; // point milieu
        if (fonction(c) == 0.0) {
            break; // c est la solution exacte
        }
        if (fonction(c) * fonction(a) < 0) {
            b = c; // La solution est dans la moitié gauche
        } else {
            a = c; // La solution est dans la moitié droite
        }
    }

    printf("La solution est approximativement : %f\n", c);
    return 0;
}
