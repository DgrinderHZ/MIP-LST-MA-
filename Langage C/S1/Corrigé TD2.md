
```c
/* Exo1Q1
Algorithme positif_ou_negatif
    Variable x : entier
Debut
    ecrire ("Saisir un entier x: ")
    Lire (x)
    
    Si (x > 0) alors
       ecrire ("x est un nombre positif") // (x > 0) est vrai
    Sinon
       ecrire ("x est un nombre negatif ou nul") // (x > 0) est faux
    Finsi
Fin
*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int x;
	
	printf("Saisir un entier x: ");
    scanf("%i", &x);
	
	if(x > 0)
		printf("x est un nombre positif");	
	else
		printf("x est un nombre negatif ou nul");
	
    getch();
}
 
```


```c
/*
Algorithme Exo1Q2
	Variable x,y : entier
Debut
    ecrire("Saisir 2 entiers: ")
    Lire(x,y)
    
    Si ((x > 0 et y>0) ou (x <0 et y<0)) alors
       ecrire ("le produit est positif")
    Sinon
       ecrire ("le produit est negatif ou nul")
    Finsi
Fin

AUTRE METHODE

ALGORITHME  signe de produit
     VARIABLES a, b : Entier
DEBUT
    Ecrire("Donner deux nombre: ")
    Lire(a, b)
     
    Si ( a = 0 OU b = 0 ) Alors
        Ecrire("Le produit est nul")
    Sinon
       Si ( (a < 0) ET (b < 0) OU (a > 0) ET (b > 0) ) Alors
            Ecrire("Le produit est positif")
       Sinon
            Ecrire("Le produit est negatif")
       FinSi
    FinSi
FIN

*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	int x, y, p;
	
	printf("Saisir 2 entiers: ");
    	scanf("%d%d", &x, &y);
	p  = a*b;
	if((x>0 && y>0) || (x<0 && y<0)) // ET: &&, OU: || 
		printf("le produit est positif");
	else
		printf("le produit est negatif ou nul");
	
    getch();
}

```


```c
/* Exo3
Algorithme Maximum
	Variable a ,b: Reel
Debut
    ecrire ("Saisir a ")
    Lire(a)
    ecrire ("Saisir b ")
    Lire(b)
    
    Si (a>b) alors
        ecrire("le maximum de ", a, " et de ", b, " est : ", a)
    Sinon
       	ecrire("le maximum de ", a, " et de ", b, " est : ", b)
    Finsi
Fin
*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
    float a, b;
	
    printf("Saisir a: ");
    scanf("%f", &a);
    
    printf("Saisir b: ");
    scanf("%f", &b);
    
	if(a > b)
		printf("le maximum de %f et de %f est : %f", a, b, a);
	else
		printf("le maximum de %f et de %f est : %f", a, b, b);
	
    getch();
}
 
```

```c
/* Exo4
Algorithme Parite
 Variable x : entier
Debut
    ecrire ("Saisir un entier x ")
    Lire(x)
    
    Si (x Mod 2= 0) alors
       	ecrire ( x, "est Pair ")
    Sinon
      	ecrire ( x, "est Impair")
    Finsi
Fin
*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int x;
	// float     %f
	// int       %d  %i
	// char      %c
	
	printf("Saisir un entier x: ");
        scanf("%i", &x); // %d, %i c'est le format des entiers
	
	if(x % 2 == 0) // Mod : %
		printf("%i est Pair ", x);
	else
		printf("%i est Impair", x);
	
    getch();
}

```

```c

/* Exo5
Algorithme Maximum
	Variable a ,b, c, max : Entier
Debut
    ecrire ("Saisir deux entiers a, b et c ")
    Lire(a, b, c)
    
    // avec variable d'aide max
    Si (a>b) alors
        max <-- a  
    Sinon
       	max <-- b 
    Finsi
    
    Si (c>max) alors
        max <-- c 
    Finsi
    
    ecrire ("le maximum de " , a," et de ", b, " est : ", max)
    
    // sans variable d'aide max
    Si (a >= b ET a >= c) alors
        ecrire("le maximum de ", a, " ", b, " et de ", c, " est : ", a)
    Sinon 
		  Si (b >= a ET b >= c) alors
       		  ecrire("le maximum de ", a, " ", b, " et de ", c, " est : ", b)
    	  Sinon
    	  	  ecrire("le maximum de ", a, " ", b, " et de ", c, " est : ", c)
    	  Finsi
    Finsi
Fin
*/


#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int a, b, c, max;
	
	printf("Saisir un entier x: ");
    scanf("%d%d%d", &a, &b, &c);
	
	// avec variable d'aide max
	if(a > b)
		max = a;
	else
		max = b;
		
	if(c > max)
		max = c;
	
	printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, max);
	
	// sans variable d'aide max
	if(a >= b && a >= c) // Et: &&
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, a);
	else if (b >= a && b >= c) 
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, b);
	else
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, c);
	
	// avec operateur ternaire

	max = (a >= b && a >= c) ? a : b;
	/* <=>
	if((a >= b && a >= c))
		max = a;
	else 
		max = b;
	*/	
	max = (b >= max) ? b : max;
	max = (c >= max) ? c : max;
	// max = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);
	printf("le maximum de %d, %d et de %d est : %d", a, b, c, max);
	
	
    getch();
}

```

```c

/*Algorithme Exo6Q1
	Variable note : reel
Debut
    ecrire ("Saisir une note ")
    Lire (note)
    
	Si (note >= 10)  alors
	    ecrire ("reussi")
	Sinon
	    ecrire ("pas reussi")
	Finsi
	
FIN
*/


#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;
	
	do{// Pour s'assurer que 0 <= note <= 20
		printf("Saisir une note entre 0 et 20: ");
    		scanf("%f", &note);
	}while(note <  0 || note > 20);
	
	
	if(note >= 10)
		printf("reussi");
	else
		printf("pas reussi");
	
    getch();
}



```


```c
/* Exo6Q2
ALGORITHME  quelle_mention?
     VARIABLES note: Float
DEBUT
	Ecrire("Veuillez saisir VOTRE NOTE:");
	Lire(note);
	
	Si (note >= 0 Et note < 7) ALORS    
		Ecrire("Non valide")
	Sinon Si(note < 10) ALORS  
		  	 Ecrire("Rattrapage")
	      Sinon Si(note < 12) ALORS 
		           Ecrire("Passable")
		     Sinon Si( note < 14) ALORS  
		               Ecrire("Assez bien")
	              Sinon Si(note < 16) ALORS
		                      Ecrire("Bien")
	                    Sinon Si(note < 18) ALORS
					  	         Ecrire("Tres bien")
				              Sinon 
				      	          Ecrire("Tres bien avec felicitations")
			                  FinSi
				        FinSi
		          FinSi
	         FinSi
	      FinSi
	FinSi	
FIN
*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;

	do{// Pour s'assurer que 0 <= note <= 20
		printf("Veuillez saisir VOTRE NOTE:\n");
		scanf("%f", &note);
	}while(note <  0 || note > 20);
	
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
}

```

```c
/* Exo9 Avec if else if else...
Algorithme Operation
	Variable
	 a, b, d: reel
	 c : caractere
Debut
    ecrire ("Saisir deux nombres ")
    Lire (a,b)
    ecrire ("Saisir une operation arithmetique (+, -, *, /) ")
    Lire (c)
    
	Si (c = '+') alors
	    d <-- a+b
	    ecrire (a,"+ ",b,"=", d)
	Sinon Si (c = '-')  alors
             	d <-- a-b
             	ecrire (a,"-",b,"=", d)
             Sinon Si (c='*')  alors
                   	d <-- a*b
                   	ecrire (a,"*",b,"=", d)
                   Sinon  Si (c = '/' )  alors
             			   Si (b <> 0) alors
                              		d <-- a/b
                              		ecrire (a, "/",b,"=", d)
                           	   Sinon
                              		ecrire ("Erreur")
                           	   finsi
                          Sinon
                           	ecrire ("operation invalide")
	                  finsi 
		    FinSi
	     finsi
	 Finsi
FIN

*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	printf("Saisir une operation arithmetique (+, -, *, /) : ");
	scanf("%c", &c);
	
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	if(c == '+'){
		d = a+b;
		printf("%.2f+%.2f=%.2f.", a, b, d);
	}else if(c == '-'){
		d = a-b;
		printf("%.2f-%.2f=%.2f.", a, b, d);
	}else if(c == '*'){
		d = a*b;
		printf("%.2f*%.2f=%.2f.", a, b, d);
	}else if(c == '/'){
		if (b != 0){
			d = a/b;
			printf("%.2f/%.2f=%.2f.", a, b, d);
		}else
			printf("Erreur");
	}else 
		printf("operation invalide");
		
    getch();
}

/* Exo9 Avec Selon
Algorithme Operation
	Variable
	 a, b, d: reel
	 c : caractere
Debut
    ecrire ("Saisir deux nombres ")
    Lire (a,b)
    ecrire ("Saisir une operation arithmitique (+, -, *, /) ")
    Lire (c)
    
    Selon (c) Faire
	     Cas '+' :
		    d <-- a+b
		    ecrire (a,"+ ",b,"=", d)
	     Cas '-'  :
	        d <-- a-b
	        ecrire (a,"-",b,"=", d)
	     Cas  '*' :
	       d <-- a*b
	       ecrire (a,"*",b,"=", d)
	     Cas '/' :
		   Si (b <> 0) alors
	          	d <-- a/b
	          	ecrire (a, "/",b,"=", d)
	       	   Sinon
	          	ecrire ("Erreur")
	           finsi
     	     Sinon
    		ecrire ("operation invalide")
    FinSelon
FIN

*/


#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	printf("Saisir une operation arithmetique (+, -, *, /) : ");
	scanf("%c", &c);
	
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	switch(c){
		case '+':
			d = a+b;
			printf("%.2f+%.2f=%.2f.\n", a, b, d);
			break;
	    case '-':
			d = a-b;
			printf("%.2f-%.2f=%.2f.\n", a, b, d);
			break;
		case  '*':
			d = a*b;
			printf("%.2f*%.2f=%.2f.\n", a, b, d);
			break;
		case '/':
			if (b != 0){
				d = a/b;
				printf("%.2f/%.2f=%.2f.\n", a, b, d);
			}else
				printf("Erreur");
			break;
		default: // Sinon
			printf("operation invalide");
	}
    getch();
}




```

```c
/* Exo12
Algorithme Prix_final_Et_Remise
Variables
		prix, remise, prixFin: reels
	    {prixFin: prix Final} 
Debut
	Ecrire("Veuillez entrer le prix initial :")
	Lire(prix)	

	Si (prix > 200) Alors
			remise <-- prix * (50/100)
	Sinon Si (prix >= 100 et prix <= 200) Alors
				remise <-- prix * (40/100)
		  Sinon
			    remise <-- prix * (30/100)
		  Fin Si
	Fin Si	

	prixFin <-- prix - remise	
	
	Ecrire("Prix initial :", prix," DH, Remise : ", remise, " DH, Prix final : ", prixFin," DH")	
Fin
*/


#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float prix, remise, prixFin; // prixFin: prix Final

	printf("Veuillez entrer le prix initial :");
	scanf("%f", &prix);

	if (prix > 200) 
		remise = prix * (50./100);
	else if (prix <= 200 && prix >= 100) 
		remise = prix * (40./100);
	else
		remise = prix * (30./100);	

	prixFin = prix - remise;
	
	printf("Prix initial : %.2f DH, Remise : %.2f DH, Prix final : %.2f DH", prix, remise, prixFin);
		
    getch();
}



```
