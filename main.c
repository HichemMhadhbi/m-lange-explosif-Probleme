/*
# Département de chimie : mélange explosif

Les chimistes de l'université ont mis au point un nouveau procédé de fabrication d'un onguent qui permet une cicatrisation très rapide des blessures. Ce procédé est cependant très long et nécessite une surveillance de tous les instants de la préparation en train de chauffer, et ce parfois pendant des heures. Confier cette tâche à un étudiant n'est pas possible, ils s'endorment toujours ou ne font pas attention… et cela risque alors d'exploser !

Un dispositif automatique de surveillance de la préparation serait donc intéressant. Celui-ci surveillerait la température toutes les 15 secondes, et si celle-ci devient anormale alors une alarme devrait sonner, afin de prévenir tout le monde.

## Ce que doit faire votre programme :
Votre programme devra lire trois entiers : le nombre total de mesures envisagées ainsi que la température minimum et maximum autorisées. Les entiers suivants seront les différentes températures relevées au cours du temps.

Tant que les températures relevées restent dans le bon intervalle, votre programme devra écrire le texte « Rien à signaler », mais dès que la température n'est pas bonne il doit écrire le texte « Alerte !! » et s'arrêter.

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
Rien à signaler
Rien à signaler
Rien à signaler
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
Rien à signaler
Rien à signaler
Rien à signaler
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
            printf("Rien à signaler\n");
        }
    }
    return 0;
}
