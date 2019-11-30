#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, a, somme;
	float moyenne;
	printf("Veuillez saisir N:\n");
	scanf("%d", &N);
	
	somme = 0;
	int i;
	for(i = 0; i < N; i++){
		printf("Saisir le nombre %d:\n", i+1);
		scanf("%d", &a);
		somme += a;
	}
	
	moyenne = (float)somme/N;
	printf("La somme est %d et la moyenne est %f.\n", somme, moyenne);
	
	getch();
	return 0;
}
