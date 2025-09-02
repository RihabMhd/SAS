/*
Écrivez un programme qui demande à l'utilisateur d'entrer un montant en dollars américains, 
puis montre comment payer ce montant en utilisant le plus petit nombre de billets de 20$, 10$, 5$ et 1:
Entrez un montant en dollars : 93
Billets de 20$ : 4
Billets de 10$ : 1 
Billets de 5$ : 0
Billets de 1$ : 3
Indice Divisez le montant par 20 pour déterminer le nombre de billets de 20$ 
nécessaires, puis réduisez le montant de la valeur totale des billets de 20$. 
Répétez l'opération pour les autres montants de billets. Assurez-vous d'utiliser des valeurs 
entières, pas des nombres à virgule flottante.
*/
#include <stdio.h>
int main(void){
    int montant;
    printf("Enterez un montant en dollars :");
    scanf("%d",&montant);

    int Pour20 = montant / 20 ;
    int resteOne = montant - (20*Pour20);

    int Pour10 = resteOne / 10 ;
    int resteTwo = resteOne - (10*Pour10);

    int Pour5 = resteTwo / 5 ;
    int resteThree = resteTwo - (5*Pour5);

    int Pour1 = resteThree;
    
    printf("Billets de 20$ :%d\n",Pour20);
    printf("Billets de 10$ :%d\n",Pour10);
    printf("Billets de 5$ :%d\n",Pour5);
    printf("Billets de 1$ :%d\n",Pour1);

}