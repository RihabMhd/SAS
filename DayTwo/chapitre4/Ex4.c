/*
Écrivez un programme qui demande à l'utilisateur d'entrer un montant en dollars et
en cents, puis affiche le montant avec une taxe de 5% ajoutée :
Entrez un montant : 100.00
Avec taxe ajoutée : $105.00*/
#include <stdio.h> 
int main(void){
    float Number;
    float NumberWithTax;
    printf("Entrer un montant :");
    scanf("%f",&Number);
    NumberWithTax=Number*1.05;
    printf("Avec taxe ajoutee :%f",NumberWithTax);
    
}
