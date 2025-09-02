/*
Écrivez un programme qui calcule le solde restant d'un prêt après le premier, le
deuxième et le troisième paiement mensuel :
Entrez le montant du prêt : 20000.00
Entrez le taux d'intérêt : 6.0
Entrez le paiement mensuel : 386.66
Solde restant après le premier paiement : $19713.34
Solde restant après le deuxième paiement : $19425.25
Solde restant après le troisième paiement : $19135.71
Affichez chaque solde avec deux chiffres après la virgule.
Indice : Chaque mois, le solde est diminué du montant du paiement, mais augmenté
du solde multiplié par le taux d'intérêt mensuel. Pour trouver le taux d'intérêt
mensuel, convertissez le taux d'intérêt entré par l'utilisateur en un pourcentage et
divisez-le par 12.
*/
#include <stdio.h>
#include <stdio.h>

int main(void) {
    double montantPret, tauxInteretAnnuel, paiementMensuel;
    printf("Entrez le montant du prêt : ");
    scanf("%f", &montantPret);
    printf("Entrez le taux d'intérêt : ");
    scanf("%f", &tauxInteretAnnuel);
    printf("Entrez le paiement mensuel : ");
    scanf("%f", &paiementMensuel);

    double tauxInteretMensuel = tauxInteretAnnuel / 100 / 12;
    double solde = montantPret;

    solde = solde - paiementMensuel + (solde * tauxInteretMensuel);
    printf("Solde restant après le premier paiement : $%f\n", solde);

    solde = solde - paiementMensuel + (solde * tauxInteretMensuel);
    printf("Solde restant après le deuxième paiement : $%f\n", solde);

    solde = solde - paiementMensuel + (solde * tauxInteretMensuel);
    printf("Solde restant après le troisième paiement : $%f\n", solde);

    return 0;
}
