/*
Une des plus anciennes techniques de chiffrement est le chiffrement de César,
attribué à Jules César. Il consiste à remplacer chaque lettre d'un message par une
autre lettre qui est un nombre fixe de positions plus loin dans l'alphabet. (Si le
remplacement devait dépasser la lettre Z, le chiffrement "revient" au début de
l'alphabet. Par exemple, si chaque lettre est remplacée par la lettre deux positions
après elle, alors Y serait remplacé par A, et Z serait remplacé par B.)
Écrivez un programme qui chiffre un message en utilisant un chiffrement de César.
L'utilisateur entrera le message à chiffrer et le décalage (le nombre de positions de
décalage des lettres) :

7
Entrez le message à chiffrer : Go ahead, make my day.
Entrez le décalage (1-25) : 3
Message chiffré : Jr dkhdg, pdnh pb gdb.
Notez que le programme peut déchiffrer un message si l'utilisateur entre 26 moins la
clé originale.
Vous pouvez supposer que le message n'excède pas 80 caractères. Les caractères
autres que les lettres doivent rester inchangés. Les lettres minuscules restent en
minuscules une fois chiffrées, et les majuscules restent en majuscules.
Indice : Pour gérer le problème du "retour" (wrap-around), utilisez l'expression ((ch
- 'A') + n) % 26 + 'A' pour calculer la version chiffrée d'une lettre majuscule,
où ch stocke la lettre et n stocke le décalage. (Vous aurez besoin d'une expression
similaire pour les lettres minuscules.)
*/