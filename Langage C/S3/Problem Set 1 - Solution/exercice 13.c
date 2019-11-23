#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, factoriel;

	printf("Veuillez saisir le nombre a:\n");
	scanf("%d", &N);
	
	// Avec While
	factoriel = 1;
	int i = 1; 
	while(i <= N){
		factoriel *= i;
		i++;
	}

	printf("%d! = %d\n", N, factoriel);

	// Avec for
	factoriel = 1;
	for(i = 1; i <= N; i++){
		factoriel *= i;
	}
	
	printf("%d! = %d\n", N, factoriel);
	
	getch();
	return 0;
}
