```c
/* Exo1
Algorithme affichageDixFois
	Variable i, n: Entier
Debut
	Ecrire("Saisir n:")
	Lire(n)
	
	POUR i <-- 1 à n FAIRE
		ECRIRE(i)
	FINPOUR
	
	i <-- 1
	TANTQUE (i<=n)  FAIRE
		ECRIRE(i)
		i <-- i+1
	FINTANQUE
	
	i <-- 1
	REPETER
		ECRIRE(i)
		i <-- i+1
	JUSQU'A (NON(i<=n))
	

Fin
*/

#include<stdio.h>
main(){
	int i, n;
	printf("Saisir n: ");
	scanf("%d", &n);
	
	printf("Avec For\n");
	for(i = 1;i<=n;i = i+1)
		printf("%i ", i);
	
	printf("\nAvec while\n");
	i = 1;
	while(i<=n){
		printf("%i ", i);
		i = i+1;
	}
	
	printf("\nAvec Do ... While\n");
	i = 1;
	do{
		printf("%i ", i);
		i = i+1;
	}while(i<=n);
}


```

```c
/* EXO2Q1
Algorithme affichageDixFois_Avec_POUR
	Variable i, S, n: Entier
Debut
	Ecrire("Saisir n:")
	Lire(n)
	S <-- 0
	POUR i <-- 1 à n FAIRE
		S <-- S + i
	FINPOUR
	Ecrire("La somme est: ", S)
Fin
*/


#include<stdio.h>
main(){
	// Declaration des variables
	int i, n, S;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	S = 0;
	for(i = 1;i<=n; i++)
		S += i;
	// Affichage (Sortie)
	printf("La somme est: %d", S);
}


```


```c
/* EXO2Q2
Algorithme Factoriel
	Variable i, F, n: Entier
Debut
	Ecrire("Saisir n:")
	Lire(n)
	
	F <-- 1
	POUR i <-- 1 à n FAIRE
		F <-- F * i
	FINPOUR
	Ecrire("La factoriel est: ", F)
Fin
*/

#include<stdio.h>
main(){
	// Declaration des variables
	int i, n, F;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	F = 1;
	for(i = 1; i<=n ; i++)
		F *= i;
		
	// Affichage (Sortie)
	printf("La factoriel est: %d", F);
}

```


```c
/* Exo3
Algorithme dix_nombre_suivant
	Variable i, n: Entier
Debut
	Ecrire("Saisir n:")
	Lire(n)
	
	POUR i <-- 1 à 10 FAIRE
		Ecrire(n+i)
	FINPOUR
Fin
*/
#include<stdio.h>
main(){
	// Declaration des variables
	int i, n;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	for(i = 1; i<=10 ; i++)
		printf("%d ", n+i);		
}

/* AUTRE METHODE
ALGORITHME  dix_nombre_suivants
     VARIABLES depart, fin, i: Entier
DEBUT
	Ecrire("Veuillez saisir le nombre de depart: ");
	Lire(depart);

	fin <-- depart + 10
	depart <-- depart + 1

	Pour i <-- depart a fin pas=1 Faire
		Ecrire(i, " ")
	FinPour	
FIN
*/

#include<stdio.h>
main(){
	int depart, fin, i;

	printf("Veuillez saisir le nombre de depart: ");
	scanf("%d", &depart);

	fin = depart + 10;
	depart++; // depart = depart + 1;
 
	for(i = depart; i <= fin ; i++) 
		printf("%d ", i);
}

```

```c
// Exo4 Avec wile
#include<stdio.h>
main(){
    int N;
     
    printf("donner une valeur ");
    scanf("%d",&N);
        
    while(N<10||N>20){
        if(N<10)
          printf("Plus grand !");
        else if(N>20)
         printf("Plus petit !");
         printf("\ndonner une valeur ");
        scanf("%d",&N);
    }
    
    printf("fin Programme");
}

// Avec 
#include<stdio.h>
main(){
    int N;
    
    do{
    	
        printf("donner une valeur ");
        scanf("%d",&N);
        
        if(N < 10)
        	printf("Plus grand !\n");
        else if(N > 20)
        	printf("Plus petit !\n");
        	
    }while(N<10 || N>20);
    
    printf("fin Programme.");
}



```

```c
// Exo5 avec do while
#include<stdio.h>
#include<limits.h> // contient les valeurs limits de chaque type INT_MIN
main(){
	int nombre, max, i; 
	
	max = INT_MIN// max = -999999;
	i = 1;
	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
		}
		
		i++;
	}while(i<=20);
	
	printf("Le plus grand de ces nombres est : %d", max);
}

// avec for
#include<stdio.h>
main(){
	int nombre, max, i; 

	printf("Entrer le nombre numero %d: ", 1);
	scanf("%d", &nombre);
	
	max = nombre;
	
	for(i = 2; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
		}		
	}
	
	printf("Le plus grand de ces nombres est : %d", max);
}


// Afficher le numero de maximum
#include<stdio.h>
main(){
	int nombre, max, numero; 

	printf("Entrer le nombre numero %d: ", 1);
	scanf("%d", &nombre);
	
	max = nombre;
	numero = 1;
	
	int i; 
	for(i = 2; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
			numero = i;
		}
	}
	printf("Le plus grand de ces nombres est : %d.\n", max);
	printf("C'etait le nombre numero : %d.", numero);
}

```

```c
// Exo 6
/*Algorithme multiplesDe7
	Variable i : Entier
Debut
    POUR i de 1 a 20 pas=1 Faire
   		Si(i MOD 3 <> 0) Alors
			Ecrire(i, " x 7 = ", i * 7)
		FinSi
	FinPour
FIN
*/


#include<stdio.h>
main(){
	int i;  
	for(i = 1; i <= 20 ; i = i+1){
		if(i % 3 != 0)
			printf("%2d x %d = %3d\n", i, 7, i * 7);
		
	}
}

```

```c
/* Exo7
ALGORITHME  nomrbe_premier
     VARIABLES  n, i, nbrDiviseur: Entier
DEBUT
	Ecrire("Veuillez saisir n:")
	Lire(n)
	
	nbrDiviseur <-- 0
	Pour i de 1 a n Faire
		Si (n MOD i = 0) Alors
		    nbrDiviseur <-- nbrDiviseur + 1
		FinSi
	FinPour
	
	Si (nbrDiviseur = 2) Alors
		Ecrire(n, "est un nombre premier.")
	Sinon
		Ecrire(n, "n'est un nombre premier.")
	FinSi
FIN
*/


#include<stdio.h>

int main(){
	int n, nbrDiviseur = 0;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	// Calculer le nombre de diviseurs de n
	int i; 
	for(i = 1; i <= n; i++)
		if(n % i == 0) // test de divisibilite
			nbrDiviseur++; //  nbrDiviseur = nbrDiviseur + 1;
		

	if(nbrDiviseur == 2)
		printf("%d est un nombre premier.\n", n);
	else
		printf("%d n'est pas un nombre premier.\n", n);

}

```

```c
// Exo8
#include<stdio.h>

int main(){
	int n, i;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	
	if(n % 2 == 0){ 
		for(i = n-2; i > 0; i -= 2)
			printf("%d ", i);
	}
	printf("Fin de programme.");
	
	/* Autre methode
	if(n % 2 == 0){
		for(i = n-1; i >= 1; i -= 1)
			if(i % 2 == 0) 
				printf("%d ", i);
	} 
	
	Autre methode
	if(n % 2 == 0){ 
		for(i = 2; i<=n-2; i += 2)
			printf("%d ", i);
	}
	
	Autre methode
	if(n % 2 == 0){
		for(i = 1; i <= n-1; i += 1)
			if(i % 2 == 0) 
				printf("%d ", i);
	} 
	*/
}


```

```c
/* Exo9Q1
Algorithme CarreDesPaires
	variables a, i: Entier
Debut
	Pour i de 1 a 20 Faire
		Lire (a)
		Si (a Mod 2 = 0) Alors
			Ecrire(a*a)
		FinSi
	FinPour
	
	{Avec boucle repeter jusqu'a}
	i <-- 1
	Repeter
		Lire (a)
		Si (a Mod 2 = 0) Alors
			Ecrire(a*a)
		FinSi
		i <-- i + 1
	Jusqu'a (  i > 20 )
	
fin
*/

#include<stdio.h>
main(){
	int a, i; 

	for(i = 1; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &a);
		if(a % 2 == 0)
			printf("Le carre  de %d est %d.\n", a, a*a);
	}
	//AUTRE METHODE Avec boucle do while
	i = 1;
	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &a);
		if(a % 2 == 0)
			printf("Le carre  de %d est %d.\n", a, a*a);
	
		i++;
	}while(i <= 20);
}



```

```c
// Exo9Q2 
#include<stdio.h>
main(){
	int a, cpt=0, cpt_pair=0, i=1; 

	do{
		printf("Entrer le nombre numero %d: ", i); i++;
		scanf("%d", &a);
		cpt = cpt+1;
		if(a % 2 == 0){
			printf("Le carre  de %d est %d.\n", a, a*a);
			cpt_pair = cpt_pair+1;
		}
	}while(a != 100); // NON(a=100) de l'algorithmr repeter jusqua
	
	printf("Le nombre totale d'entrees est : %d.\n", cpt);
	printf("Le nombre totale d'entrees pair est : %d.\n", cpt_pair);
}


```

```c
// Exo10a
#include<stdio.h>
main(){
	int n; 
	printf("Entrer le nombre n: ");
	scanf("%d", &n);
	
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = n-i+1; j >= 1; j--)
			printf("%d", j);
		
		printf("\n");
	}
}


// Exo10b
#include<stdio.h>
main(){
	int n, nbr_espace, nbr_chiffre;
	 
	printf("Entrer le nombre n: ");
	scanf("%d", &n);
	
	int i, j;
	// pour chaque ligne i de 0 a n faire
	for(i = 0; i <= n; i++){
		// Afficher les espaces 
		nbr_espace = i;
		for(j = 1; j <= nbr_espace; j++)
			printf(" ");
		// Afficher les chiffres 
		nbr_chiffre = n+1 - i;
		for(j = 1; j <= nbr_chiffre; j++)
			printf("%d", i);
		// retour a la ligne 
		printf("\n");
	}
}



```

```c
#include<stdio.h>
main(){
	int nombre, total, somme, min, min_pos, somme_pos, i; 
	
	total = somme = somme_pos = i = 0;
	min = min_pos = 999999; // un  nombre trop grand
	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		
		if(nombre != 999){
			total++;
			somme += nombre;
			min = (min<nombre) ? min : nombre;
			if(nombre > 0){
				somme_pos += nombre;
				min_pos = (min_pos<nombre) ? min_pos : nombre;
			}
		}
		i++;
	}while(nombre != 999);
	
	printf("Le nombre totale d'entrees est : %d.\n", total);
	printf("La somme des  valeurs lues : %d.\n", somme);
	printf("La minimum des  valeurs lues : %d.\n", min);
	printf("La somme des valeurs strict. positive : %d.\n", somme_pos);
	printf("La minimum des  valeurs strict. positive : %d.\n", min_pos);
}


```

```c

#include <stdio.h>
main(){
    int T, j, i;
    printf("Saisir la taille: \n");
    scanf("%d",&T); 
    for(i = 1; i <= T ; i++){
    	for(j = 1; j <= T; j++){
    		if(i == 1 || i== T || j == 1 || j== T)
    			printf("*");
    		else if(i == j || j == T-i+1)
    				printf("+");
    		else if(i == T/2 + 1)
    				printf("|");
            else if(j == T/2 + 1)
                    printf("-");
    		else
    			printf(" ");
		}
		printf("\n");
	}

}
```
