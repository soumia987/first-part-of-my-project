#include<stdio.h>
#include<string.h>

typedef struct 
{
    int annee;
    int mois;
    int jour;
}Date;


typedef struct {
    char titre[100];
    char description[200];
    Date d;
    char priorite[10]; // high ou low
}Tache;

int size=0;
int nbr_max_tache = 50;

//afficher menu 
void afficherMenu() { 
        printf("\n------------------Menu-----------------\n");
        printf("1. Ajouter une tache\n");
        printf("2. Afficher la liste des taches\n");
        printf("3. Modifier une tache\n");
        printf("4. Supprimer une tache\n");
        printf("5. Filtrer les taches par priorite\n");
        printf("0.Quitter: \n");
}


    

// ajouter une tache 
void ajouterTache(Tache taches[200]) {
    printf("veuillez entrer le titre de votre  tache\n:");
    scanf("%s",taches[size].titre);
    printf("veuillez entrer la description  de votre  tache\n:");
    scanf("%s",&taches[size].description);
     printf("veuillez entrer l'annee  de votre  tache\n:");
    scanf("%d",&taches[size].d.annee);
    printf("veuillez entrer le mois  de votre  tache\n:");
    scanf("%d",&taches[size].d.mois);
    printf("veuillez entrer le jour  de votre  tache\n:");
    scanf("%d",&taches[size].d.jour);
    printf("veuillez entrer la priorité  de votre  tache\n:");
    scanf("%s",taches[size].priorite);
    size = size + 1;
    printf("%d",size);
}

//afficher tableau 
void afficherTache(Tache taches[]) {

    for (int i = 0; i < size; i++)
    {
        printf("tache %d:\n",i+1 );
        printf("titre de votre  tache%s\n:", taches[i].titre);
        printf("description  de votre  tache:%s\n",taches[i].description);
        printf("veuillez entrer l'annee  de votre  tache:%d\n",taches[i].d.annee);
        printf("veuillez entrer le mois  de votre  tache:%d\n",taches[i].d.mois);
        printf("veuillez entrer le jour  de votre  tache:%d\n",taches[i].d.jour);
        printf("veuillez entrer la priorité  de votre  tache:%s\n",taches[i].priorite);
    }
}
// modifier  une tache 
void modifierTache(Tache taches[200])  { 
    int indice;
    afficherTache(taches);
    printf("veuillez entrer l'indice de la tache a modifier\n:");
    scanf("%d", &indice);
    if (indice < 0 || indice > nbr_max_tache) {
        printf("Indice invalide.\n");
        return;
    }

    printf("  modifier le titre de  votre tache:");
    scanf("%s",taches[indice].titre);
    printf(" modifier la description de votre tache\n:");
    scanf("%s",taches[indice].description);
    printf("  modifier l'annee  de votre  tache\n:");
    scanf("%d",&taches[indice].d.annee);
    printf(" modifier le mois  de votre  tache\n:");
    scanf("%d",&taches[indice].d.mois);
    printf(" modifier le jour  de votre  tache\n:");
    scanf("%d",&taches[indice].d.jour); 
   
}
// supprimer tache 
void supprimerTache(Tache taches[]) {
    int indice;
    printf("veuillez entrer l'indice de la tache a suprimer\n:");
    scanf("%d", &indice); 
    if (indice < 0 || indice >= size) {
        printf("Indice invalide.\n");
        return;
    }

    for (int i = indice; i < nbr_max_tache - 1; i++) {
        strcpy(taches[indice].titre, taches[indice + 1].titre);
    }
    
}
// // filtrer tache 
void filtrerTache(Tache taches[200]) {
 char priorite[10];
    printf("Veuillez entrer la priorité à filtrer (high/low): ");
    scanf(priorite, sizeof(priorite) );
    printf("taches avec la priorite '%s':\n",priorite);
    for(int i=0;i<size;i++)
    {
     if(strcmp(taches[i].priorite,priorite)==0) 
    {
    printf("tache%d:%s\n",i,taches[i].titre);
    } 
    }
   
      
}

int main(){
    
    Tache taches[nbr_max_tache];
    int choix;
    do {
        afficherMenu();
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        getchar();
        switch (choix)
        {
        case 1:
            ajouterTache(taches);
            break;
        case 2:
            afficherTache(taches);
            break;
        case 3:
            modifierTache(taches);
            break;
        case 4:
            supprimerTache(taches); 
            break;
        case 5:
            filtrerTache(taches); 
            break;
        case 0:
             printf("au revoir!\n"); 
        default:
             printf("choix invalide,veuillez resayer.\n");    
            break;
        }


    } while(choix != 0);

return 0;
}