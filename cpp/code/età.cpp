#include <iostream>
using namespace std;
int main()
{
int x,y,z,k,h;
	cout<<"Inserisci l'anno corrente";
	cin>>x; // anno corrente
	cout<<"inserisci la tua eta'";
	cin>>y; 					 //eta' attuale
	z=x-y;						 //anno di nascita
	cout<<"Inserisci l'anno per calcolare la tua eta'";
	cin>>k; //anno inserito
		
	if(k>z && k<x){
			h= y+(k-x);
		cout<<"La tua eta' nel "<<k<<" era di "<<h<<" anno/i "<<endl;
	}
	
		
		else if(k>x){
				  h= y+(k-x);
		  cout<<"La tua eta' nel "<<k<<" sara' di "<<h<<" anni "<<endl;
		}
	
		
			else 
			cout<<"Nel "<<k<<" non eri ancora nato "<<endl;
			
		
	return 0;		
	
	

	
}
