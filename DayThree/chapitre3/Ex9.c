/*
Une des plus anciennes techniques de chiffrement est le chiffrement de César,
attribué à Jules César. Il consiste à remplacer chaque lettre d'un message par une
autre lettre qui est un nombre fixe de positions plus loin dans l'alphabet. (Si le
remplacement devait dépasser la lettre Z, le chiffrement "revient" au début de
l'alphabet. Par exemple, si chaque lettre est remplacée par la lettre deux positions
après elle, alors Y serait remplacé par A, et Z serait remplacé par B.)
Écrivez un programme qui chiffre un message en utilisant un chiffrement de César.
L'utilisateur entrera le message à chiffrer et le décalage (le nombre de positions de
décalage des lettres) :7
Entrez le message à chiffrer : Go ahead, make my day.
Entrez le décalage (1-25) : 3
Message chiffré : Jr dkhdg, pdnh pb gdb.
Notez que le programme peut déchiffrer un message si l'utilisateur entre 26 moins la
clé originale.
Vous pouvez supposer que le message n'excède pas 80 caractères. Les caractères
autres que les lettres doivent rester inchangés. Les lettres minuscules restent en
minuscules une fois chiffrées, et les majuscules restent en majuscules.
Indice : Pour gérer le problème du "retour" (wrap-around), utilisez l'expression ((ch
- 'A') + n) % 26 + 'A' pour calculer la version chiffrée d'une lettre majuscule,
où ch stocke la lettre et n stocke le décalage. (Vous aurez besoin d'une expression
similaire pour les lettres minuscules.)
Prends une majuscule, calcule sa position dans l’alphabet (0–25), ajoute le décalage, 
boucle si nécessaire, puis retransforme en lettre majuscule
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int decalage;
    char message[100],messageChiffrer[100];

    printf("Entrez le message a chiffrer :");
    fgets(message, sizeof(message), stdin);

    printf("Entrez le decalage (1-25) :");
    scanf("%d",&decalage);
    if(decalage<25 && decalage>1){
        for(int i=0; i<sizeof(message)/sizeof(message[0]);i++){
        if(message[i]>='A' && message[i]<='Z') messageChiffrer[i]=((message[i]-'A') + decalage)%26+'A';
        else if(message[i]>='a' && message[i]<='z') messageChiffrer[i]=((message[i]-'a') + decalage)%26+'a';
        else messageChiffrer[i]=message[i];
        printf("%c",messageChiffrer[i]);
    }
    }else{
        printf("invalide");
    }

    

}