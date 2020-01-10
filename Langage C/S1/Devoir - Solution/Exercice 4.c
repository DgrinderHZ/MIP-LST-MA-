//realise par BuenoZekk le 10/01/2016 22:45
//Exercice 2.3 - Devoir -FST Errachidia
//An average person can be a genius with HARD WORK !!!!!!!
#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int n,i,j, milieu;
 	
 	printf("Donnez le nombre de lignes (impair)\n");
 	scanf("%d",&n);
 	milieu = (n+1)/2;
 	for(i=1;i<=n;i++)
 	{ 
	  for(j=1;j<=n;j++)
	    { 
	      
		  if(i==1 || i==milieu || i==n || j==1 || j==milieu || j==n) // lignes, colonnes
	          printf("*");
	      else if(j==i||j==n+1-i) // diagonaux
		      printf("*"); 
		  else
			 printf(" ");  
	    }
		 printf("\n");
    } 
 		
   getch();
   return 0;
}
 	
