/*
Modifiez le programme repdigit.c pour que l'utilisateur puisse entrer plus d'un
nombre à tester pour la répétition de chiffres. Le programme doit se terminer lorsque
l'utilisateur entre un nombre inférieur ou égal à 0.
*/
#include <stdbool.h>
#include <stdio.h>
int main(void){
    bool digit_seen[10]={false};
    int digit;
    long n;
    while(true){
        printf("Entrer un nombre :");
        scanf("%ld",&n);
        if (n <= 0)
            break;
        for(int i=0;i<10;i++){
            digit_seen[i]=false;
        }
        long t=n;
        while(t>0){
            digit =t%10;
            if(digit_seen[digit])
                break;
            digit_seen[digit]=true;
            t/=10;
        }
        if(t>0)
        printf("Des chiffres sont repetes.\n");
        else 
            printf("Aucun chiffre repete.\n");
    }
            return 0;

}