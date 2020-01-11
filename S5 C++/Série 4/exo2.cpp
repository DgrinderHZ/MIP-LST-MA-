#include<iostream>
using namespace std;
 class compte{
 	protected:
		int numero;
	 	float soldeInit;
 	public:
 		compte(){
 			numero = 0;
 			soldeInit = 0;
		 }
 		compte(int n, float s){ 
 		   numero = n;
 		   soldeInit = s;
		 }
 	virtual float calculSolde() const{ return soldeInit; }
 	int getNumero() const{ return numero;}
 };
 
 class compte_depot : public compte{
 	float *tab;
 	int nbmax, nop;
 	public:
 		compte_depot(int n,float s,int max):compte(n,s){
 			nbmax = max;
 			tab = new float[nbmax];
 			nop = 0;
		 }
		 compte_depot():compte(0,0){
 			nbmax = 0;
 			tab = NULL;
 			nop = 0;
		 }
		void memo(float);
		~compte_depot();
	    float calculSolde() const;
		float operator[](int);
 };
 
 void compte_depot::memo(float a){
 	if(nop < nbmax)
 	  { 
	    tab[nop] = a;
 	    nop++;
	  }
	else 
	  cout<<"le nombre max d\'operation est achevee!!";
 }
 
 compte_depot::~compte_depot(){
 	delete []tab;
 	nop = 0;
 }
 
 float compte_depot::calculSolde() const{
 	float s = compte::calculSolde();
 	for(int i=0; i<nop; i++)
 	  s += tab[i];
	return s;
 }
 
 float compte_depot::operator[](int i){
 	return tab[i];
 }
 
 class compte_epargne : public compte{
 	float taux;
 	int duree;
 	public:
 		compte_epargne(int n,float s,float t,int d):compte(n,s){
 			taux = t;
 			duree = d;
		 }
		compte_epargne():compte(0,0){
 			taux =0;
 			duree = 0;
		 }
		float calculSolde() const;
 };
 
 float compte_epargne::calculSolde() const{
 	float s = compte::calculSolde();
 	s = s + (s*taux*duree)/100;
 	return s;
 }
 
 void editer_solde(compte &c){
 	cout<<"appel de editer_solde(compte &c)";
 	cout<<"\nNumero compte: "<< c.getNumero() <<endl;
 	cout<<"Solde: "<< c.calculSolde() <<endl;
 }
 
 float moyenne(compte *c,compte_depot *cd,compte_epargne *ce, int n){
 	float moy = 0;
 	for(int i = 0; i<n ; i++){
 		moy += c[i].calculSolde();
	 }
	for(int i = 0; i<n ; i++){
 		moy += cd[i].calculSolde();
	 }
	for(int i = 0; i<n ; i++){
 		moy += ce[i].calculSolde();
	 }
	return moy/(n*3);
 }
 
 int main(){
 	compte_depot c(15,10000,10);
 	c.memo(100);
 	editer_solde(c);
 	cout<<"calculerSold() >>> "<< c.calculSolde()<< endl;
 	cout<<"operation i = 0: "<< c[0] <<endl;
 	
 	compte_epargne e(16,50000,10,1);
 	editer_solde(e);
 	cout<<"calculerSold() >>> "<< e.calculSolde()<<endl;
 	
 	compte *t = new compte[2];
 	t[0] = compte(c);
 	t[1] = compte(e);
 	compte_depot *tt = new compte_depot[2];
 	tt[0] = compte_depot(c);
 	tt[1] = compte_depot(c);
 	compte_epargne *ttt = new compte_epargne[2];
 	ttt[0] = compte_epargne(e);
 	ttt[1] = compte_epargne(e);
 	cout<<"Moy: "<< moyenne(t,tt,ttt, 2);
return 0; 
 }
 
