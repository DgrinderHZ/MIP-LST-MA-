#include<stdio.h>

int main()
{ 
  int repeter;
  do{
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
	  printf("Resultat : %f\n", res);
	  
	  printf("Pour faire une auter operation taper 1, sinon taper 0\n");
	  scanf("%d",&repeter);
	  getchar();
  }while(repeter == 1);
  
return 0;
}

