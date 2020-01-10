//realise par BuenoZekk le 10/01/2016 22:38
//Exercice 2.2 - Devoir -FST Errachidia
//It is small steps that climb montagnes !!!!!!!

#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int n,i,j,f,k,n_espace;
 	printf("Donnez le nombre de ligne compris entre 0 et 10\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{ 
	 f=i+1;
	 n_espace = n-i-1;
 	 for(j=0; j < n_espace; j++)
 	     printf(" ");
 	 for(k=1; k <= 2*i+1; k++)
 	      if(k<i+1)       // partie gauche         i=0
 	           { if(f==10)                      // i=1         2
				     f=0;                       //            34
				 printf("%d",f);                //           456
				 f++;                           //          5678
			   }                                //           ...
		  else              // parie droite          i=0        1
			   { if(f==-1)                      //   i=1        32
				     f=9;                       //              543
				 printf("%d",f);                //              7654
				 f--;                           //              98765
			   }                                //               ...
 	 printf("\n");
    }
 	      
 getch();
 }
