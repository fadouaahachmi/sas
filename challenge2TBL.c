#include <stdio.h>

int main() {
    int n[10],i,min,max;

    for(i=0;i<10;i++){
        printf("Entrez N%d :",i+1);
        scanf("%d",&n[i]);
        if(n[i]<min){
            min=n[i];
        }
        if(n[i]>max){
            max=n[i];
        }
    }
    printf("Le min est : %d\n",min);
    printf("le max est : %d\n",max);

    return 0;
}
