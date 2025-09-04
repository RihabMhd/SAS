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

    int mid1 = (8*60 + 9*60+43) / 2;    
    int mid2 = (9*60+43 + 11*60+19) / 2;  
    int mid3 = (11*60+19 + 12*60+47) / 2;
    int mid4 = (12*60+47 + 14*60) / 2;
    int mid5 = (14*60 + 15*60+45) / 2;
    int mid6 = (15*60+45 + 19*60) / 2;
    int mid7 = (19*60 + 21*60+45) / 2;

    if (input < mid1)
        printf("Départ: 8:00 a.m., Arrivée: 10:16 a.m.\n");
    else if (input < mid2)
        printf("Départ: 9:43 a.m., Arrivée: 11:52 a.m.\n");
    else if (input < mid3)
        printf("Départ: 11:19 a.m., Arrivée: 1:31 p.m.\n");
    else if (input < mid4)
        printf("Départ: 12:47 p.m., Arrivée: 3:00 p.m.\n");
    else if (input < mid5)
        printf("Départ: 2:00 p.m., Arrivée: 4:08 p.m.\n");
    else if (input < mid6)
        printf("Départ: 3:45 p.m., Arrivée: 5:55 p.m.\n");
    else if (input < mid7)
        printf("Départ: 7:00 p.m., Arrivée: 9:20 p.m.\n");
    else
        printf("Départ: 9:45 p.m., Arrivée: 11:58 p.m.\n");

    return 0;
}
