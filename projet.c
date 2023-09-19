#include <stdio.h>
#include <stdlib.h>

void afficher_les_donnee();
void ajouter_une_donnee();
void rechercher_sur_une_donnee();
void supprimer_une_donnee();
void supprimer_les_donnees_repetes();
void genere_le_wordlist();
void genere_le_wordlist_dans_un_fichier_txt();
void afficher_les_donnees_de_type_entier();

void menu(){
int choix;
printf("==================================================================================\n");
printf("Menu d’application\n");
printf("==================================================================================\n");
printf("[1] afficher les donn\u00E9es\n[2] ajouter une donnee\n[3] rechercher sur une donnee\n[4] supprimer une donnee\n[5] supprimer les donnees repetes\n");
printf("[6] genere le wordlist\n[7] genere le wordlist dans un fichier .txt\n[8] afficher les donnees de type entier\n");
printf("==================================================================================\n");
printf("Tapez votre choix [1-6] : ");
scanf("%d",&choix);

switch (choix){
   case 1 :
      afficher_les_donnees();
        break;
   case 2:
       ajouter_une_donnees();
       break;
   case 3:
       rechercher_sur_une_donnees();
       break;
   case 4:
       supprimer_une_donnee();
        break;
   case 5:
       supprimer_les_donnees_repetes();
        break;
   case 6:
       genere_le_wordlist();
        break;
   case 7:
       genere_le_wordlist_dans_un_fichier_txt();
        break;
   case 8:
       afficher_les_donnees_de_type_entier();
        break;
    }
}
void afficher_les_donnees()
{

    return 0;
}
void ajouter_une_donnees()
{

    return 0;
}
void rechercher_sur_une_donnees()
{
    return 0;
}
void supprimer_une_donnee()
{
    return 0;
}
void supprimer_les_donnees_repetes()
{
    return 0;
}
void genere_le_wordlist()
{
    return 0;
}

void genere_le_wordlist_dans_un_fichier_txt()
{
    return 0;
}
void afficher_les_donnees_de_type_entier()
{
    return 0;
}

int main()
{
   menu();
    return 0;
}
