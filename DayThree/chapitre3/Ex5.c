/*
Modifiez le programme interest.c pour que les intérêts soient
composés mensuellement au lieu d'annuellement. La forme de la sortie ne doit pas
changer ; le solde doit toujours être affiché à des intervalles annuels.
*/
#include <stdio.h>
#define NUM_RATES 5
#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, num_years, year;
    double value[NUM_RATES];

    printf("Taux d'interet : ");
    scanf("%d", &low_rate);
    printf("Nombre d'annees : ");
    scanf("%d", &num_years);

    for (i = 0; i < NUM_RATES; i++) {
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");
    for (year = 1; year <= num_years; year++) {
        printf("%3d", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (int month = 1; month <= 12; month++) {
                value[i] = value[i] + (low_rate+i)/1200.0 * value[i];
            }
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
}
