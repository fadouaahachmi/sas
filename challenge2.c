#include <stdio.h>

int main() {
    int F,C;
    printf("entrer la temperature en Fahrenheit :");
    scanf("%d",&F);
    C = (F-32)/1.8;
    printf("la temperature degre c'est : %d\n",C);
    if(C<10)
printf("tres froid");
else if(10<C<30)
printf("froid");
else if (30<C<50)
printf("chaud");
else
printf(" tres chaud");

    return 0;
}
