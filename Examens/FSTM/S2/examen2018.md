#### Exercice 3
```python


Algorithme 1
	Variabele a: Entier
Debut
	Ecrire("Saisir l'annee")
	Lire(a)
	
	Si ( (a MOD 4 = 0 ET a MOD 100 <> 0) OU (a MOD 400 = 0) ) Alors
		ecrire("Bissextile")
	Sinon
		ecrire("N'est pas Bissextile")
	FinSi
Fin

Algorithme 2
	Variabeles  i, min, max, count: Entier
	          tableau t[50]: Entier
Debut
	Ecrire("Saisir les 50 annees :")
	Pour i de 0 a 49 Faire
		Ecrire("Saisir l'annee numero ", i, " : ")
		Lire(t[i])
	FinPour
	
	max <-- t[0]
	min <-- t[0]
	count <-- 0
	Pour i de 0 a 49 Faire
		Si ( (t[i] MOD 4 = 0 ET t[i] MOD 100 <> 0) OU (t[i] MOD 400 = 0) ) Alors
			count <-- count + 1
			
			Si t[i] < min Alors
				min <-- t[i]
			FinSi
			
			Si t[i] > max Alors
				max <-- t[i]
			FinSi
		FinSi
	FinPour
	
	Ecrire("Le nombre des annees bissextile dans le  tableau est : ", count)
	Ecrire("La plus petite annee bissextile dans le  tableau est : ", min)
	Ecrire("La plus grande annee bissextile dans le  tableau est : ", max)
Fin
```
```c
#include <stdio.h>

main(){
	
	printf("***** Algorithme 1 *****\n");
	// Algorithme 1
	int a;
	
	printf("Saisir l'annee: ");
	scanf("%d", &a);
	
	if ( (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0) ) 
		printf("Bissextile.\n");
	else
		printf("N'est pas Bissextile.\n");


	printf("\n***** Algorithme 2 *****\n");
	// Algorithme 2

	int i, min, max, count;
	int t[50];

	printf("Saisir les 50 annees :\n");
	for(i=0; i<50; i++){
		printf("Saisir l'annee numero %d : ", i);
		scanf("%d", &t[i]);
	}
	
	max = t[0];
	min = t[0];
	count = 0;
	for(i=0; i<50; i++){
		if ( (t[i] % 4 == 0 && t[i] % 100 != 0) || (t[i] % 400 == 0) ){
			count = count + 1;
			
			if(t[i] < min)  min = t[i];
			
			if(t[i] > max) 	max = t[i];	
		}
	}
	
	printf("Le nombre des annees bissextile dans le  tableau est : %d\n", count);
	printf("La plus petite annee bissextile dans le  tableau est : %d\n", min);
	printf("La plus grande annee bissextile dans le  tableau est : %d\n", max);

}
```
