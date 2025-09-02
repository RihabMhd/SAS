/*Modifiez le programme du projet 2 pour qu'il demande à l'utilisateur d'entrer le rayon
de la sphère.*/
#include <stdio.h>

int main(void){
    float volume;
    int rayon;
    float pi = 3.14;
    printf("Enter le rayon :");
    scanf("%d", &rayon);    
    volume=(4.0f/3.0f)*pi*rayon*rayon*rayon;
    printf("volume :%f\n",volume);
}