#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int N, premier = 1;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &N);
	
	int i; 
	for(i = 2; i < N; i++)
		if(N % i == 0){
			premier = 0;
			break;
		}

	if(premier)
		printf("%d est un nombre premier.\n", N);
	else
		printf("%d n\'est un nombre premier.\n", N);
	
	getch();
	return 0;
}
