/*
Le tableau suivant présente les vols quotidiens d'une ville à une autre :
Heure de départ Heure d'arrivée
8h00 a.m. 10h16 a.m.
9h43 a.m. 11h52 a.m.
11h19 a.m. 1h31 p.m.
12h47 p.m. 3h00 p.m.
2h00 p.m. 4h08 p.m.
3h45 p.m. 5h55 p.m.
7h00 p.m. 9h20 p.m.
9h45 p.m. 11h58 p.m.
Écrivez un programme qui demande à l'utilisateur d'entrer une heure (exprimée
en heures et minutes, en utilisant l'horloge de 24 heures). Le programme doit
ensuite afficher les heures de départ et d'arrivée du vol dont l'heure de départ
est la plus proche de celle entrée par l'utilisateur.
Entrez une heure (24h) : 13:15
L'heure de départ la plus proche est 12:47 p.m., arrivant à 3:00
p.m.
Indice : Convertissez l'heure d'entrée en minutes depuis minuit, et comparez-la aux
heures de départ, également exprimées en minutes depuis minuit. Par exemple,
13:15 correspond à 13 x 60 + 15 = 795 minutes depuis minuit, ce qui est plus
proche de 12:47 p.m. (767 minutes depuis minuit) que de toute autre heure de
départ.
*/
#include <stdio.h>
int main(void) {
    int heure, minute;
    printf("Enter une heure (24h) sous format hh:mm : ");
    scanf("%d:%d", &heure, &minute);
    int input = heure * 60 + minute;

    if (input >= 8*60 && input <= 10*60+60) {
        printf("L'heure de depart la plus proche est: 8:00 am");

    } else if (input >= 9*60+43 && input <= 11*60+52) {
        printf("L'heure de depart la plus proche est: 9:43 am");
    } else if (input >= 11*60+19 && input <= 13*60+31) {
        printf("L'heure de depart la plus proche est: 11:19 am");
    } else if (input >= 12*60+47 && input <= 15*60) {
        printf("L'heure de depart la plus proche est: 12:47 pm");
    } else if (input >= 14*60 && input <= 16*60+8) {
        printf("L'heure de depart la plus proche est: 2:00 pm");

    } else if (input >= 15*60+45 && input <= 17*60+55) {
        printf("L'heure de depart la plus proche est: 3:45 pm");
    } else if (input >= 19*60 && input <= 21*60+20) {
        printf("L'heure de depart la plus proche est: 7:00 pm");
    } else if (input >= 21*60+45 && input <= 23*60+58) {
        printf("L'heure de depart la plus proche est: 9:45 pm");
    } else {

        printf("Aucun depart proche trouve.\n");
    }

    return 0;
}
