#include<iostream>
#define N 10 // 10 polynomes
 using namespace std;
 class poly0{
 	float a;
 	public:
 		poly0(float);
 	float val(float);
 };
 poly0::poly0(float a){
 	this->a=a;
 }
 float poly0::val(float x)
 { return a;
 }
 class poly1{
 	float a;
 	float b;
 	public:
 		poly1(float,float);
 	float val(float);
 	float zero(float,float);
 	poly0 derive();
 };
 poly1::poly1(float a,float b){
 	this->a=a;
 	this->b=b;
 }
 float poly1::val(float x){
 	return (a*x+b);
 }
 float poly1::zero(float c,float d){ // [a,b]=[c,d] l'intervale
    if((-b/a)>c||(-b/a)<d)
      cout<<"La racine de Poly1 est:"<<-b/a;
    else
      cout<<"Pas de racine sous cette condition!!";
 }
 poly0 poly1::derive(){
 	return poly0(a);
 }
 // La fonction principale
 int main(){
 	float a,b,x;
	
	cout<<"### Test de Poly d\'ordre 0 ###\n";
	
	cout<<"Donner la valeur de Poly0: a\n";
	cin>>a;
	poly0 po(a);
	cout<<"Donner une valeur x pour calculer Poly0(x)\n";
	cin>>x;
	cout<<"Poly0("<<x<<")= "<<po.val(x);
	
	cout<<"\n### Test de Poly d\'ordre 1 ###\n";
	
 	cout<<"Donner les valeur de Poly1: a puis b\n";
	cin>>a>>b;
	poly1 pol(a,b);
	cout<<"Donner une valeur x pour calculer Poly1(x)\n";
	cin>>x;
	cout<<"Poly1("<<x<<")= "<<pol.val(x);

	
    cout<<"### Deriver et racines 'fonction zero(a,b)' ##";
    // a,b et x sont déja déclarés en haut ;) !!
    poly1 p[N]; // déclaration du tableau
    float c,d; // on remplace [a,b] par [c,d]
    for(int i=0;i<N;i++){
      cout<<"Donner les valeur de Poly1 numero"<<i-1<<": a puis b\n";
      do 
	    cin>>a; 
	  while(a==0);
	  cin>>b;
	  p[i]=poly1(a,b);  
	}
	do{
	  cout<<"Donner les bornes de [c;d]: c puis d\n";
	  cin>>c>>d;
	}while(a>=b);
	cout<<"Donner une valeur x pour calculer Poly1(x)\n";
	cin>>x;
	for(int i=0;i<N;i++){
	cout<<"La valeur de la"<<i+1<<"ieme Poly1 est:"<<p[i].val(x);
    cout<<"\nLa derivee de la"<<i+1<<"ieme Poly1 est:"<<(p[i].derive()).val(x);
	p[i].zero(c,b);
	}
	return 0; 
 }
