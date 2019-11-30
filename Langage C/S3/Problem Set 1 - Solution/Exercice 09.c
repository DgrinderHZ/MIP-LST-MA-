#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, somme;

	printf("Veuillez saisir N:\n");
	scanf("%d", &N);
	
	somme = 1;
	int i;
	for(i = 2; i < N; i++){
		if(N % i == 0)
			somme += i;
	}

	if(somme == N)
		printf("%d est un nombre parfait.\n", N);
	else
		printf("%d n'est pas un nombre parfait.\n", N);
	
	getch();
	return 0;
}
