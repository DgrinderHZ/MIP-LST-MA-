# Pour La Video
[Video link](https://www.youtube.com/playlist?list=PLF2W_rB6QiYBZl59v_ueRM8kcUKQMPBGS)

# Exercice en PDF 

| Enonce | [PDF link](https://github.com/DgrinderHZ/MIP/blob/master/Langage%20C/S3/Problem%20Set%201.pdf)  |   |   |   |   |   |   |   |   |   |  |   |   |   
|--------|---|---|---|---|---|---|---|---|---|---|---|---|---|
| Algo   | [Exercice 1](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo1)  |  [Exercice 2](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo2) |  [Exercice 3](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo3) |  [Exercice 4](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo4) | [Exercice 5](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo5) | [Exercice 6](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo6)  |  [Exercice 7](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo7) |  [Exercice 8](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo8) | [Exercice 9](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo9)  |  [Exercice 10](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo10) |  [Exercice 11](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo11) |  [Exercice 12](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo12) |  [Exercice 13](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo13) |
| C      |  [fichiers.c](https://github.com/Zeek-Zone/MIP-LST-MST/tree/master/Langage%20C/S3/Problem%20Set%201%20-%20Solution) |   |   |   |   |   |   |   |   |  |   |   |   |  



#### Exo1
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
#### Exo2
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

#### Exo3
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


#### Exo4
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

#### Exo5
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
#### Exo6
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
#### Exo7
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
#### Exo8
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
#### Exo9
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

#### Exo10	
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

#### Exo11
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

#### Exo12
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

#### Exo13
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
	
	
	
