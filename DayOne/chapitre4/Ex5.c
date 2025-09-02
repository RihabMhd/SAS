/*Écrivez un programme qui demande à l'utilisateur d'entrer une valeur pour x, puis 
affiche la valeur du polynôme suivant :
3x5+2x4–5x3–x2+7x–6

Indice : C n'a pas d'opérateur d'exponentiation, vous devrez donc multiplier x par
lui-même de manière répétée pour calculer les puissances de x. (Par exemple, x * x
* x est x au cube).*/
#include <stdio.h>
#include <math.h>
int main(void){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    double polynome = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3)
               - pow(x, 2) + 7 * x - 6;
    printf("The resultats :%f",polynome);

}