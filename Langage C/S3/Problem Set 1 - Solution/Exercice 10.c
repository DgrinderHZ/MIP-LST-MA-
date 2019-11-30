#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int a, b, produit;

	printf("Veuillez saisir a puis b:\n");
	scanf("%d%d", &a, &b);
	
	produit = 0;
	int i;
	if(a < b){
		for (i = 0; i < a; ++i)
		{
			produit += b;
		}
	}else{
		for (i = 0; i < b; ++i)
		{
			produit += a;
		}
	}

	printf("%dx%d = %d\n", a, b, produit);
	getch();
	return 0;
}
