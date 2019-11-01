// Declaration des bibliothèques
#include<stdio.h> // printf, scanf, ...
#include<conio.h> // getch()
//...etc

// declaration des constantes 
#define PI 3.14
const float uneConstante = 10;

// declaration des variables globales
int uneVG = 2;

// declaration des fonctions
int somme(int, int);

// fonction principal
int main(){
	printf("DEBUT\n");
	// declaration des variables
	int a, b, s;
	
	// traitement
	printf("donner a: "); scanf("%d", &a);
	printf("donner a: "); scanf("%d", &a);
	s = somme(a, b); // s = a + b;
	printf("La somme est: %d\n", somme);
	printf("FIN\n");
	
	getch();
	return 0;
}

// definition des fonctions
int somme(int x, int y){
	return (x + y);
}
