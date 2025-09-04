/*
Modifiez le programme repdigit.c pour qu'il affiche quels chiffres (le cas échéant)
ont été répétés.
Exemple d'exécution :
Entrez un nombre : 939577
Chiffre(s) répété(s) : 7 9
*/
#include <stdbool.h>
#include <stdio.h>
int main(void){
    bool digit_seen[10]={false};
    bool has_repeated={false};
    bool digit_repeated[10] = {false}; 
    int digit;
    long n;

    printf("Entrer un nombre :");
    scanf("%ld",&n);

    while(n>0){
        digit =n%10;
        if(digit_seen[digit]){
            digit_repeated[digit]=true;
            has_repeated=true;
    }
        digit_seen[digit]=true;
        n/=10;
    }
    if(has_repeated)
        for (int i = 0; i < 10; i++) {
                if (digit_repeated[i]) {
                    printf("%d ", i);
                }
            }
    else 
        printf("Aucun chiffre repete.\n");
    return 0;
}