//realise par BuenoZekk le 10/01/2016 23:48
//Exercice 4 - Devoir -FST Errachidia
//If you want to succed than be phenomenal !!!!!!!

#include<stdio.h>
#include<conio.h>
int main()
{ 
	int n,m ;
    int i, somN=0,somM=0; // somN: somme des diviseurs de n
    printf("donnez deux nombres entiers\n");
    scanf("%d%d",&n,&m);
    // Sommation Des Diviseurs
    for(i=1;i<n;i++)
       if(n%i==0) 
          somN += i; // ou bien somN=somN+i;
    for(i=1;i<m;i++)
       if(m%i==0) 
          somM += i;
    // Test Nbrs Amis
    if((somN==m)&&(somM==n))
	  printf("les deux nombres %d et %d sont qualifie d\'amis\n",n,m);  
	else
	  printf("les deux nombres %d et %d ne sont pas qualifie d\'amis\n",n,m); 
	getch(); 
	return 0;     
}
