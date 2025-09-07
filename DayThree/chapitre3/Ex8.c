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
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char phrase[200];
    char termine = '\0'; 
    int len, i, start, end;

    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    len = strlen(phrase);
    if (phrase[len-1] == '\n') {
        phrase[len-1] = '\0';
        len--;
    }


    if (len > 0 && (phrase[len-1]=='.' || phrase[len-1]=='?' || phrase[len-1]=='!')) {
        termine = phrase[len-1];
        phrase[len-1] = '\0'; 
        len--;
    }

    printf("Inversion de la phrase : ");

  
    end = len;
    for (i = len-1; i >= 0; i--) {
        if (phrase[i] == ' ') {
            start = i + 1;
            for (int j = start; j < end; j++) {
                printf("%c", phrase[j]);
            }
            printf(" ");
            end = i; 
        }
    }
    for (int j = 0; j < end; j++) {
        printf("%c", phrase[j]);
    }

    if (termine != '\0') {
        printf("%c", termine);
    }
    printf("\n");

    return 0;
}
