#include <stdio.h>
#include <math.h>

int main() {
    double pi = M_PI;
    float r,C;
    printf("entrer le rayon du cercle :\n");
    scanf("%f",&r);
    C = 2*r*pi ;
    printf("donc la circonférence du cercle c'est : %lf",C);


    return 0;
}