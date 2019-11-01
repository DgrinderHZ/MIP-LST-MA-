// 0. Declaration des bibliothèques
#include<stdio.h> // printf, scanf, ...
#include<conio.h> // getch()
//...etc

// 1. declaration des constantes 
#define PI 3.14
const float uneConstante = 3.14;

// 2. declaration des variables globales
int uneVG = 2;

// 3. declaration des fonctions
int somme(int, int);

// 4. fonction principal
int main(){
	printf("DEBUT\n");
	
	// 5. declaration des variables
	int a, b, s;
	
	// 6. traitement
	printf("donner a: "); scanf("%d", &a);
	printf("donner b: "); scanf("%d", &b);
	s = somme(a, b); // s = a + b;
	printf("La somme est: %d\n", s);
	
	printf("FIN\n");
	
	getch();
	return 0;
}

// 7. definition des fonctions
int somme(int x, int y){
	return (x + y);
}
