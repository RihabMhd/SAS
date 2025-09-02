/*
Modifiez le programme du projet 5 pour que le polynôme soit évalué en utilisant la
formule suivante :
((((3x+2)x–5)x–1)x+7)x–6
*/
#include <stdio.h>
#include <math.h>
int main(void){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    double polynome = ( ( ( ( 3*x+2 ) *x-5 ) *x-1 ) *x+7 ) *x- 6;
    printf("The resultats :%f",polynome);
}