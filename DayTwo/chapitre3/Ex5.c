/*Écrivez un programme qui demande à l'utilisateur d'entrer deux entiers, puis
calcule et affiche leur plus grand commun diviseur (GCD) :

Entrez deux entiers : 12 28
Le plus grand commun diviseur est : 4
Indice : L'algorithme classique pour calculer le GCD, connu sous le nom
d'algorithme d'Euclide, fonctionne comme suit : Soient m et n des variables
contenant les deux nombres. Si n est égal à 0, arrêtez-vous : m contient le GCD.
Sinon, calculez le reste de la division de m par n. Copiez n dans m et copiez le reste
dans n. Répétez ensuite le processus, en commençant par tester si n est égal à 0.*/
#include <stdio.h>
int main(void){
    int int1,int2,reste;
    printf(" Entrez deux entier:");
    scanf("%d%d",&int1,&int2);
    if (int2 > int1) {
        int t = int1;
        int1 = int2;
        int2 = t;
    }
    while (int2 != 0) {
        reste = int1 % int2;
        int1 = int2;
        int2 = reste;
    }
    printf("Le plus grand commun diviseur est %d\n", int1);
}