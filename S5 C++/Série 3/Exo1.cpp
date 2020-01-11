#include<iostream>
 using namespace std;
 class vecteur;
 
 class matrix{
 	float M[3][3];
 	public:
 		matrix(float [3][3]);// explicit
 		void affiche();
 		friend vecteur ProMatVect(matrix&, vecteur&);// bien
 		vecteur Produit(vecteur&);
 };
 
void matrix::affiche(){
  	for(int i=0;i<3;i++)
  	  { 
		for(int j=0;j<3;j++)
  	      cout<<M[i][j]<<"\t";
  	    cout<<"\n";
	  }
	}
	
 matrix::matrix(float t[3][3]){
 	for(int i=0;i<3;i++)  // bien on a pas de variable dynamique 
  	   for(int j=0;j<3;j++)   // donc sans allocation
  	      M[i][j]=t[i][j];   // copiage directe
 }
 
 class vecteur{
 	float v[3];
 	public:
 		vecteur();
 		vecteur(float,float,float);
 		~vecteur();
 		void afficher();
 		friend vecteur ProMatVect(matrix&,vecteur&);
 		friend vecteur matrix::Produit(vecteur&);
 };
 
 vecteur::vecteur(){}
 vecteur::vecteur(float a,float b,float c){
 	v[0]=a;
 	v[1]=b;
 	v[2]=c;
 }
 
 vecteur::~vecteur(){
 	v[0]=0;
 	v[1]=0;
 	v[2]=0;
 }
 
 void vecteur::afficher(){
 	cout<<v[0]<<"\n"<<v[1]<<"\n"<<v[2];
 }
 
  vecteur ProMatVect(matrix &A,vecteur &V){
  	vecteur res;
  	for(int i=0;i<3;i++)
  	   for(int j=0;j<3;j++)
  	      res.v[i] += A.M[i][j]*V.v[j];
  	return res;
  }
  
  vecteur matrix::Produit(vecteur &V){
  	vecteur res;
  	for(int i=0;i<3;i++)
  	   for(int j=0;j<3;j++)
  	      res.v[i] += M[i][j]*V.v[j];
  	return res;
  }
  
 int main(){
 	vecteur Pro, Pro1;
 	vecteur a(1,2,3);
 	float t[3][3];
 	cout<<"donner les elements de la matrice\n";
 	for(int i=0;i<3;i++)
 	  for(int j=0;j<3;j++)
 	      cin>> t[i][j];
 	
	matrix m(t);
 	cout<<"voila votre matrice\n";
	m.affiche();
	cout<<"\nvoila le vecteur\n";
	a.afficher(); 	
	Pro=ProMatVect(m,a);
	cout<<"\nvoila votre produit\n";
	Pro.afficher();
    cout<<"\nvoila votre produit AVEC FCT produit\n";
    Pro1=m.Produit(a);
	Pro1.afficher();
	return 0;
 	
 }  
