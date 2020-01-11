
//realise par BuenoZekk le 11/01/2016 01:30
//Exercice 9 - Devoir -FST Errachidia
//Le succes,C'est une question de volonte !!!!!!!
#include<stdio.h>
#include<conio.h>
int main()
{ int n,min,max,som,i=1;
  float moy;
  printf("Donnez une serie de nombres entiers positifs,terminee par zero\n");
    // Initialisation
    min=9999999;
	max=-1;
	som=0;
  do { 
	    printf("valeur N %d: ",i);
	    scanf("%d",&n);
	    som+=n;
	    if(n!=0){
			i++;
		    if(n>max)   max=n;
		    if(n<min)   min=n;
	    }
  }while(n!=0);
  
  moy= (float)som/i; // float pour garder la valeur apres la virgule
  printf("La plus grande des valeurs est: %d\n",max);
  printf("La plus petite des valeurs est: %d\n",min);
  printf("La somme des valeurs est : %d\n",som);
  printf("La moyenne des valeurs est : %f\n",moy);
  getch();
  return 0;
}
