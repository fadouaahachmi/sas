#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N;
    printf(" entrez la note d'eleve:");
    scanf("%f",&N);
     if(N<=10)
        printf("recale.");
    else if(N>=10 && N<=12)
        printf("une mention : passable.");
     else if(N>=12 && N<=14)
        printf("une mention : assez bien");
     else if(N>=14 && N<=16)
        printf(" une mention : bien");
     else
        printf("une mention : tres bien");

    return 0;
}