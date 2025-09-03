/*
Écrivez un programme qui demande à l'utilisateur d'entrer deux dates et indique
ensuite quelle est la date la plus ancienne.
Entrez la première date (mm/jj/aa) : 3/6/08
Entrez la deuxième date (mm/jj/aa) : 5/17/07
5/17/07 est plus tôt que 3/6/08
*/
#include <stdio.h>
int main(void){
    int AnneOne,MoisOne,JourOne,AnneTwo,MoisTwo,JourTwo;
    printf('Entrer la premiere date (mm/jj/aa):');
    scanf("%d/%d/%d",&AnneOne,&MoisOne,&JourOne);

    printf('Entrer la deuxieme date (mm/jj/aa):');
    scanf("%d/%d/%d",&AnneTwo,&MoisTwo,&JourTwo);

    if(AnneOne<AnneTwo || AnneOne==AnneTwo && MoisOne<MoisTwo || AnneOne==AnneTwo && MoisOne==MoisTwo 
        && JourOne<JourTwo){
            printf("%d/%d/%d est plus tôt que %d/%d/%d ",AnneOne,MoisOne,JourOne,AnneTwo,MoisTwo,JourTwo);
        }

}