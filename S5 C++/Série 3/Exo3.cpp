#include<iostream>
#include<string.h>
 using namespace std;
 class chaine{
 	int dim;
 	char *ch;
 	public:
 		chaine();
 		chaine(char*);
 		chaine(chaine&);
 	          void afficher();
 	          chaine* operator=(chaine&);
 	          bool operator==(chaine&);
              char operator[](int);
              chaine*  operator+(chaine&);
 };
 
 chaine::chaine(){
 	dim = 0;
 	ch = NULL;	
 }
 
 chaine::chaine(char *a){
 	dim = strlen(a);
    ch = new char[dim];
    for(int i=0;i<dim;i++)
      ch[i] = a[i];
 }
 
 chaine::chaine(chaine &a){
 	dim = a.dim; cout<<"moirec ";
 	ch = new char[dim];
 	for(int i=0;i<dim;i++)
       ch[i] = a.ch[i];
 }
 
 chaine* chaine::operator=(chaine &a){
 	if(this != &a)
 	{   cout<<"moi= ";
		dim = a.dim;
		delete ch;
	 	ch = new char[dim];
	 	for(int i=0;i<dim;i++)
	        ch[i] = a.ch[i];	
	}
	return this;
 }
  bool chaine::operator==(chaine &a){
 	if(dim == a.dim)
 	  { int i=0; 
	   while(ch[i] == a.ch[i] && i<dim) i++;
 	   if(i==dim) 
		return true;
 	   else 
		return false;
	 }
	else 
	   return false;
 }
 
 char chaine::operator[](int i){
 	if(i<0&&i>=dim) i=0;
 	  return ch[i];
 }
 
 chaine* chaine::operator+(chaine &a){
 	chaine res;
 	int i;
    res.dim = dim+a.dim;
    res.ch = new char[res.dim];
	for( i=0;i<dim;i++)
	    res.ch[i]=ch[i]; 
	for(int j=0;j<a.dim;j++,i++)
	    res.ch[i]=a.ch[j]; 
	res.ch[i]='\0';
	
	return &res;      
 }
  void chaine::afficher(){
  	cout<< ch<<endl;
  };
  
 int main(){
 	char ch[] =  "HASSAN";
 	chaine a(ch), b;
 	a.afficher();
 	b = a;
 	cout<<"apres la copie \n";
 	b.afficher();
 	cout<<"a[4] = "<<a[4]<<endl;
 	
	chaine *c;
	cout<<"concatenation ";
	c = a+b;
	c->afficher();
 	return 0;
 	
 }
