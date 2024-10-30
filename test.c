#include <stdio.h>

int main(){
    int x, i, j;

    printf("how many lines ?\n");
    scanf("%d", &x);

    for(i=1; i<=x; i++){

        for(j=1; j <= 2*x-1; j++){

            if (j >= x-(i-1) && j <= x+(i-1)){
                printf("*");
            }

            else{
                printf(" ");}

            }
         printf("\n");
    }
}

