#include<stdio.h>

float addition(float x, float y){
    return x+y;
}
float soustraction(float x,float y){ 
    return x-y;
}
float multiplication(float x,float y){ 
    return x*y;
}
float division(float x,float y){ 
    return x/y;
}

int main(){ 
    int nbr1 ,nbr2, result;
    char choix;

printf("donner le premier nbr:");
scanf("%f",&nbr1);

printf("donner l'operation (+,-,*,/):");
scanf("%s",&choix);

printf("donner le deuxieme nbr:");
scanf("%f",&nbr2);

switch (choix)
{ 
    case'+':
    result = addition(nbr1, nbr2);
printf("%.2f+%.2f=%.2f\n",nbr1,nbr2,result);
break;

    case'-':
     result = soustraction(nbr1, nbr2);
printf("%.2f-%.2f=%.2f\n",nbr1,nbr2,result);
break;

     case'*':
     result = multiplication(nbr1,nbr2);
printf("%.2f*%.2f=%.2f\n",nbr1,nbr2,result);
break;

     case'/': 
     if (nbr2 == 0)
     {printf("Erreur : Division par zero est impossible. Veuillez entrer un autre nombre.\n");}
            else { result=division(nbr1,nbr2);
            printf("%.2f / %.2f = %.2f\n", nbr1, nbr2, result);}
                ;
break;
default:printf("operateur inconnu\n");
}
return 0;
}


