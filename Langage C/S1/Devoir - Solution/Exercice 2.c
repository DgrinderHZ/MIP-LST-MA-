//realise par BuenoZekk le 10/01/2016 12:08
//Exercice 2.1 - Devoir -FST Errachidia
//An average person can become a genius with HARD WORK !!!!!!!

#include<stdio.h>
#include<conio.h>
int main()
{
 	int n, i, j, f, k, n_espace;
 	printf("Donnez le nombre de ligne\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{ 
	    n_espace=n-i-1;
 	    for(j=0;j<n_espace;j++)
 	    	printf(" ");
 	    for(k=1;k<=2*i+1;k++)
 	        printf("*");
 	    printf("\n");
 	}
 	      
 getch();
 return 0;
}
