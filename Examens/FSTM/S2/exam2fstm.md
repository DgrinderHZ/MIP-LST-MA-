#### Exercice 1 
	Dans le  cours ou dans  l'Avant Dernier enregistrement (9ieme seance)
#### Exercice 2

##### 1. 
La valeur de A vaut : 16
La valeur de B vaut : 8.5

##### 2. 
16 = 10000   et 8.5 = 1000.1
##### 3. 
Dernier enregistrement (10ieme seance)


#### Exercice 2
```c
#include <stdio.h>
#include <stdlib.h>

int main(){

	float montant ;
    int dispose ;

	printf("Saisir le momtant total: ");
	scanf("%f", &montant);
	printf("Est ce que vous disposez d'une carte de fidelite ou non: ");
	scanf("%d", &dispose);
	
	if (montant > 3000) 
		montant = montant - 500;
	else if (montant > 2000) 
		montant = montant - 300;
	else if (montant > 1600) 
		montant = montant - 200;
	else if (montant > 1000) 
		montant = montant - (montant*0.1);

	
	if (dispose == 1) 
		montant = montant - (montant*0.1);

	
	printf("Le prix a payer est: %f", montant);

	
}

/*
Algroithme GOTICK
	Variables montant : Reel
			  dispose : Booleen
Debut
	Ecrire("Saisir le momtant total: ")
	Lire(montant)
	Ecrire("Est ce que vous disposez d'une carte de fidelite ou non: ")
	Lire(dispose)
	
	Si (montant > 3000) Alors
		montant <-- montant - 500
	Sinon Si (montant > 2000) Alors
		montant <-- montant - 300
	Sinon Si (montant > 1600) Alors
		montant <-- montant - 200
	Sinon Si (montant > 1000) Alors
		montant <-- montant - (montant*0.1)
	FinSi
	
	Si (dispose = vrai) Alors
		montant <-- montant - (montant*0.1)
	FinSi
	
	Ecrire("Le prix a payer est: ", montant)
Fin
*/


















```
