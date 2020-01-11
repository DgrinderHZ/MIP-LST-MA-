#include<iostream>
 using namespace std;
 class vecteur{
 	float v[3];
 	public:
 		vecteur();
 		vecteur(float,float,float);
 		~vecteur();
 		void afficher();
 		bool coincide(vecteur);
 		vecteur sommeA(vecteur);
 		vecteur sommeB(vecteur*);
 		vecteur sommeC(vecteur&);
 		vecteur sommeTab(vecteur [],int);
 		vecteur sommeTab2(vecteur [],int);
 };
 vecteur::vecteur(){}
 
 vecteur::vecteur(float a,float b,float c){
 	v[0] = a;
 	v[1] = b;
 	v[2] = c;
 }
 vecteur::~vecteur(){
 	v[0] = 0;
 	v[1] = 0;
 	v[2] = 0;
 }
 
 void vecteur::afficher(){
 	cout<< "Vecteur:\n"<< v[0]<< "\n"<< v[1]<< "\n"<< v[2]<<endl;
 }
 
 bool vecteur::coincide(vecteur u){
 	if(this->v[0]==u.v[0] && this->v[1] == u.v[1] && this->v[2]==u.v[2])
 	  return true;
 	else 
 	  return false;
 }
 
 vecteur vecteur::sommeA(vecteur u){
	vecteur res;
	for(int i=0; i<3; i++)
	   res.v[i] = this->v[i] + u.v[i];
	return res;
}

 vecteur vecteur::sommeB(vecteur *u){
 	vecteur res;
	for(int i=0; i<3; i++)
	 res.v[i] = this->v[i] + u->v[i];
	return res;
 }
 
 vecteur vecteur::sommeC(vecteur &u){
 	vecteur res;
	for(int i=0; i<3; i++)
	 res.v[i] = this->v[i] + u.v[i];
	return res;
 }
 
 vecteur vecteur::sommeTab(vecteur T[],int n){
 	vecteur s;
 	for(int i=0;i<n;i++)
 	  s = s.sommeA(T[i]);
 	return s;
 }

 /* La fonction main */
 int main(){
 	 /* 2) test 1 */
 	 vecteur v, u; // creation
 	 /* modification avec des objets temporaire */
 	 v = vecteur(1, 2, 0);
 	 u = vecteur(0, 1, 1);
 	 cout<< "Voici u et v:\n";
 	 u.afficher();
 	 v.afficher();
 	 
 	 /* 5) test 2*/
 	 vecteur *T, som, som1;
 	 int n;
 	 float x,y,z;
 	 
 	 do{ 
	  	cout<<"Donner la dimension du tableau: entier positif!!\n";
		cin>>n;
	  }while(n<=0);
	  
	  T = new vecteur[n];
	  cout<<"Donner les coordonnees de chaques vecteur:x y z\n";
	  
	  for(int i=0;i<n;i++)
	   {  
	   	  cout<<"Vecteur numero: "<< i+1<< endl;
	      cin>>x>>y>>z;
	      T[i] = vecteur(x,y,z);
	   }
	   
	  som = som.sommeTab(T,n);
	  cout<< "Voila leurs somme:\n";
	  som.afficher();
	  return 0;
 }
