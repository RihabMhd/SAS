/*
Écrivez un programme qui traduit un numéro de téléphone alphabétique en sa
forme numérique :
Entrez un numéro de téléphone : CALLATT
2255288
(Si vous n'avez pas de téléphone à portée de main, voici la correspondance des lettres
sur les touches : 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV,
9=WXY). Si le numéro de téléphone original contient des caractères non
alphabétiques (chiffres ou ponctuation, par exemple), laissez-les inchangés :
Entrez un numéro de téléphone : 1-800-COL-LECT
1-800-265-5328
Vous pouvez supposer que toutes les lettres saisies par l'utilisateur sont en
majuscules.
*/
#include <stdio.h>
#include <string.h>
 int main(void){
    char nmbrAlpha[9];

    printf("entrez un numero de telephone :");
    scanf("%s",nmbrAlpha);

    for(int i=0;i<=strlen(nmbrAlpha);i++){
        char n=nmbrAlpha[i];

        if(n >='A' && n<='C'){
            printf("2");
        }else if(n>='D' && n<='F'){
            printf("3");
        }else if(n>='G' && n<='I'){
            printf("4");
        }else if(n>='J' && n<='L'){
            printf("5");
        }else if(n>='M' && n<='O'){
            printf("6");
        }else if(n>='P' && n<='S'){
            printf("7");
        }else if(n>='T' && n<='V'){
            printf("8");
        }else if(n>='W' && n<='Y'){
            printf("9");
        }else{
            printf("%c",n);
        }
    }
    printf("\n");
    
    


 }