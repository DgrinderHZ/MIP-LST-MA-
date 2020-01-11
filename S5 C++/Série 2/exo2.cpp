#include<iostream>

 using namespace std;
 
 class point3d{
 	float x,y,z;
 	public:
 		//point3d();
 		point3d(float a = 0,float b = 0,float c = 0){ 
		 // construcreur enligne
 			x = a;  // paramètre par defaut
 			y = b;
 			z = c;
		 };
		 void afficher(){
		 	cout<<"x = "<< x <<endl;
		 	cout<<"y = "<< y <<endl;
		 	cout<<"z = "<< z <<endl;
		 }
 	    
 };
 //point3d::point3d(){}
 
 class point3d_2{
 	float x,y,z;
 	public:
	static int cpt;
	// il faut qu'il soit initialiser avec point3d_2::cpt = 0
 		point3d_2();
 		point3d_2(float,float,float);
	static int getCompteur();
 };
 
int point3d_2::cpt=0;// il faut pas oublier ça

 point3d_2::point3d_2(){cpt++;}
 
 point3d_2::point3d_2(float a,float b,float c){
 			x = a;
 			y = b;
 			z = c;
 			cpt++;
		 }
		 
  int point3d_2::getCompteur(){ return cpt;}
  
 int main(){
 	
 	/* test partie 1 */
 	point3d p, q(1,2,3), t(0,1,3);
 	p.afficher();
 	
 	/* test partie 2 */
 	point3d_2 a,b(1,2,3),c(0,1,3);
 	cout<<"Le nombre d\'objets est:"<< point3d_2::getCompteur();// faut bien retenir
 	return 0;
 }
