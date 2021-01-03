
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, num;

	printf("Veuillez saisir le nombre a puis b: [a, b]\n");
	scanf("%d%d", &a, &b);
	printf("Veuillez saisir le nombre n:\n");
	scanf("%d", &num);
	
	if(num <= b && num >= a)
		printf("%d appartient a [%d, %d].\n", num, a, b);
	else
		printf("%d n'appartient pas a [%d, %d].\n", num, a, b);
	
	
	getch();
	return 0;
}
