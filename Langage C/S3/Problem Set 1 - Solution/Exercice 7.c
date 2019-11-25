#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, pgcd;

	printf("Veuillez saisir le nombre a:\n");
	scanf("%d", &a);
	printf("Veuillez saisir le nombre b:\n");
	scanf("%d", &b);
	
	printf("pgcd(%d, %d) = ", a, b);

	if(a == 0 && b != 0) pgcd = b;
	else if(b == 0 && a != 0) pgcd = a;
	else{

		while(a != b){
			if(a > b) a = a - b;
			else if (b > a) b = b - a;
		}

	}
	
	pgcd = a;

	printf("%d.\n", pgcd);
	
	getch();
	return 0;
}
