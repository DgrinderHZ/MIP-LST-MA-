#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int depart, fin;

	printf("Veuillez saisir le nombre a puis b: ");
	scanf("%d%d", &depart);

	fin = depart + 10;
	depart++;

	int i; 
	for(i = depart; i <= fin ; i++) 
		printf("%d\t", i);
	
	
	getch();
	return 0;
}
