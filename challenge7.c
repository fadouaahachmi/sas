#include <stdio.h>

int main() {
    int N, A, B, C;
    printf("entrez un nombre :");
    scanf("%d",&N);
A = N/100;
B = (N - (A*100))/10;
C = N % 10;

printf("donc l'inverse est : %d%d%d",C,B,A);


    return 0;
}