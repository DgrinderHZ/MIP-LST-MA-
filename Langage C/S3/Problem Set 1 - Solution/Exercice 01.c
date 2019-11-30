
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, n;

	printf("Veuillez saisir le nombre a puis b: [a, b]\n");
	scanf("%d%d", &a, &b);
	printf("Veuillez saisir le nombre n:\n");
	scanf("%d", &n);
	
	if(n <= b && n >= a)
		printf("%d appartient a [%d, %d].\n", n, a, b);
	else
		printf("%d n'appartient pas a [%d, %d].\n", n, a, b);
	
	
	getch();
	return 0;
}
