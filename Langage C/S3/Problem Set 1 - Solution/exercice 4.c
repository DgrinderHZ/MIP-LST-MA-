#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int h, m;

	printf("Veuillez saisir l\'heure:\n");
	scanf("%d", &h);
	printf("Veuillez saisir la minute:\n");
	scanf("%d", &m);

	m++;
	if(m >= 60){
		m = m - 60;
		h++;
		if(h >= 24) h = h - 24;
	}

	printf("Dans une minute, il sera %d heure(s) %d.\n", h, m);
	
	getch();
	return 0;
}
