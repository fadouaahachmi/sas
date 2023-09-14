// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A,B,C,D,SM,PR;
    printf("entrer le nombre A :\n");
    scanf("%d",&A);
    printf("entrer le nombre B :\n");
    scanf("%d",&B);
    printf("entrer le nombre C :\n");
    scanf("%d",&C);
    printf("entrer le nombre D :\n");
    scanf("%d",&D);
    SM = A + B + C + D;
    printf("la somme de quatre nombres c'est : %.2d\n",SM);
    PR = SM / 4;
    printf("la moyenne de quatre nombre c'est : %.2d\n",PR);
    
    
    
    

    return 0;
}