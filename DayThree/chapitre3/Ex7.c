/*
Écrivez un programme qui lit un tableau d'entiers de 5 × 5 et qui imprime ensuite les
sommes de chaque ligne et les sommes de chaque colonne :
Entrez la ligne 1 : 8 3 9 0 10
Entrez la ligne 2 : 3 5 17 1 1
Entrez la ligne 3 : 2 8 6 23 1
Entrez la ligne 4 : 15 7 3 2 9
Entrez la ligne 5 : 6 14 2 6 0
Totaux des lignes : 30 27 40 36 28
Totaux des colonnes : 34 37 37 32 21
*/
#include <stdio.h>

int main(void){
    int tab[5][5];
    
    for(int i=0;i<5;i++){
        printf("Entrez la ligne %d : ",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",&tab[i][j]);
        }
    }

    int sommeLignes[5]={0};
    int sommeColonnes[5]={0};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sommeLignes[i]+=tab[i][j];
            sommeColonnes[j]+=tab[i][j];
        }
    }

    printf("Totaux des lignes : ");
    for(int i=0;i<5;i++){
        printf("%d \t",sommeLignes[i]);
    }
    printf("\n");

    printf("Totaux des colonnes : ");
    for(int i=0;i<5;i++){
        printf("%d ",sommeColonnes[i]);
    }
    printf("\n");

}

