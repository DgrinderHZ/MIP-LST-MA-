#include<stdio.h>

int main()
{ 
  float a,b, res;
  char op;
  
  printf("saisir l\'operateur: \n");
  scanf("%c", &op);
  printf("saisir le premier operande: ");
  scanf("%f", &a);
  printf("saisir le deuxieme operande: ");
  scanf("%f", &b);
  
  switch(op)
  {
  	case '+': res = a+b; break;
  	case '-': res = a-b; break;
	case '*': res = a*b; break;
	case '/':
		if(b==0)
		   printf("La division par Zero est impossible\n");
		else   
	       res = a/b;
	    break;  
	default:
	       printf("Operation non prevue\n"); 
  }
  printf("Resultat : %f", res);
  
return 0;
}

