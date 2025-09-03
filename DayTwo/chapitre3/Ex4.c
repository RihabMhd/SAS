/*
En utilisant l'instruction switch, écrivez un programme qui convertit une note
numérique en une note littérale :
Entrez une note numérique : 84
Note littérale : B
Utilisez le barème suivant : A = 90–100, B = 80–89, C = 70–79, D = 60–69,
F = 0–59. Affichez un message d'erreur si la note est supérieure à 100 ou
inférieure à 0.
Indice : Décomposez la note en deux chiffres, puis utilisez une instruction switch
pour tester le chiffre des dizaines.
*/
#include <stdio.h>
int main(void){
    int note;
    printf("Entrer une note numérique :");
    scanf("%d",&note);
    note=note/10;

    switch (note)
    {
    case 9:
    case 10:
        printf("Note littérale :A");
        break;
    case 8:
        printf("Note littérale :B");
    case 7:
        printf("Note littérale :C");
        break;
    case 6:
        printf("Note littérale :D");
    case 5:
        printf("Note littérale :F");
    default:
        break;
    }
}