/*
Modifiez le programme interest.c pour que les intérêts soient
composés mensuellement au lieu d'annuellement. La forme de la sortie ne doit pas
changer ; le solde doit toujours être affiché à des intervalles annuels.
*/
#include <stdio.h>
// #define NUM_RATES((int)(sizeof(value)/sizeof(value[0])))
#define initial_balance 100.00
int main(){
    int i,low_rate,num_years,year;
    double value[5];

    printf("Taux d'interet :");
    scanf("%d",&low_rate);
    printf("\n");
    printf("nombre d'annes :");
    scanf("%d",&num_years);

    printf("\n");
    for(year=1;year<=num_years;year++){
        printf("%3d",year);
        for(i=0;i<sizeof(value)/sizeof(value[0]);i++){
            value[i]+=(low_rate+i)/100.0*value[i];
            printf("%7.2f",value[i]);
        }
        printf("\n");
    }
}