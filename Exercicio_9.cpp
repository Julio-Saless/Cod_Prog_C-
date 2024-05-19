#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");

int a, b, c, delta, raiz_real, raiz_1, raiz_2;
	
	cout<<"Descobrindo a raiz da equação de segundo grau (ax² + bx + c) \n";
	cout<<endl;
	cout<<"Informe o valor de 'a':";
	cin>>a;
	cout<<"Informe o valor de 'b':";
	cin>>b;
	cout<<"Informe o valor de 'c':";	
	cin>>c;
	cout<<endl;


	if(a==0){
		cout<<"Está não e uma equação de segundo grau, Fim do programa!!!";
		
	}
	else if(a!=0){
			
	delta=(b*b)-4*a*c;
			
			if(delta>0){
				cout<<"Está equação não possui raízes reais, Fim da execução!!! ";
				cout<<endl;
			
			}else if(delta==0){
			
				raiz_real=-b / (2 * a);
				cout<<"Está equação possui apenas uma raiz real, sendo ela: "<< raiz_real <<endl;
			
			
			}else{
				
				raiz_1= (-b + (delta*delta)) / (2 * a);
        		raiz_2= (-b - (delta*delta)) / (2 * a);	
				cout<<"Está equação possui duas raízes reais, sendo elas: "<<raiz_1 <<" e "<<raiz_2 <<endl;
			}
	}
	

	
	
	
	
	
	return 0;
}
