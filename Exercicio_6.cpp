#include <iostream>
using namespace std;


int main() {
	
	string nome;
	int idade;
	float peso;
	
	
	cout<<"======Receituario medico====== \n";
	cout<<endl;
	cout<<"Nome do pacinte: \n";
	cin>>nome;
	
	cout<<"Idade do paciente: \n";
	cin >> idade;
	 
	cout<<"Peso do paciente: \n";
	cin>>peso;
	
	
	
	
	if(idade>=12 && peso>=60){
		cout<<"o pacinte "<<nome<<" deve tomar devera tomar 40 gotas que equivalem a 1000mg \n";
		
	}
	else if(idade>=12 && peso<=60){
	    cout<<"o pacinte "<<nome <<" deve tomar devera tomar 35 gotas que equivalem a 875mg \n";
	
	}
	else{
		if(idade<12 && peso<=15){
	    cout<<"o pacinte "<<nome<<" deve tomar devera tomar 8 gotas que equivalem a 200mg \n";
		}
	    else if(idade<12 && peso>=15 && peso<30){
	    cout<<"o pacinte "<<nome<<" deve tomar devera tomar 20 gotas que equivalem a 500mg \n";
		}
		else{
		cout<<"o pacinte "<<nome<<" deve tomar devera tomar 30 gotas que equivalem a 750mg \n";	
		}
	
	
	
	}
	
	
	
	
	
	
	
	return 0;
}
