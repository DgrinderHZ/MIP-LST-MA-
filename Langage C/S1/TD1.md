```c 
// Exo5Q2
#include<stdio.h>
#include<math.h>

main()
{
	int nombre, carre;
	
	printf("Veuiller saisir le nombre: ");
    scanf("%d", &nombre);
	
	carre = nombre * nombre;  //  carre = pow(nombre, 2);
	
	printf("Le carre de %d est %d.", nombre, carre);
}
 
```

```c

/* Exo5Q3
ALGORITHME image_de_x_par_f
    Variable x: Entier
    Constante a <-- 1
	Constante b <-- 2 
	Constante c <-- 3  
DEBUT
    ecrire("Veuiller saisir la valeur x: ")
    lire(x)

    ecrire("f(", x, ") = ", a*x*x + b*x + c)
FIN
*/

#include<stdio.h>
#include<math.h>
main()
{ 
    const int a = 1, b=2, c=3;
	int x;
    
    printf("Veuiller saisir la valeur x: ");
    scanf("%d",&x);

    printf("f(%d) = %d.", x, a*x*x + b*x + c);
}


```

```c
/* Exo6Q1
ALGORITHME somme_et_moyenne
    Variables a, b, c, d, s : Entier
    		  m : Reel 
DEBUT
    ecrire("Veuiller saisir les valeurs de a, b, c et d: ")
    lire(a, b, c, d)
	
	s <-- a + b + c + d
	m <-- s / 4
	
    ecrire("La somme: ", s)
    ecrire("La moyenne: ", m)
FIN
*/


#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, c, d, s; // Entier
	float m; // Reel 
    
    printf("Veuiller saisir les valeurs de a, b, c et d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

	s = a + b + c + d;
	m = s / 4;
	
    printf("La somme: %d\n", s);
    printf("La moyenne: %f", m);
    
    getch();
}



```c
/* Exo6Q2
ALGORITHME somme_et_moyenne_avec2Variable
    Variables a, s : Entier
DEBUT
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
	s <-- a
	
	ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a 
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a 
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a
	
    ecrire("La somme: ", s)
    ecrire("La moyenne: ", s / 5)
FIN
*/

#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, s; // Entier
	
    printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;

    printf("La somme: %d\n", s);
    printf("La moyenne: %f", s/5.0);
    
    getch();
}
```


```c

/* Exo6Q3
ALGORITHME la_moyenne_dun_eleve
    Variables n1, n2, n3, n4, n5 : Reel
    			s, m : Reel
DEBUT
    ecrire("Veuiller saisir la 1ere note: ")
    lire(n1)
	s <-- n1
	
	ecrire("Veuiller saisir la 2eme note: ")
    lire(n2)
    s <-- s + n2
    
    ecrire("Veuiller saisir la 3eme note: ")
    lire(n3)
    s <-- s + n3 
    
    ecrire("Veuiller saisir la 4eme note: ")
    lire(n4)
    s <-- s + n4
    
    ecrire("Veuiller saisir la 5eme note: ")
    lire(n5)
    
    s <-- s + n5
	m <-- s / 5
	
    ecrire("La moyenne: ", m)
FIN
*/

#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	float n1, n2, n3, n4, n5; // Reel
	float s, m; // Reel
	
    printf("Veuiller saisir la 1ere note: ");
    scanf("%f", &n1);
	s = n1;
	
	printf("Veuiller saisir la 2eme note: ");
    scanf("%f", &n2);
	s = s + n2;
	
	printf("Veuiller saisir la 3eme note: ");
    scanf("%f", &n3);
	s = s + n3;
	
	printf("Veuiller saisir la 4eme note: ");
    scanf("%f", &n4);
	s = s + n4;
	
	printf("Veuiller saisir la 5eme note: ");
    scanf("%f", &n5);
	s = s + n5;
	
	m = s/5;
    printf("La moyenne: %f", m);
    
    getch();
}


```



```c

/* Exo7Q1
ALGORITHME echange_entre_A_et_B
    Variables a, b, temp : Entier
DEBUT
    ecrire("Veuiller saisir la valeur de a et b: ")
    lire(a, b)
	
	ecrire("Avant echange: a=", a, " b=", b)
	temp <-- a
	a <-- b
	b <-- temp
	ecrire("Apres echange: a=", a, " b=", b)
FIN
*/


#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, temp;
	
	printf("Veuiller saisir la valeur de a et b: ");
    scanf("%d%d", &a, &b);
	
	printf("Avant echange: a= %d b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("Apres echange: a= %d b=%d", a, b);
	
    getch();
}



 
```




```c

/* Exo7Q2
ALGORITHME echange_entre_A_et_B_avec2Variable
    Variables a, b : Entier
DEBUT
    ecrire("Veuiller saisir la valeur de a et b: ")
    lire(a, b)
	
	ecrire("Avant echange: a=", a, " b=", b)
	a <-- a + b 
	b <-- a - b
	a <-- a - b
	ecrire("Apres echange: a=", a, " b=", b)
FIN
*/

#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, temp;
	
	printf("Veuiller saisir la valeur de a et b: ");
    scanf("%d%d", &a, &b);
	
	printf("Avant echange: a= %d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Apres echange: a= %d b=%d", a, b);
	
    getch();
}


```

```c
/* Exo8
ALGORITHME TTCtoHT
    Variables ttc, ht : Reel
    Constante TVA <-- 18,6   * 18,6% pourcent *
DEBUT
    ecrire("Veuiller saisir le prix toute taxe comprise: ")
    lire(ttc)
    
	ht = ttc / (1+TVA/100);
	
	ecrire(ttc, "DH T.T.C. devient", ht, "  DH H.T.");
FIN
*/

 #include<stdio.h>
main(){
    const float TVA = 18.6; // 18.6%
    float ht, ttc; // Prix HT et Prix TTC

    printf("Veuiller saisir le prix toute taxe comprise: ");
    scanf("%f", &ttc);

    ht = ttc / (1+TVA/100);

    printf("%f DH T.T.C. devient %f DH H.T.", ttc, ht);
}



```
