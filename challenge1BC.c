// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N,i,M;
   printf("entrz un nombre : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){
    M =  N * i ;
    printf("%d * %d = %.2d\n",N,i,M);
   }
    
     
    return 0;
}