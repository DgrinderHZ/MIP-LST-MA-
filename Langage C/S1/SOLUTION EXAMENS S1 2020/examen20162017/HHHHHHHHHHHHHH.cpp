#include <stdlib.h>
#include <stdio.h>

#define MAX 10

typedef struct{
	int indice;
	char c;
}motCode;

void decompresser(motCode t[], char dictio[][20]){
	int size = 8;
	int i;
	for (i = 1; i < size; ++i)
	{
		int ind = t[i].indice;
		printf("%s", dictio[ind]);
		putchar(t[i].c);
	}
}

int main(int argc, char const *argv[])
{
	char dictio[MAX][20] = {"", "a", "ab", "r", "abd", "b", "abr", "abrdg"};
	char text[] = "aabrabdbabrabdg";
	motCode t[] = {{-1,' '}, {0,'a'}, {1,'b'}, {0,'r'}, {2,'d'}, {0,'b'}, {2,'r'}, {4,'g'}};
	decompresser(t, dictio);
	return 0;
}
