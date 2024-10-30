#include<stdio.h>
int main()
{ 
int A ,B ,C;
printf( "veuillez entrer la valeur de A=");
scanf("%d",&A);
printf( "veuillez entrer la valeur de B=");
scanf("%d",&B);
C=A;
A=B;
B=C;
printf("la nouvele valeur de A est :%d\n",A);
printf("la nouvele valeur de B est :%d\n",B );
return 0;
}

