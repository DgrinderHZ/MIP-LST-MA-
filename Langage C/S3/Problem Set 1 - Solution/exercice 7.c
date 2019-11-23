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

	if(a == b || b == 0) pgcd = a;
	else if(a == 0 && b != 0) pgcd = b;
	else{

		while(a != 0){
			if(a > b) a = a - b;
			else if (b > a) b = b - a;
			     else{
			     	pgcd = a;
			     	a = 0;
			     }
		}

	}

	printf("%d.\n", pgcd);
	
	getch();
	return 0;
}
