#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
void remplace(char *ch)
{  int i=0;
  while(ch[i]){
  	if((ch[i]<='Z')&&(ch[i]>='A'))
  	   {
	     if(ch[i-1]!=ch[i]&&ch[i+1]!=ch[i]) //Attention!! débordement d'indice
  	      ch[i]=' ';
  	}
  	else
  	 printf("Erreur\n");
  	  i++; 
	      }
}
void nettoyer(char *ch)
{  int i,j,n=strlen(ch);
   int cpt=0; // nombre d'espace
   for(i=0;i<n;i++)
    { if(ch[i]==' ')
        {again:
          cpt++;
         for(j=i;j<n-1;j++)
              ch[j]=ch[j+1];
          if(ch[i]==' ') 
	 goto again;
        }
    } 
    for(i=n-cpt;i<n;i++)
      ch[i]='\0';
}
int main(){
	char ch[40];
  printf("donner votre chaine\n");
  gets(ch);
  remplace(ch);
  printf(" \n apres traitement\n ");
  puts(ch);
  nettoyer(ch);
  printf(" \n apres netoyage\n ");
  puts(ch);
  
  
  return 0;
}
