#include<stdio.h>
#include<math.h>

int main()
{ 
  int choix;
  do{

    float a,b;

    printf("\n\t*********** MENU ************");
    printf("\n\t* 1 -------> Racine carree  *");
    printf("\n\t* 2 -------> Inverse        *");
    printf("\n\t* 3 -------> Somme          *");
    printf("\n\t* 4 -------> Difference     *");
    printf("\n\t* 5 -------> Produit        *");
    printf("\n\t* 6 -------> Division       *");
    printf("\n\t* 7 -------> Quitter        *");
    printf("\n\t*****************************\n");
    printf("Entrer votre choix (1, 2, 3, 4, 5, 6, 7)\?\n");
    scanf("%d", &choix);
    
    switch(choix)
    {
      case 1: 
      case 2: 
            printf("Veuillez saisir un reel s\'il vous plait!\n");
            scanf("%f", &a);
            printf("\n\t\t-------------------------------\n");
            if(choix == 1)
	            printf("\t\t\tLa racine carree de %f est : %f\n", a, sqrt(a));
	        else{
	        	if(a == 0)
	               printf("La division par Zero est impossible\n");
	            else{
	                printf("\t\t\tL\'inverse de %f est : %f\n", a, 1/a);
	            } 
			}
            printf("\t\t-------------------------------\n");
       break;
      case 3:
      case 4:
      case 5: 
      case 6:
            printf("Veuillez saisir un reel s\'il vous plait! a\n");
            scanf("%f", &a);
            printf("Veuillez saisir un reel s\'il vous plait! b\n");
            scanf("%f", &b);
            printf("\n\t\t-------------------------------\n");
            
            if(choix == 3)
            	printf("\t\t\tLa somme est : %f\n", a+b);
            else if(choix == 4)
            	printf("\t\t\tLa difference est : %f\n", a-b);
            else if(choix == 5)
            	printf("\t\t\tLe produit est : %f\n", a*b);
            else if(choix == 6){
            	if(b == 0)
	               printf("La division par Zero est impossible\n");
	            else{
	                printf("\t\t\tLa division est : %f\n", a/b);
	            } 
			}
            printf("\t\t-------------------------------\n");
       break;
      case 7:
          printf("Vous avais choisi de Quitter, a la prochaine!\n");
          break;
      default:
           printf("Votre choix est mauvais \n"); 
    }
    
  }while(choix != 7);
  
return 0;
}

