# Série N°1: Bases de numération
## Exercice 1:
```
1. Le plus grand nombre grand nombre que l'on peut stocker dans un octet est: 
   1 octet = 8 bits
   Alors (2^8)-1 = 255
2. Le plus grand nombre grand nombre que l'on peut stocker dans 64 bits est: 
   8 octet = 64 bits
   Alors (2^64)-1 = 1,844674407 x 10^19 - 1
3. Avec n bit on peut représenter:
    (2^n) nombres
4. On a:
    1 Go = 1024 Mo = 1024 x 1024 x 1024 octets
    1 Mo = 1024 Ko = 1024 x 1024 octets
    1 Ko = 1024 octets
    1 octet = 8 bits
    
    Alors dans un disque dur de capacité de 40 Go le nombre de bits est:
    40 x 1024 x 1024 x 1024 x 8 bits
```

## Exercice 2:
```
1. Pricipe de conversion d'un nombre de la base 10 à une base 2:
      - Divisions successives par 2 avec notation du reste tant que le quotient est non nul;
      - Prendre les restes du bas vers le haut et noter au fur et à mesure de droite à gauche;
```
![image](https://github.com/DgrinderHZ/MIP/blob/master/Bases%20de%20num%C3%A9ration/10%20to%202.jpg)
```
2. Pricipe de conversion d'un nombre de la base 2 à une base 10:
     - Multiplier le bit par 2 avec une puissance croissante de gauche à droite,
     en commençe à la puissance zéro:
     1010(en base 2)
     10 (en base 10) = 1x2^3+ 0x2^2 + 1x2^1 + 0x2^0 
                     = 8 + 0 + 2 + 0
                     = 10
3. Pricipe de conversion d'un nombre de la base 2 à une base 8:
   - 7 = 8-1 peut être représenter par 3 bits: 7(10) = 111(2)
   Alors il faut toujours diviser la représentation binaire en blocks de
   3 bits avec completion à gauche par des zéros si nécessaire.
   - Remplacer chaque block par son chiffre correspondant:
```
   Chiffre | En 3 bits
   ------------ | -------------
0 | 000
1 | 001
2 | 010
3 | 011
4 | 100
5 | 101
6 | 110
7 | 111
```
Exemple: 
  10(10) = 1010(10)
  - Diviser en blocks de trois bits: 1 010
  - Compléter le premier block: 001 010
  - Remplacer:    1 2
  Alors 10(10) = 1010(10) = 12(8)
  
  - Pour l'inverse il suffit d'inverser les étapes!
  
4. Pricipe de conversion d'un nombre de la base 2 à une base 16:
   - 15 = 16-1 peut être représenter par 4 bits: 15(10) = 1111(2)
   Alors il faut toujours diviser la représentation binaire en blocks de
   4 bits avec completion à gauche par des zéros si nécessaire.
   - Remplacer chaque block par son chiffre correspondant:
```
   Chiffre | En 3 bits
   ------------ | -------------
0 | 0000
1 | 0001
2 | 0010
3 | 0011
4 | 0100
5 | 0101
6 | 0110
7 | 0111
8 | 1000
9 | 1001
A | 1010
B | 1011
C | 1010
D | 1011
E | 1110
F | 1111
```
Exemple: 
  20(10) = 10100(10)
  - Diviser en blocks de trois bits: 1 0100
  - Compléter le premier block: 0001 0100
  - Remplacer:    1 4
  Alors 20(10) = 1010(10) = 14(16)
  
  - Pour l'inverse il suffit d'inverser les étapes!
  
5. 6. A vous de les faires! c'est faciles :)
```
