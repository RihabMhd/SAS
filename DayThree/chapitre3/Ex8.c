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
#include<stdio.h>
#include<string.h>

int main(){
    char PH[100];
    char fin;
    int i, j, len;

    printf("Entrer votre message: ");
    //lecture de la phrase jusqua ., !, ?
    i=0;
    while((PH[i] = getchar()) != '.' && PH[i] != '!' && PH[i] != '?'){
        i++;
    }
    fin = PH[i];
    PH[i] = '\0';

    len = strlen(PH);

    printf("\nInversion de la phrase : ");
    //parcour de la fin vers le debut
    for(i= len-1; i>=0; i--){
        if(PH[i] == ' ' || i==0){
            if(i==0)
                j=0;
            else
                j = i+1;
        //afficher le mot
        while(PH[j] != ' ' && PH[j] != '\0'){
            putchar(PH[j]);
            j++;
        }
        putchar(' ');
    }
    }
    printf("%c", fin);//afficher le caractere final
    return 0;
} 