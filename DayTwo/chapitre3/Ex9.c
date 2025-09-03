/*
Dans le jeu de lettres SCRABBLE, les joueurs forment des mots à l'aide de
petites tuiles, chacune contenant une lettre et une valeur faciale. La valeur faciale
varie d'une lettre à l'autre, en fonction de sa rareté. (Voici les valeurs faciales : 
1: AEILNORSTU, 
2 : DG, 
3 : BCMP, 
4 : FHVWY, 
5 : K, 
8 : JX, 
10 : QZ
). 
Écrivez un programme qui calcule la valeur d'un mot en additionnant les valeurs de ses
lettres :
Entrez un mot : pitfall
Valeur Scrabble : 12
Votre programme doit accepter n'importe quel mélange de lettres majuscules et
minuscules dans le mot.
Indice : Utilisez la fonction de bibliothèque toupper.
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void){
    char mot[100];
    printf("entrez un mot :");
    scanf("%s",&mot);
    int somme=0;
    for(int i=0;i<=strlen(mot);i++){
        char n=toupper(mot[i]);
        if(n=='A' || n=='E' || n=='I'||n=='L'||n=='N'||n=='O'||n=='R'||n=='S'||n=='T'||n=='U'){
            somme+=1;
        }else if(n=='D' || n=='G'){
            somme+=2;
        }else if(n=='B' || n=='C' || n=='M'||n=='P'){
            somme+=3;
        }else if(n=='F' || n=='H' || n=='V'||n=='W'|| n=='Y'){
            somme+=4;
        }else if(n=='K'){
            somme+=5;
        }else if(n=='J' || n=='X'){
            somme+=8;
        }else if(n=='Q' || n=='Z'){
            somme+=10;
        }
    }
    printf("Valeur Scrabble :%d",somme);

}