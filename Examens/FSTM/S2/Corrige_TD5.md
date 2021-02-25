#### Exo1Question1
```c

/*
Algotorithme MultiplesDe5_MultiplesDe2
	Variables  tableau tab[20]: Entier
			   i, m2, m5: Entier
Debut
	
	Pour i <-- 0 a 19 Faire
		Ecrire("Saisir tab[", i, " ] = ")
		lire(tab[i])
	FinPour
	
	m2 <-- 0
	m5 <-- 0
	
	Pour i <-- 0 a 19 Faire
		Si (tab[i] Mod 2 = 0) Alors
			m2 <-- m2 + 1
		FinSi
		
		Si (tab[i] Mod 5 = 0) Alors
			m5 <-- m5 + 1
		FinSi
	FinPour
	
	Ecrire("Le nombre des multiples de 2 est : ", m2)
	Ecrire("Le nombre des multiples de 5 est : ", m5)
Fin
*/
#include<stdio.h>
main(){
	int tab[20];
	int i, m2, m5;
	
	// remplissage
	for( i = 0; i<=19; i++) {
		printf("Saisir tab[%d  ] = ", i);
		scanf("%d", &tab[i]);
	}
	// Calcul
	m2 = 0;
	m5 = 0;
	for( i = 0; i<=19; i++) {
		if (tab[i] % 2 == 0){
			m2 = m2 + 1;
		}
			
		if (tab[i] % 5 == 0) 
			m5 = m5 + 1;
	}
	// Affichage
	printf("Le nombre des multiples de 2 est : %d", m2);
	printf("Le nombre des multiples de 5 est : %d", m5);
}
	
```
#### Exo1Question2
```c

/*
Algotorithme Affichage
	Variables  tableau tab[10]: Entier
			   i: Entier
Debut
	Pour i <-- 0 a 9 Faire
		Ecrire("Saisir tab[", i, " ] = ")
		lire(tab[i])
	FinPour
	
	{ Affichage inverse }	
	Pour i <-- 9 a 0 pas=-1 Faire
		Ecrire(tab[i], " ")
	FinPour
	
	{ Affichage direct }	
	Pour i <-- 0 a 9 Faire
		Ecrire(tab[i], " ")
	FinPour
Fin
*/
#include<stdio.h>
main(){
	int tab[10];
	int i;
	
	// remplissage
	for( i = 0; i<=9; i++) {
		printf("Saisir tab[%d  ] = ", i);
		scanf("%d", &tab[i]);
	}
	
	// Affichage inverse
	printf("\nAffichage inverse\n");
	for( i = 9; i>=0; i--) {
		printf("%d ", tab[i]);
	}
	// Affichage direct
	printf("\nAffichage direct\n");
	for( i = 0; i<=9; i++) {
		printf("%d ", tab[i]);
	}
}
```

#### Exo2
```c

/*
Algotorithme Affichage
	Variables  tableau tab[100], tab1[100], tab2[100]: Entier
			   i, j, n: Entier
Debut
	Ecrire("Saisir n <= 100")
	lire(n)
	
	Ecrire("Saisir les elements de tab1 ")
	Pour i <-- 0 a n-1 Faire
		Ecrire("Saisir tab1[", i, " ] = ")
		lire(tab1[i])
	FinPour
	
	Ecrire("Saisir les elements de tab2 ")
	Pour i <-- 0 a n-1 Faire
		Ecrire("Saisir tab2[", i, " ] = ")
		lire(tab2[i])
	FinPour
	
	j <-- n-1
	Pour i <-- 0 a n-1 pas=1 Faire
		tab[i] <-- tab1[i] * tab2[j]
		j <-- j - 1
	FinPour
	
	{ Affichage direct }	
	Pour i <-- 0 a n-1 Faire
		Ecrire(tab[i], " ")
	FinPour
Fin
*/
#include<stdio.h>
main(){
	int tab[100], tab1[100], tab2[100];
	int i, j, n;
	
	printf("Saisir n <= 100 ");
	scanf("%d", &n);
	
	// remplissage
	printf("Saisir les elements de tab1 :");
	for( i = 0; i<=n-1; i++) {
		printf("Saisir tab1[%d] = ", i);
		scanf("%d", &tab1[i]);
	}
	
	printf("Saisir les elements de tab2 :");
	for( i = 0; i<=n-1; i++) {
		printf("Saisir tab2[%d] = ", i);
		scanf("%d", &tab2[i]);
	}
	
	// traitement
	j = n-1;
	for( i = 0; i<=n-1; i++) {
		tab[i] = tab1[i] * tab2[j];
		j = j-1;
	}

	// Affichage direct
	printf("\nAffichage direct\n");
	for( i = 0; i<=n-1; i++) {
		printf("%d ", tab[i]);
	}
}
	
```
#### Exo3Question1
```c

/*
Algotorithme Affichage
	Variables  tableau tab[20][20]: Entier
			   i, j, n, S: Entier
Debut
	Ecrire("Saisir n <= 20")
	lire(n)
	
	Ecrire("Saisir les elements de tab (matrice) ")
	Pour i <-- 0 a n-1 Faire
		Pour j <-- 0 a n-1 Faire
			Ecrire("Saisir tab[", i, " ][", j, "] = ")
			lire(tab[i][j])
		FinPour
	FinPour
	
	S <-- 0
	Pour i <-- 0 a n-1 Faire
		Pour j <-- 0 a n-1 Faire
			Si (i = j) Faire
				ecrire(tab[i][j], " ")
				S <-- S + tab[i][j]
			FinSi
		FinPour
	FinPour
	
	ecrire("La somme de la diagonale principale est ", S)
Fin
*/
#include<stdio.h>
main(){
	int tab[20][20];
	int i, j, n, S;
	
	printf("Saisir n <= 20 ");
	scanf("%d", &n);
	
	// remplissage
	printf("Saisir les elements de tab (matrice)  :");
	for( i = 0; i<=n-1; i++) {
		for( j = 0; j<=n-1; j++) {
			printf("Saisir tab[%d][%d] = ", i, j);
			scanf("%d", &tab[i][j]);
		}
	}
	
	S = 0;
	for( i = 0; i<=n-1; i++) {
		for( j = 0; j<=n-1; j++) {
			if(i==j){
				printf("%d ", tab[i][j]);
				S = S + tab[i][j];
			}
		}
		printf("\n");
	}
		printf("La somme de la diagonale principale est %d", S);
}
	
```
