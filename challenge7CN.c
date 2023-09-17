
int main()
{
     char caractere;
   printf("entrez un alphabet:");
   scanf("%c",&caractere);
    if(caractere>= 'A'  && caractere<= 'Z')
   printf("%c est un alphabet majuscule .",caractere);
   else
    printf("%c n'est pas un alphabet majuscule.",caractere);
    return 0;
}
