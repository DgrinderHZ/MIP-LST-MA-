#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b;

	printf("Veuillez saisir le nombre a puis b: ");
	scanf("%d%d", &a, &b);
	
	if((0 <= b && 0 <= a) || (0 >= b && 0 >= a))
		printf("Le produit est positif.\n");
	else
		printf("Le produit est negatif.\n");
	
	
	getch();
	return 0;
}
