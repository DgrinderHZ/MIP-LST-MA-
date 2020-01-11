#include<iostream>
 using namespace std;
 class vectint{ 
            int *v;
            int dim;
            public:
            	static int cpt;
            	vectint(int);
            	void affiche();
            	~vectint();
            	vectint(vectint&);
            	vectint* operator=(vectint&);
            	bool operator==(vectint&);
            	int operator[](int);
 };
 int vectint::cpt = 0;
 
 vectint::vectint(int n){
 	dim = n;
 	v = new int[dim];
 	cout<< "vecteur "<< cpt<< endl;
 	for(int i=0;i<dim;i++){
 		cout<<"v["<<i<<"]=";
 		cin>>v[i]; cout<<endl;
	 }
	 cpt++;
 }
 
 vectint::~vectint(){ 
	 dim = 0; 
	 delete []v;
 }
  vectint::vectint(vectint &a){
  	dim = a.dim;
  	v = new int[dim];
  	for(int i=0 ; i<dim ; i++) 
	  v[i]=a.v[i];
  }
  vectint* vectint::operator=(vectint &a){
      if(this != &a){
      	this->dim = a.dim;
      	delete []this->v;
      	this->v = new int[dim];
      	for(int i=0;i<dim;i++) 
		  this->v[i] = a.v[i];
      }
      return this;
  }
  bool vectint::operator==(vectint &a){
  	if(dim == a.dim){
	  	  for(int i=0;i<dim;i++) 
		     if(v[i] != a.v[i])
		        return false;
	      return true;
	  }
	  else
	   return false;	  
  }
  
  int vectint::operator[](int i){
  	if(i < 0 || i >= dim) i=0;
  	return v[i];
  }
  void vectint::affiche(){
  	cout<<"vecteur ";
  	for(int i=0;i<dim;i++)
  	   cout<<v[i]<<"\t";
  	cout<<endl;
  }
  
  int main(){
    int i;
  	vectint a(3),b(3),c(3);
  	cout<<"donner i pour a[i]"; 
	cin>>i;
  	cout<<a[i]<<endl;
  	a.affiche();
  	b.affiche();
  	c.affiche();
  	c = a;
  	c.affiche();
  	if(a.operator==(c))
            cout<<"a et c coincide ";
    else
            cout<<"a et c ne coincide pas ";
return 0;
  }
