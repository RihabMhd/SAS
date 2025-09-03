/*
Écrivez un programme qui demande à l'utilisateur d'entrer un nombre à deux
chiffres, puis affiche ce nombre avec ses chiffres inversés. Une session avec le
programme devrait ressembler à ceci :
Entrez un nombre à deux chiffres : 28
Le nombre inversé est : 82
Lisez le nombre en utilisant %d, puis décomposez-le en deux chiffres. Indice :
Si n est un entier, alors n % 10 est le dernier chiffre de n et n / 10 est n avec
le dernier chiffre supprimé.
*/
#include <stdio.h>
int main(void){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    int derniernomber=number %  10;
    int firstnomber=number/10;
    printf("le nomber inverse est:%d%d",derniernomber,firstnomber);





}