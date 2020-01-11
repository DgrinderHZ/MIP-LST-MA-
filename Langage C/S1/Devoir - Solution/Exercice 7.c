//realise par BuenoZekk le 11/01/2016 00:25
//Exercice 7 - Devoir -FST Errachidia
//If you want to succed than be phenomenal !!!!!!!
#include<stdio.h>
#include<conio.h>
int main()
{
  int i;
   for(i=-3;i<=3;i++)
      if(i!=0)
	    printf("L\'inverse de %d est %f\n",i,1.0/i);
	  else
	    printf("L\'inverse de zero n\'existe pas.Car la division par zero est impossible\n");
   getch();
   return 0;
}
