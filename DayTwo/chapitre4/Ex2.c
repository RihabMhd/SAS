/*Écrivez un programme qui calcule le volume d'une sphère de 10 mètres de rayon,
en utilisant la formule v = 4/3πr3 . Écrivez la fraction 4/3 comme 4.0f/3.0f.
(Essayez de l'écrire comme 4/3. Que se passe-t-il ?)*/
#include <stdio.h>

float main(void){
    float volume;
    int rayon = 10;
    float pi = 3.14;
    volume=(4.0f/3.0f)*pi*rayon*rayon*rayon;
    printf("volume :%f\n",volume);
}