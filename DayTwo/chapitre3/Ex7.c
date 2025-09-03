/*
Écrivez un programme qui demande à l'utilisateur d'entrer un nombre n, puis
affiche tous les carrés pairs compris entre 1 et n. Par exemple, si l'utilisateur
entre 100, le programme devrait afficher :
4
16
36
64
100
*/
#include <stdio.h>

int main(void){
    int n;
    printf("entrez un nombre :");
    scanf("%d",&n);
    for(int i=1; i<=n ;i++){

        if((i*i)%2==0){
            printf("%d\n",i*i);
        }
    }
}