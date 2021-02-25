#### Exercice 1
Tal9awni tanchre7 hada f enregistrements
-  La minutes 1:23:29 f 12eme Examen 2017/2018 Farhaoui et Elbermi  (2021-02-18 at 13:02 GMT-8)

#### Exercice 2
https://youtu.be/BYZJLz2IAfo?list=PLZpzLuUp9qXxKSkKT43ppqzb8c2ahO4VS&t=3076
#### Exercice 3 les tableaux
#### Exercice 4 (Exercice 11 TD 2 Farhaoui avec modification des valeurs)
Tal9awni tanchre7 hada f enregistrements
-   13eme Examen 2017/2018 Farhaoui et Elbermi  (2021-02-21 at 10:12 GMT-8)
```python
Algorithme Montant 
	variables n: Enrier
			  montant: Reel
Debut
	Ecrire("Donner le nombre de photocopies (positif) : ")
	Lire(n)
	
	Si (n <= 10) Alors
		montant <-- n * 1.5
	Sinin Si (n <= 10) Alors
				montant <-- 10 * 1.5 + (n-10)*1
		  Sinon
		  		montant <-- 10 * 1.5 + 20*1 + (n-30) * 0.5
		  FinSi
	FinSi
		
	Ecrire("Le montant a payer est : ", montant)
Fin
```
#### Exercice 5 
Tal9awni tanchre7 hada f enregistrements
-   13eme Examen 2017/2018 Farhaoui et Elbermi  (2021-02-21 at 10:12 GMT-8)
```python
Algorithme QuelSaison
	variables mois: Entier
Debut

	Ecrire("Donner le mois (1, 2,...)")
	Lire(mois)
	
	Selon (mois) Faire
	    cas 1, 2, 12:
		   Ecrire("c’est l’hiver.")
		cas 3, 4, 5:
		   Ecrire("c’est le printemps.")
		cas 6, 7, 8:
		   Ecrire("c’est l’été.")
		cas 9, 10, 11:
		   Ecrire("c’est l’automne.")
		sinon:
			Ecrire("Mois invalide!")
	Fin Selon
Fin
```

```c
#include<stdio.h>

main(){
	int mois;
	printf("Donner le mois (1, 2,...)");
	scanf("%d", &mois);
	
	switch(mois){
		case 1: case 2: case 12:
		   printf("c'est l'hiver.\n");
		   break;
		case 3: case 4: case 5:
		   printf("c'est le printemps.\n");
		   break;
		case 6: case 7: case 8:
		   printf("c'est l'ete.\n");
		   break;
		case 9: case 10: case 11:
		   printf("c'est l'automne.\n");
		   break;
		default:
		   printf("Mois invalide!\n");
	}

}
```
