#include <stdio.h>
#include <stdlib.h>

int main()
{

   char nom[20],prenom[20],sexe[20],T[20];
   int age;


    printf("entrer le nom :\n");
    scanf("%s",&nom);
    printf("entrer le prenom:\n");
    scanf("%s",&prenom);
    printf("entrer l'age:\n");
    scanf("%d",&age);
    printf("entrer le sexe:\n");
    scanf("%s",&sexe);
    printf("entrer Le numero de telephone :\n");
    scanf("%s",&T);


    printf("le nom c'est:%s\n",nom);
    printf("le prenom c'est:%s\n",prenom);
    printf("l'age c'est :%d\n",age);
    printf("le sexe c'est:%s\n",sexe);
    printf("Le numero de telephone c'est :%s\n",T);
    return 0;
}
