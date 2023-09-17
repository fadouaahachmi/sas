#include <stdio.h>
#include <stdlib.h>


    int main()
{
     char caractere;
   printf("entrez un caractere:");
   scanf("%c",&caractere);

     if (caractere>= 'A'  && caractere<= 'Z' )
        printf("est un alphabet majuscule. ");
    else if(caractere>= 'a' && caractere<= 'z')
        printf("est un alphabet minuscule");


   else
    printf("n'est pas un caratere.");

    return 0;
}
