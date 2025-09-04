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

int main(void){
    char mot[100];
    char tab[100];
    int i,j;
    
    printf("Entrez une phrase :");
    scanf("%99s",mot);

    j=0;
    for(i=strlen(mot)-1;i>=0;i--){
        if(mot[i]==' '){
            strncpy(tab,&mot[i+1],j);
            tab[j]='\0';
            printf("%s ",tab);
            j=0;
        }
        else{
            tab[j]=mot[i];
            j++;

        }
    }
    printf("%s\n",tab);
    return 0;
}
