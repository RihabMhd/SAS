/*
Modifiez le programme repdigit.c pour qu'il imprime un tableau montrant combien
de fois chaque chiffre apparaît dans le nombre.
Exemple d'exécution :
Entrez un nombre : 41271092
Chiffre : 0 1 2 3 4 5 6 7 8 9
Occurrences : 1 2 2 0 1 0 0 1 0 1
*/
#include <stdbool.h> /* C99 seulement */
#include <stdio.h>

int main(void) {
    int digit_count[10] = {0}; 
    int digit;
    long n;

    printf("Entrez un nombre : ");
    scanf("%ld", &n);
            
    while (n > 0) {
            digit = n % 10;
            digit_count[digit]++; 
            n /= 10;
        }
    
    
    printf("Chiffre :        ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i);
    }
    printf("\n");
    
    printf("Occurrences :    ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", digit_count[i]);
    }
    printf("\n");
    
    return 0;
}
