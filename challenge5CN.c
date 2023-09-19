#include <stdio.h>

int main() {
    int NA, mois, semaine, jour, heure;
    printf("Svp entrez le Nombre d'annees :");
    scanf("%d",&NA);
    mois = 30 * NA;
    semaine = 4 * 30 * NA;
    jour = 7 * 4 * 30 * NA;
    heure =24 * 7 * 4 * 30 * NA;
    printf("mois %d\nsemaine %d\njour %d\nheure %d\n",mois,semaine,jour,heure);

    return 0;
}
