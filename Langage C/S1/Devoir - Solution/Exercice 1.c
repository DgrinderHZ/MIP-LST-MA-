
//realise par BuenoZekk le 10/01/2016 23:20
//Exercice 1 - Devoir - FST Errachidia

#include<stdio.h>
#include<conio.h>
int main()
{ 
	int n, m;
	int i, ndn = 0, ndm = 0; // ndn: nombre de diviseurs de n
	printf("Donnez deux nombres entiers:\n");
	scanf("%d%d", &n, &m);
	
	// Calcul Nombre de diviseurs
	for(i=2; i<n; i++)
	   if(n%i==0) 
	      ndn++;
	for(i=2; i<m; i++)
	   if(m%i==0) 
	      ndm++;
	      
	// Test Nombre Jumeaux      
	if(ndn == 0 && ndm == 0)
	    if(n == m+2 || m == n+2)
	      printf("les deux nombres premiers %d et %d sont jumeaux\n",n,m);
	    else
	      printf("les deux nombres premiers %d et %d ne sont pas jumeaux\n",n,m);
	else
	    printf("les deux nombres %d et %d ne sont pas jumeaux\n\
		Car l\'un entre eux n\'est pas premier OU les deux",n , m); 
		 
	getch();
	return 0;
}
