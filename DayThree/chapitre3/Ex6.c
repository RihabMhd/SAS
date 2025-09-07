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

int main() {
    char tab[100];

    printf("Entrer votre message : ");
    fgets(tab, sizeof(tab), stdin);

    printf("En B1FF-speak : ");
    for (int i = 0; tab[i] != '\0'; i++) {
        char c = toupper(tab[i]);

        if (c == 'A') c = '4';
        else if (c == 'B') c = '8';
        else if (c == 'E') c = '3';
        else if (c == 'I') c = '1';
        else if (c == 'O') c = '0';
        else if (c == 'S') c = '5';

        printf("%c", c);
    }

    printf("!!!!!!!!!!\n"); 
    return 0;
}

