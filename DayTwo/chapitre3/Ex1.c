/*
Les livres sont identifiés par un Numéro International Normalisé du Livre
(ISBN). Les ISBN attribués après le 1er janvier 2007 contiennent 13 chiffres,
organisés en cinq groupes, par exemple, 978-0-393-97950-3.
Le premier groupe (le préfixe GS1) est actuellement soit 978, soit 979.
L'identifiant de groupe spécifie la langue ou le pays d'origine. Le code de l'éditeur
identifie l'éditeur (393 est le code pour W. W. Norton). Le numéro d'article est
attribué par l'éditeur pour identifier un livre spécifique (97950 est le code pour
ce livre). Un ISBN se termine par un chiffre de contrôle qui sert à vérifier
l'exactitude des chiffres précédents. Écrivez un programme qui décompose un
ISBN entré par l’utilisateur :
Entrez l'ISBN : 978-0-393-97950-3
Préfixe GS1 : 978
Identifiant de groupe : 0
Code de l'éditeur : 393
Numéro d'article : 97950
Chiffre de contrôle : 3
Note : Le nombre de chiffres dans chaque groupe peut varier ; vous ne pouvez
pas supposer que les groupes ont les longueurs indiquées dans cet exemple.
Testez votre programme avec de vrais ISBN (généralement trouvés sur la
quatrième de couverture d'un livre et sur la page de droit d'auteur).
*/
#include <stdio.h>
int main(void)
{
    char ISBN[13];
    printf("Entrer l'ISBN(13) :");
    scanf("%17c",&ISBN);
    printf("Prefixe GS1 :%c%c%c",ISBN[0],ISBN[1],ISBN[2]);
    printf("Identifiant de groupe:%c",ISBN[3]);
    printf("Code de l editeur :%c%c%c",ISBN[4],ISBN[5],ISBN[6]);
    printf("Numéro d article :%c%c%c%c%c",ISBN[7],ISBN[8],ISBN[9],ISBN[10],ISBN[11]);
    printf("Chiffre de controle :%c",ISBN[12]);
}