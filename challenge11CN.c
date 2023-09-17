#include <stdio.h>
#include <time.h>

int main() {

    srand(time(NULL));
   int randomDay = rand() % 7;
   char* jours_semaine[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
   printf("Le jour de la semaine est : %s\n", jours_semaine[randomDay]);

    return 0;
}
