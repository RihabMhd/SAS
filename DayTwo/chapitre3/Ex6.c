/*
Écrivez un programme qui demande à l'utilisateur d'entrer une fraction, puis
réduit cette fraction à sa plus simple expression :
Entrez une fraction : 6/12
Sous sa forme la plus simple : 1/2
Indice : Pour réduire une fraction à sa plus simple expression, commencez par
calculer le GCD du numérateur et du dénominateur. Ensuite, divisez le numérateur
et le dénominateur par ce GCD.
*/
#include <stdio.h>
int main(void){
    int numerateur,denominateur,reste;
    printf("Entrer une fraction:");
    scanf("%d/%d",&numerateur,&denominateur);
    if(denominateur>0 && numerateur>0){
        if (numerateur > denominateur) {
        int t = denominateur;
        denominateur = numerateur;
        numerateur = t;
        }
        while (numerateur != 0) {
            reste = denominateur % numerateur;
            denominateur = numerateur;
            numerateur = reste;
        }
        int numerateurFinal=numerateur/denominateur;
        int denominateurFinal=denominateur/denominateur;
        printf("Sous sa forme la plus simple :%d/%d",numerateurFinal,denominateurFinal);

    }
    
}