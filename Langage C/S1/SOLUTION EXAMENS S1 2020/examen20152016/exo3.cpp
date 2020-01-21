#include<stdio.h>

int main()
{
	int choix, n, sortir;
	n = 0;
	sortir = 1;
	do{
		printf("la valeur de n : %d\n", n);
		printf("\n 1. Ajouter 2\n");
		printf("\n 2. Multiplier par 3\n");
		printf("\n 3. Soustraire 5\n");
		printf("\n 4. Quitter\n");
		printf("\n Veullez saisir votre choix\n");
		scanf("%d", &choix);
		switch(choix){
			case 1: n += 2; break;
			case 2: n *= 3; break;
			case 3: n -= 5; break;
			case 4: sortir = 0; break;
	    }
	}while(sortir == 1);
 return 0;
}

