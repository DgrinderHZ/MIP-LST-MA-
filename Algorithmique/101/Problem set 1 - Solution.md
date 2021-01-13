# Video
[Video link](https://www.youtube.com/playlist?list=PLF2W_rB6QiYBZl59v_ueRM8kcUKQMPBGS),  [PDF link](https://github.com/DgrinderHZ/MIP/blob/master/Langage%20C/S3/Problem%20Set%201.pdf) 

| Algorithmes et Code C  | |   |   |   |   |   |   |   |   |   |  |   |   |   
|--------|---|---|---|---|---|---|---|---|---|---|---|---|---|
| acces direct  | [Exercice 1](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo1)  |  [Exercice 2](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo2) |  [Exercice 3](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo3) |  [Exercice 4](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo4) | [Exercice 5](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo5) | [Exercice 6](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo6)  |  [Exercice 7](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo7) |  [Exercice 8](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo8) | [Exercice 9](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo9)  |  [Exercice 10](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo10) |  [Exercice 11](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo11) |  [Exercice 12](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo12) |  [Exercice 13](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo13) |


#### Exo1
Ecrire un programme qui permet de saisir un nombre puis déterminer s’il appartient à un intervalle
donné, sachant que les extrémités de l’intervalle sont fixées par l’utilisateur.
```python
ALGORITHME  intervalle
     VARIABLES num, a, b : Entier
DEBUT
     Ecrire("Donner votre intervalle: [a,b] tq, a < b ")
     Lire(a, b)
     Ecrire("Donner votre nombre a tester: ")
     Lire(num)
     
     Si ( (num <= b) ET (num >= a) ) Alors
          Ecrire(num, " appartient à [", a, ", ", b, "]")
     Sinon 
          Ecrire(num, " n'appartient pas à [", a, ", ", b, "]")
     FinSi
     
FIN
```

##### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, num;

	printf("Veuillez saisir le nombre a puis b: [a, b]\n");
	scanf("%d%d", &a, &b);
	printf("Veuillez saisir le nombre n:\n");
	scanf("%d", &num);
	
	if(num <= b && num >= a)
		printf("%d appartient a [%d, %d].\n", num, a, b);
	else
		printf("%d n'appartient pas a [%d, %d].\n", num, a, b);
	
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo2
Ecrire un programme qui demande deux nombres à l’utilisateur et l’informe ensuite si leur produit est
négatif ou positif. Attention toutefois :on ne doit pas calculer le produit des deux nombres.
```python
ALGORITHME  signe de produit
     VARIABLES a, b : Entier
DEBUT
     Ecrire("Donner deux nombre: ")
     Lire(a, b)
     
     Si ( (a <= 0) ET (b <= 0) ) Alors
          Ecrire("Le produit est positif")
     Sinon Si ( (a > 0) ET (b > 0) ) Alors
               Ecrire("Le produit est positif")
           Sinon
               Ecrire("Le produit est négatif")
           FinSi
     FinSi
     
FIN
```
##### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b;

	printf("Veuillez saisir le nombre a puis b: ");
	scanf("%d%d", &a, &b);
	
	if((0 <= b && 0 <= a) || (0 >= b && 0 >= a))
		printf("Le produit est positif.\n");
	else
		printf("Le produit est negatif.\n");
	
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo3
Ecrire un programme qui permet de calculer le montant des heures supplémentaires d’un employé,
sachant le prix unitaire d’une heure selon le barème suivant :
Les39 premières heures sans supplément,
- De la 40ième à la 44ième heure sont majorées de 50%,
- De la 45ième à la 49ième heure sont majorées de 75%,
- De la 50ième heure ou plus, sont majorées de 100%.
```python
ALGORITHME  montant
     VARIABLES heure, salaire: Entier
	         montant = 0:  Reel
DEBUT
        Ecrire("Veuillez saisir le nombre des heures de travail: ")
	Lire(heure)

	Ecrire("Veuillez saisir votre salaire: ")
	Lire(salaire)

	Si (heure <= 39) Alors
           montant <-- montant + 0;
	Sinon Si (heure <= 44) Alors
                  montant <-- montant + (heure-40+1)*0.5*salaire;
	      Sinon Si (heure <= 49) Alors
                        montant <-- montant + 5*0.5*salaire + (heure-45+1)*0.75*salaire;
	            Sinon Si (heure <= 50) Alors
                             montant <-- montant + 5*0.5*salaire + 5*0.75*salaire + (heure-50+1)*salaire;
                          FinSi
                    FinSi
              FinSi
     	FinSi
	
	Ecrire("Le montant est: ", montant); 
FIN
```
#### Traduction C

```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int heure, salaire;
	float montant = 0;

	printf("Veuillez saisir le nombre des heures de travail: ");
	scanf("%d", &heure);

	printf("Veuillez saisir votre salaire: ");
	scanf("%d", &salaire);

	if(heure <= 39) montant += 0;
	else if(heure <= 44) montant += (heure-40+1)*0.5*salaire;
	else if(heure <= 49) montant += 5*0.5*salaire + (heure-45+1)*0.75*salaire;
	else if(heure <= 50) montant += 5*0.5*salaire + 5*0.75*salaire + (heure-50+1)*salaire;
	
	printf("Le montant est: %f\n", montant);
	
	getch();
	return 0;
}

```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo4
Ecrivez un programme qui lira au clavier l’heure et les minutes, et il affichera l’heure qu’il sera une
minute plus tard. Par exemple, si l'utilisateur tape 21 puis 32, l'algorithme doit répondre : "Dans une
minute, il sera 21 heure(s) 33". NB : on suppose que l'utilisateur entre une heure valide. Pas besoin donc
de la vérifier.
```python
ALGORITHME  quelle heure dans une minute?
     VARIABLES h, m: Entier
DEBUT
	Ecrire("Veuillez saisir l\'heure:")
	Lire(h)
	Ecrire("Veuillez saisir la minute:")
	Lire(m)

	m <-- m + 1
	Si (m >= 60) Alors
		m <-- m - 60
		h <-- h + 1
		Si (h >= 24) Alors
			h <-- h - 24
		FinSi
	FinSi

	Ecrire("Dans une minute, il sera ", h," heure(s) ", m)
FIN
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int h, m;

	printf("Veuillez saisir l\'heure:\n");
	scanf("%d", &h);
	printf("Veuillez saisir la minute:\n");
	scanf("%d", &m);

	m++;
	if(m >= 60){
		m = m - 60;
		h++;
		if(h >= 24) h = h - 24;
	}

	printf("Dans une minute, il sera %d heure(s) %d.\n", h, m);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo5
Écrire un programme qui à partir d’une note affiche la mention correspondant ?
```python
ALGORITHME  quelle mention?
     VARIABLES note: Entier
DEBUT
	Ecrire("Veuillez saisir VOTRE NOTE:");
	Lire(note);
	
	Si (note < 7)
		Ecrire("Non valide")
	Sinon Si(note < 10)
		  Ecrire("Rattrapage")
	      Sinon Si(note < 12)
		        Ecrire("Passable")
		    Sinon Si(note < 14)
		             Ecrire("Assez bien")
	                  Sinon Si(note < 16)
		                   Ecrire("Bien")
	                        Sinon Si(note < 18)
					  Ecrire("Tres bien")
				      Sinon
				      	  Ecrire("Excellent")
			              FinSi
				FinSi
		          FinSi
	            FinSi
	       FinSi
	FinSi	
FIN
```

#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int note;

	printf("Veuillez saisir VOTRE NOTE:\n");
	scanf("%d", &note);
	
	if(note < 7)
		printf("Non valide\n");
	else if(note < 10)
		printf("Rattrapage\n");
	else if(note < 12)
		printf("Passable\n");
	else if(note < 14)
		printf("Assez bien\n");
	else if(note < 16)
		printf("Bien\n");
	else if(note < 18)
		printf("Tres bien\n");
	else 
		printf("Excellent\n");
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo6
Ecrire un programme qui demande un nombre de départ, et qui ensuite affiche les dix nombres suivants.
Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres de 18 à 27.
```python
ALGORITHME  dix nomvre suivants!
     VARIABLES depart, fin, i: Entier
DEBUT
	Ecrire("Veuillez saisir le nombre de depart: ");
	Lire(depart);

	fin <-- depart + 10
	depart <-- depart + 1

	Pour i de depart a fin Faire
		Ecrire(i, " ")
	FinPour
		
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int depart, fin;

	printf("Veuillez saisir le nombre de depart: ");
	scanf("%d", &depart);

	fin = depart + 10;
	depart++;

	int i; 
	for(i = depart; i <= fin ; i++) 
		printf("%d\t", i);
	
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo7
Le pgcd de deux nombres par soustractions successives.
- pgcd (a, b)= pgcd (a− b, a) si a> b
- pgcd (a, b)= pgcd (a, b − a) si b >a
- pgcd (a, b)= a si a = b
On suppose que les opérandes sont des entiers positifs, écrire un programme qui permet de calculer le
PGCD de deux nombres a et b.
```python
ALGORITHME  pgcd
     VARIABLES a, b, pgcd: Entier
DEBUT
	Ecrire("Veuillez saisir le nombre a:")
	Lire(a)
	Ecrire("Veuillez saisir le nombre b:")
	Lire(b)

	Si (a == 0 && b <> 0) Alors
		pgcd <-- b;
	Sinon Si (b == 0 && a <> 0) Alors
		  pgcd <-- a
	      Sinon
		  Tant Que(a <> b) Faire
			Si(a > b) Alors
			    a <-- a - b
			Sinon Si (b > a) 
			    b <-- b - a
			FinSi
		  FinTantQue
		  pgcd <-- a
	      FinSi
	FinSi
	Ecrire("pgcd(", a, ",", b, ") = ", pgcd)	
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, pgcd;

	printf("Veuillez saisir le nombre a:\n");
	scanf("%d", &a);
	printf("Veuillez saisir le nombre b:\n");
	scanf("%d", &b);
	
	printf("pgcd(%d, %d) = ", a, b);

	if(a == 0 && b != 0) pgcd = b;
	else if(b == 0 && a != 0) pgcd = a;
	else{

		while(a != b){
			if(a > b) a = a - b;
			else if (b > a) b = b - a;
		}
		pgcd = a;
	}

	printf("%d.\n", pgcd);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo8
Écrire un programme qui saisit N entiers et affiche leur somme et leur moyenne ?
```python
ALGORITHME  somme et moyenne
     VARIABLES  n, a, somme, i: Entier
	         moyenne = 0:  Reel
DEBUT
	Ecrire("Veuillez saisir n:");
	Lire(n);
	
	somme <-- 0;
	Pour i de 1 a n Faire
		Ecrire("Saisir le nombre :", i+1)
		Lire(a)
		somme <-- somme + a;
	FinPour
	moyenne <-- somme/n;
	printf("La somme est ", somme, " et la moyenne est ", moyenne);
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, a, somme;
	float moyenne;
	printf("Veuillez saisir N:\n");
	scanf("%d", &N);
	
	somme = 0;
	int i;
	for(i = 0; i < N; i++){
		printf("Saisir le nombre %d:\n", i+1);
		scanf("%d", &a);
		somme += a;
	}
	
	moyenne = (float)somme/N;
	printf("La somme est %d et la moyenne est %f.\n", somme, moyenne);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo9
Ecrire un programme qui détermine si un entier N est parfait ou non. Un entier est dit parfait s'il est égal
à la somme de ses diviseurs. Exemple 6 = 3 + 2 +1
```python
ALGORITHME  nomre parfait
     VARIABLES  n, somme, i: Entier
DEBUT
	Ecrire("Veuillez saisir n:");
	Lire(n)
	somme <-- 1
	Pour i de 2 a n-1 Faire
		Si (n % i = 0) Alors
			somme <-- somme + i
		FinSi
	FinPour
	
	Si (somme = n)
		Ecrire(n, " est un nombre parfait.");
	Sinon
		Ecrire(n, " n'est pas un nombre parfait.");
	FinSi
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, somme;

	printf("Veuillez saisir N:\n");
	scanf("%d", &N);
	
	somme = 1;
	int i;
	for(i = 2; i < N; i++){
		if(N % i == 0)
			somme += i;
	}

	if(somme == N)
		printf("%d est un nombre parfait.\n", N);
	else
		printf("%d n'est pas un nombre parfait.\n", N);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo10
Ecrire un programme qui permet de calculer le produit de deux entiers en utilisant des additions
successives.
```python
ALGORITHME  produit avec sommation
     VARIABLES  a, b, produit, i: Entier
DEBUT
	Ecrire("Veuillez saisir a puis b:");
	Lire(a, b)
	
	produit  <--  0;
	Si (a < b) Alors
		Pour i de 1 à a Faire
			produit <-- produit + b
		FinPour
	Sinon
		Pour i de 1 à b Faire
			produit <-- produit + a
		FinPour
	FinSi

	Ecrire(a, "x", b, " = ", produit)
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, produit;

	printf("Veuillez saisir a puis b:\n");
	scanf("%d%d", &a, &b);
	
	produit = 0;
	int i;
	if(a < b){
		for (i = 0; i < a; ++i)
		{
			produit += b;
		}
	}else{
		for (i = 0; i < b; ++i)
		{
			produit += a;
		}
	}

	printf("%dx%d = %d\n", a, b, produit);
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo11
Ecrire un programme qui permet de saisir un entier N et d'afficher s'il est premier ou non. Un nombre
est dit premier s'il est divisible uniquement par 1 et par lui-même.
```python
ALGORITHME  nomre premier
     VARIABLES  n, i: Entier
     	       premier = vrai: Booleen
DEBUT
	Ecrire("Veuillez saisir n:")
	Lire(n)
	
	Pour i de 2 a n-1 Faire
		Si (n % i = 0) Alors
		    premier <-- 0
		    arreter la boucle
		FinSi
	FinPour
	
	Si (premier) Alors
		Ecrire(n, "est un nombre premier.")
	Sinon
		Ecrire(n, "n\'est un nombre premier.")
	FinSi
	
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, premier = 1;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &N);
	
	int i; 
	for(i = 2; i < N; i++)
		if(N % i == 0){
			premier = 0;
			break;
		}

	if(premier)
		printf("%d est un nombre premier.\n", N);
	else
		printf("%d n\'est un nombre premier.\n", N);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo12
Calculer la moyenne de notes fournies au clavier avec un dialogue de ce type : 
 > note 1 : 12 </br>
  note 2 : 15.25 </br>
  note 3 : 13.5 </br>
  note 4 : 8.75 </br>
  note 5 : -1 </br>
  moyenne de ces 4 notes : 12.37 </br>
 
Le nombre de notes n’est pas connu a priori et l’utilisateur peut en fournir autant qu’il le désire. Pour
signaler qu’il a terminé, on convient qu’il fournira une note fictive négative. Celle-ci ne devra
naturellement pas être prise en compte dans le calcul de la moyenne.
```python
ALGORITHME  la moysns des notes
     VARIABLES  n, i: Entier
     	       note, moyenne, somme: Reel
DEBUT
	Ecrire("Veuillez saisir n:");
	Lire(n)
	
	n <-- 0;
	somme <-- 0;
	Tant Que (vrai) Faire
		Ecrire("Saisir la note numero ", n+1);
		Lire(note);
		Si (note >= 0) Alors
			somme <-- somme + note
			n <-- n + 1
		Sinon 
			arreter la boucle
		FinSi
	FinTantQue
	
	moyenne <-- somme/n;
	ecrire("La moyenne de ces ", n," notes est: ", moyenne);
	
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	float note, moyenne, somme;
	int n;
	
	n = 0;
	somme = 0;
	while(1){
		printf("Note %d: ", n+1);
		scanf("%f", &note);
		if(note >= 0){
			somme += note; 
			n++;
		}else 
			break;
	}
	
	moyenne = somme/n;
	printf("La moyenne de ces %d notes est: %f.\n", n, moyenne);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
#### Exo13
Ecrire un programme permettant de lire un nombre entier N puis calcule son factoriel.
- Utilisez tant que,
- Utilisez pour.
```python
ALGORITHME  factoriel
     VARIABLES  n, factoriel, i: Entier
DEBUT
	Ecrire("Veuillez saisir n:");
	Lire(n)
	
	// Avec While
	factoriel <-- 1;
	i <-- 1; 
	Tant Que (i <= n) faire
		factoriel <-- factoriel * i
		n <-- n + 1
	FinTantQue

	ecrire(n, "! = ", factoriel);
	
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, factoriel;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &N);
	
	// Avec While
	factoriel = 1;
	int i = 1; 
	while(i <= N){
		factoriel *= i;
		i++;
	}

	printf("%d! = %d\n", N, factoriel);
	
	getch();
	return 0;
}
```

```python
ALGORITHME  factoriel
     VARIABLES  n, factoriel, i: Entier
DEBUT
	Ecrire("Veuillez saisir n:");
	Lire(n)
	
	// Avec for
	factoriel <-- 1;
	Pour i de 1 a n Faire
		factoriel <-- factoriel * i
	FinPour
	
	ecrire(n, "! = ", factoriel);
	
FIN
```
#### Traduction C
```c
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, factoriel;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &N);

	// Avec for
	factoriel = 1;
	for(i = 1; i <= N; i++){
		factoriel *= i;
	}
	
	printf("%d! = %d\n", N, factoriel);
	
	getch();
	return 0;
}
```
[Top ^](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#Video)
