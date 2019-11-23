#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	float note, moyenne, somme;
	int n;
	
	n = 0;
	somme = 0;
	while(1){
		printf("Note %d: ", n+1);
		scanf("%f", &note);
		if(note >= 0){
			somme += note; 
			n++;
		}else 
			break;
	}
	
	moyenne = somme/n;
	printf("La moyenne de ces %d notes est: %f.\n", n, moyenne);
	
	getch();
	return 0;
}
