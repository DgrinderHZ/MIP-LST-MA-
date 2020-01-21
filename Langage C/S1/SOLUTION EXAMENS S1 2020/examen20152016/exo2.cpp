#include<stdio.h>

int main()
{
	int a, b, r, i;
	printf("entrez a: ");
	scanf("%d",&a);
	printf("entrez b: ");
	scanf("%d",&b);
	r = 1;
	for(i = 0; i<b; i++)
		r *= a;
	printf("resultat: %d", r);
 return 0;
}

