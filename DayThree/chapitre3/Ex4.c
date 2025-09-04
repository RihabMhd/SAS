/*
Modifiez le programme reverse.c pour utiliser l'expression (int) (sizeof(a)
/ sizeof(a[0])) (ou une macro avec cette valeur) pour la longueur du tableau.
*/

#include <stdio.h>
#define N 10
int main(void){
    int a[N];
    printf("Enter %d nombre :",N);
    for(int i=0; i <sizeof(a)/sizeof(a[0]);i++)
    scanf("%d",&a[i]);

    printf("Dans l'ordre inverse:");
    for(int i=sizeof(a)/sizeof(a[0])-1;i>=0;i--)
        printf(" %d",a[i]);
    printf("\n");
    return 0;

}