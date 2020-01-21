#include <stdio.h>
#include <stdlib.h>


/*
  1) les etapes et les produits de la chaine de compilation d'un programme source C:

  2) conversion de nombre 634(8)
       En binaire:
       En decimal:
       En hexadecimal:
  3) Le trois forme de la structure repetitive en C:
     -
     -
     -
  4) Traduction de POUR en Repeter jusqu'a:
        k <--- 1
        REPETER
            Ecrire(k)
            k <--- k+1
        TANT QUE (k > nb)

*/

int main(){
    /**< exo 3 */
    int total = 0, totalPos = 0, min, minPositif;
	int somPositif = 0, somme = 0;
    float moyenne, moyennePos;
    int n;
    do{
        printf("Saisir un nombre: \n");
        scanf("%d", &n);
        if( n != 0){
            total++;
            somme += n;
            if(n < min) min = n;
            if(n > 0){
                totalPos++;
                somPositif += n;
                if(n < minPositif) minPositif = n;
            }
        }
    }while(n != 0);

    printf("Le nombre des valeurs de la suite : %d\n", total);
    printf("La somme des valeurs lues : %d\n", somme);
    printf("Le minimum des valeurs lues : %d\n", min);
    if(total != 0){
    	moyenne = somme/total;
    	printf("La moyenne des valeurs lues : %f\n", moyenne);
	}else{
		printf("La moyenne des valeurs lues : 0\n");
	}
    
    printf("Le nombre des valeurs strictement positives : %d\n", totalPos);
    printf("La somme des valeurs strictement positives : %d\n", somPositif);
    printf("Le minimum des valeurs strictement positives : %d\n", minPositif);
    if(totalPos != 0){    
    	moyennePos = somPositif/totalPos;
    	printf("La moyenne des valeurs strictement positives : %f\n", moyennePos);
	}else{
		printf("La moyenne des strictement positives : 0\n");
	}
    
}
