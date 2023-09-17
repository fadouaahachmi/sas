// Online C compiler to run C program online
#include <stdio.h>

int main() {
   char caractere;
   printf("Entrez un caractere :");
   scanf("%c",&caractere);
   switch(caractere){
       case'a':
       case'o':
       case'u':
       case'i':
       case'e':
       case'y':
       case'A':
       case'O':
       case'U':
       case'I':
       case'E':
       case'Y':
       printf("%c est une voyelle.\n",caractere);
       break;
       
   }

    return 0;
}