![image](exams1.png]

12eme séance  Examen 2017/2018 Farhaoui et Elbermi  (2021-02-18 at 13:02 GMT-8)
ici  [enregistrements](https://drive.google.com/drive/u/1/folders/1z0yDKqcQeFtvZ0eIDWyiyDlmmMd84Fl_)
#### Exercice 1
Le resultas est:
231
462
#### Exercice 2
Exercice 5 Question 2 TD1 Farhaoui (La minutes 10 de 2eme séances TD (TD1 de Prof. Farhaoui) (2021-01-21 at 13:04 GMT-8)
#### Exercice 3
Algorithme de Exercice 3 TD1 Farhaoui
#### Exercice 4 (les tableaux)
#### Exercice 5
Exercice 10 TD2 Farhaoui (La minutes 1:41:41 4eme séance TD2 de Prof. Farhaoui  (2021-01-28 at 10:06 GMT-8))
#### Exercice 6
Exercice 8 TD2 Farhaoui (La minutes 55 12eme séance  Examen 2017/2018 Farhaoui et Elbermi  (2021-02-18 at 13:02 GMT-8))
```python
Algorithme EquationSecondeDegree
	Variables a, b, c, x1, x2: Reel
				d: Reel
Debut
	Ecrire("Saisir les coefficient: a, b, puis c (ax^2 + bx + c = 0)")
	Lire(a,b,c)
	
	d <-- b*b - 4 * a * c
	Si (d > 0) Alors
		x1 = (-b + racineCarre(d)) / (2*a)
		x2 = (-b - racineCarre(d)) / (2*a)
		Ecrire("L'equation admet deux solutions: ")
		Ecrire("X1 = ", x1, "X2 = ", x2)
	Sinon Si (d = 0) Alors
				x1 = (-b) / (2*a)
				Ecrire("L'equation admet un solution: ")
				Ecrire("X1 = ", x1)
		  Sinon
		  		Ecrire("L'equation admet deux solutions complexes.")
		  FinSi
	FinSi
Fin
```
#### Exercice 7
Exercice 5 TD2 Farhaoui (La minutes 1:33:00 3eme séance TD2 de Prof. Farhaoui (2021-01-24 at 13:14 GMT-8))
#### Exercice 8 (les tableaux)
#### Exercice 9
Exercice 2 Question 2 TD3 Farhaoui debut de la 6eme séances TD (TD3 de Prof. Farhaoui) (2021-02-04 at 11:03 GMT-8)

Pour l'exercice 10 et 11 j'ai expliquer ici
(La minutes 1:12:57 12eme séance  Examen 2017/2018 Farhaoui et Elbermi  (2021-02-18 at 13:02 GMT-8))
#### Exercice 10 
```python
 
Algorithme SommeImpaires
	Variables N, i, somme: Entier
Debut
	somme <-- 0
	Pour  i de 1 a 100 Faire
		Si (i MOD 2 = 1) Alors
			somme <-- somme + 1
		FinSi
	FinPour
	Ecrire("La somme est ", somme)
Fin
```


#### Exercice 11
```python
Algorithme DivisiblesPar7
	Variables N, i: Entier
Debut
	Ecrire("Saisir N")
	Lire(N)
	
	Pour  i de 1 a N Faire
		Si (i MOD 7 = 0) Alors
			Ecrire(i)
		FinSi
	FinPour
Fin
```
