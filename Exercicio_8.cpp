#include <iostream>
#include<locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
	
	float l1, l2, l3; 
	
	
	cout<<"Vamos montar um triângulo \n";
	cout<<"Nos informe os lados do triângulo: \n";
	cin>>l1;
	cin>>l2;
	cin>>l3;
	
	if( l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
		if(l1==l2 && l2==l3){
			cout<<"Este se torna um Triângulo Equilátero. \n";
		}
		else if(l1==l2 && l2!=l3 || l1!=l2 && l2==l3 || l1==l3 && l2!=l1){
			cout<<"Este se torna um Triângulo isóceles. \n";
		}
		else {
			cout<<"Este se torna um Triângulo Escaleno. \n";
		}
	}
	else{
		cout<<"Os números informados não formam um triângulo. \n";
	}
	
	
	
	
	return 0;
}
