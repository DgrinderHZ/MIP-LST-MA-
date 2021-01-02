# Pour La Video
[Video link](https://www.youtube.com/playlist?list=PLF2W_rB6QiYBZl59v_ueRM8kcUKQMPBGS)

# Exercice en PDF 
[PDF link](https://github.com/DgrinderHZ/MIP/blob/master/Langage%20C/S3/Problem%20Set%201.pdf)

#### [Exercice 1](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo1)
#### [Exercice 2](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo2)
#### [Exercice 3](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo3)
#### [Exercice 4](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo4)
#### [Exercice 5](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo5)
#### [Exercice 6](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo6)
#### [Exercice 7](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo7)


#### Exo1
```
ALGORITHME  Intervalle
     VARIABLE num, a, b : Entier
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
#### Exo2
```
ALGORITHME  Signe de Produit
     VARIABLE a, b : Entier
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

#### Exo3
```
ALGORITHME  Montant
     VARIABLE heure, salaire: Entier
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
	
	Ecrire("Le montant est: ", montant, ".\n"); 
FIN
```


#### Exo4
```
ALGORITHME  Quelle heure dans une minute?
     VARIABLE h, m: Entier
DEBUT
	Ecrire("Veuillez saisir l\'heure:\n")
	Lire(h)
	Ecrire("Veuillez saisir la minute:\n")
	Lire(m)

	m <-- m + 1
	Si (m >= 60) Alors
		m <-- m - 60
		h <-- h + 1
		Si (h >= 24) Alors
			h <-- h - 24
		FinSi
	FinSi

	Ecrire("Dans une minute, il sera ", h," heure(s) ", m, ".\n")
FIN
```

#### Exo5
```
ALGORITHME  Quelle mention?
     VARIABLE note: Entier
DEBUT
	Ecrire("Veuillez saisir VOTRE NOTE:\n");
	Lire(note);
	
	Si (note < 7)
		Ecrire("Non valide\n")
	Sinon Si(note < 10)
		  Ecrire("Rattrapage\n")
	      Sinon Si(note < 12)
		        Ecrire("Passable\n"
		    Sinon Si(note < 14)
		             Ecrire("Assez bien\n")
	                  Sinon Si(note < 16)
		                   Ecrire("Bien\n")
	                        Sinon Si(note < 18)
					  Ecrire("Tres bien\n")
				      Sinon
				      	  Ecrire("Excellent\n")
			              FinSi
				FinSi
		          FinSi
	            FinSi
	       FinSi
	FinSi	
FIN
```
#### Exo6
```
ALGORITHME  Quelle mention?
     VARIABLE depart, fin, i: Entier
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
#### Exo7
```
ALGORITHME  PGCD
     VARIABLE a, b, pgcd: Entier
DEBUT
	Ecrire("Veuillez saisir le nombre a:\n")
	Lire(a)
	Ecrire("Veuillez saisir le nombre b:\n")
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
#### Exo8
```
ALGORITHME  Somme et Moyenne
     VARIABLE  N, a, somme, i: Entier
	         moyenne = 0:  Reel
DEBUT
	Ecrire("Veuillez saisir N:\n");
	Lire(N);
	
	somme <-- 0;
	Pour i de 1 a N Faire
		Ecrire("Saisir le nombre :", i+1)
		Lire(a)
		somme <-- somme + a;
	FinPour
	moyenne <-- somme/N;
	printf("La somme est ", somme, " et la moyenne est ", moyenne);
FIN
```
#### Exo9
```
ALGORITHME  Nomre Parfait
     VARIABLE  N, somme, i: Entier
DEBUT
	Ecrire("Veuillez saisir N:\n");
	Lire(N)
	somme <-- 1
	Pour i de 2 a N-1 Faire
		Si (N % i = 0) Alors
			somme <-- somme + i
		FinSi
	FinPour
	
	Si (somme = N)
		Ecrire(N, " est un nombre parfait.\n");
	Sinon
		Ecrire(N, " n'est pas un nombre parfait.\n");
	FinSi
FIN
```

#### Exo10	
```
ALGORITHME  Prduit avec sommation
     VARIABLE  a, b, produit, i: Entier
DEBUT
	Ecrire("Veuillez saisir a puis b:\n");
	Lire(a, b)
	
	produit  <--  0;
	Si (a < b) Alors
		Pour i de 1 a a Faire
			produit <-- produit + b
		FinPour
	Sinon
		Pour i de 1 a b Faire
			produit <-- produit + a
		FinPour
	FinSi

	Ecrire(a, "x", b, " = ", produit)
FIN
```

#### Exo11
```
ALGORITHME  Nomre Premier
     VARIABLE  N, i: Entier
     	       premier = vrai: Booleen
DEBUT
	Ecrire("Veuillez saisir N:\n");
	Lire(N)
	
	Pour i de 2 a N-1 Faire
		Si (N % i == 0) Alors
		    premier = 0;
		    arreter la boucle
		FinSi
	FinPour
	
	Si (premier) Alors
		Ecrire(N, "est un nombre premier.\n")
	Sinon
		Ecrire(N, "n\'est un nombre premier.\n")
	FinSi
	
FIN
```

#### Exo12
```
ALGORITHME  Nomre Premier
     VARIABLE  n, i: Entier
     	       note, moyenne, somme: Reel
DEBUT
	Ecrire("Veuillez saisir N:\n");
	Lire(N)
	
	n = 0;
	somme = 0;
	Tant Que(vrai) Faire
		Ecrire("Note ", n+1);
		Lire(note);
		Si (note >= 0) Alors
			somme += note
			n++
		Sinon 
			arreter la boucle
		FinSi
	FinTantQue
	
	moyenne = somme/n;
	printf("La moyenne de ces %d notes est: %f.\n", n, moyenne);
	
FIN
```

#### Exo13
```
ALGORITHME  Nomre Premier
     VARIABLE  N, factoriel: Entier
DEBUT
	Ecrire("Veuillez saisir N:\n");
	Lire(N)
	
	// Avec While
	factoriel = 1;
	int i = 1; 
	while(i <= N){
		factoriel *= i;
		i++;
	}

	printf("%d! = %d\n", N, factoriel);

	// Avec for
	factoriel = 1;
	for(i = 1; i <= N; i++){
		factoriel *= i;
	}
	
	printf("%d! = %d\n", N, factoriel);
	
FIN
```
	
	
	
