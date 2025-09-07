/*
Écrivez un programme qui inverse l’ordre des mots dans une phrase :
Entrez une phrase : you can cage a swallow can't you?
Inversion de la phrase : you can't swallow a cage can
you?
Indice : Utilisez une boucle pour lire les caractères un par un et stockez-les dans un
tableau de char à une dimension.
Faites en sorte que la boucle s'arrête à un point, un point d'interrogation ou un point
d'exclamation (le "caractère de terminaison"), qui est sauvegardé dans une
variable char séparée. Ensuite, utilisez une seconde boucle pour rechercher en
arrière dans le tableau le début du dernier mot. Imprimez le dernier mot, puis
recherchez le mot précédent. Répétez jusqu'au début du tableau. Finalement,
imprimez le caractère de terminaison.
*/
#include <stdio.h>   // pour printf et fgets
#include <string.h>  // pour strlen

int main(void) {
    char phrase[200];  // tableau pour stocker la phrase entrée par l’utilisateur
    char fin = '\0';   // caractère de terminaison (., ? ou !) si présent
    int len;           // longueur de la phrase

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);  
    // fgets lit une ligne depuis l’entrée clavier et la stocke dans "phrase"

    // Enlever le '\n' ajouté par fgets à la fin de la chaîne
    len = strlen(phrase);               // longueur de la phrase
    if (len > 0 && phrase[len-1] == '\n') {
        phrase[len-1] = '\0';           // remplacer '\n' par fin de chaîne
        len--;                          // mettre à jour la longueur
    }

    // Vérifier si le dernier caractère est un point, un point d’interrogation ou un point d’exclamation
    if (len > 0 && (phrase[len-1] == '.' || phrase[len-1] == '?' || phrase[len-1] == '!')) {
        fin = phrase[len-1];            // sauvegarder ce caractère
        phrase[len-1] = '\0';           // l’enlever de la phrase
        len--;                          // mettre à jour la longueur
    }

    printf("Inversion de la phrase : ");

    // Parcourir la phrase de la fin vers le début
    for (int i = len-1; i >= 0; i--) {
        if (phrase[i] == ' ') {         // si on trouve un espace = fin d’un mot
            printf("%s ", &phrase[i+1]); // affiche le mot qui suit l’espace
            phrase[i] = '\0';            // coupe la chaîne ici (remplace l’espace par '\0')
        }
    }

    // Afficher le premier mot (celui qui reste avant le premier espace)
    printf("%s", phrase);

    // Ajouter le signe de fin (si c’était ., ? ou !)
    if (fin != '\0') {
        printf("%c", fin);
    }

    printf("\n"); // aller à la ligne

    return 0; // fin du programme
}
