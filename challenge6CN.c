#include <stdio.h>


int main()
{ int N;
    printf("Entrez un nombre : ");
    scanf("%d",&N);

   if(N>0)
        printf("Le nombre est positif.");
   else if(N<0)
    printf("Le nombre est negatif.");
else
    printf("Le nombre est nul.");
    return 0;
}
