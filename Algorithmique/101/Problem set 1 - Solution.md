# Watch this

[Video link](https://www.youtube.com/playlist?list=PLF2W_rB6QiYBZl59v_ueRM8kcUKQMPBGS)
# Problem set
[PDF link](https://github.com/DgrinderHZ/MIP/blob/master/Langage%20C/S3/Problem%20Set%201.pdf)

# [Exercice 1](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo1)
# [Exercice 2](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo2)
# [Exercice 3](https://github.com/Zeek-Zone/MIP-LST-MST/blob/master/Algorithmique/101/Problem%20set%201%20-%20Solution.md#exo3)


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
           montant += 0;
	Sinon Si (heure <= 44) Alors
                  montant += (heure-40+1)*0.5*salaire;
	      Sinon Si (heure <= 49) Alors
                        montant += 5*0.5*salaire + (heure-45+1)*0.75*salaire;
	            Sinon Si (heure <= 50) Alors
                             montant += 5*0.5*salaire + 5*0.75*salaire + (heure-50+1)*salaire;
                          FinSi
                    FinSi
              FinSi
     	FinSi
	
	Ecrire("Le montant est: ", montant, ".\n"); 
FIN
```
