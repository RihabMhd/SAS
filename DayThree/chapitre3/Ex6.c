/*
Le prototype du débutant sur Internet (newbie) est un personnage nommé B1FF, qui
a une façon unique d'écrire des messages. Voici un communiqué typique de B1FF :
H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Écrivez un "filtre B1FF" qui lit un message entré par l'utilisateur et le traduit en
jargon B1FF :
Entrez votre message : Hey dude, C is rilly cool
En B1FF-speak : H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
Votre programme doit convertir le message en lettres majuscules, substituer des
chiffres à certaines lettres (A→4, B→8, E→3, I→1, O→0, S→5), puis ajouter une
dizaine de points d'exclamation.
Indice : Stockez le message original dans un tableau de caractères, puis parcourez
le tableau en traduisant et en imprimant les caractères un par un.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char tab[100];
    printf("Entrer votre message :");
    scanf("%99s",tab);
    for(int i=0;tab[i]!='\0';i++){
        if(toupper(tab[i])=='A'){
            tab[i]='4';
        }else if(toupper(tab[i])=='B'){
            tab[i]='8';
        }else if(toupper(tab[i])=='E'){
            tab[i]='3';
        }else if(toupper(tab[i])=='I'){
            tab[i]='1';
        }else if(toupper(tab[i])=='O'){
            tab[i]='0';
        }else if(toupper(tab[i])=='S'){
            tab[i]='5';
        }
    }
    printf("En B1FF-speak :");
    for(int i=0;tab[i]!='\0';i++){
        printf("%c",toupper(tab[i]));
    }
    return 0;
}

