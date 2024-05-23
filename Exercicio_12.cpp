#include <iostream>
#include <locale>
#include <unistd.h>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
	int saque, nota100, nota50, nota10, nota5, nota1;
	
	cout<<"====Caixa Eletrônico==== \n" <<endl;
	
	cout<<"Digite o valor à ser sacado: ";
	cin>>saque;
	cout<<endl;
	sleep(1);
	
	if(saque>=10 && saque<=600){
		
			nota100=saque/100;
			saque%=100;
			nota50=saque/50;
			saque%=50;
			nota10=saque/10;
			saque%=10;
			nota5=saque/5;
			saque%=5;
			nota1=saque/1;
			saque%=1;
		
			cout<<"As notas para o saque serão:"<<endl;
			cout<<nota100<<" Notas de 100" <<endl;
			cout<<nota50<<" Notas de 50" <<endl;
			cout<<nota10<<" Notas de 10" <<endl;
			cout<<nota5<<" Notas de 5" <<endl;
			cout<<nota1<<" Notas de 1" <<endl;
	}
	else{
			cout<<"Valor inválido para saque!!!" <<endl;
	}
	
	
	
	return 0;
}
