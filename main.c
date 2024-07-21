/*
# D�partement de chimie : m�lange explosif

Les chimistes de l'universit� ont mis au point un nouveau proc�d� de fabrication d'un onguent qui permet une cicatrisation tr�s rapide des blessures. Ce proc�d� est cependant tr�s long et n�cessite une surveillance de tous les instants de la pr�paration en train de chauffer, et ce parfois pendant des heures. Confier cette t�che � un �tudiant n'est pas possible, ils s'endorment toujours ou ne font pas attention� et cela risque alors d'exploser !

Un dispositif automatique de surveillance de la pr�paration serait donc int�ressant. Celui-ci surveillerait la temp�rature toutes les 15 secondes, et si celle-ci devient anormale alors une alarme devrait sonner, afin de pr�venir tout le monde.

## Ce que doit faire votre programme :
Votre programme devra lire trois entiers : le nombre total de mesures envisag�es ainsi que la temp�rature minimum et maximum autoris�es. Les entiers suivants seront les diff�rentes temp�ratures relev�es au cours du temps.

Tant que les temp�ratures relev�es restent dans le bon intervalle, votre programme devra �crire le texte � Rien � signaler �, mais d�s que la temp�rature n'est pas bonne il doit �crire le texte � Alerte !! � et s'arr�ter.

## EXAMPLEs
### EXAMPLE 1

input:
5
10
20
15
10
20
0
15

output:
Rien � signaler
Rien � signaler
Rien � signaler
Alerte !!

### EXAMPLE 2
input:
3
0
100
15
50
75

output:
Rien � signaler
Rien � signaler
Rien � signaler
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbTotalMesures,tempMin, tempMax, i, temp;
    printf("Veuillez saisir le nombre total de mesures envisagees : \n");
    scanf("%d", &nbTotalMesures);

    printf("Veuillez saisir la temperature minimum autorisee : \n");
    scanf("%d", &tempMin);

    printf("Veuillez saisir la temperature maximum autorisee : \n");
    scanf("%d", &tempMax);

    for (i = 0 ; i < nbTotalMesures ; i++){
        printf("Veuillez saisir la temperature relevee : \n");
        scanf("%d", &temp);

        if (temp < tempMin || temp > tempMax) {
            printf("Alerte !!\n");
            return 0;
        }
        else {
            printf("Rien � signaler\n");
        }
    }
    return 0;
}
