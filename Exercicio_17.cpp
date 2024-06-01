#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	float p1, p2, p3, total, troco, fim, din;
	char key;
	
	do{
		
		cout<<"Loja Tabajara \n";
		cout<<"Produto 1: R$";
		cin>>p1;
		cout<<"Produto 2: R$";
		cin>>p2;
		cout<<"Produto 3: R$";		
		cin>>p3;
		
		cin>>fim;
		
		if(fim==0){		
			total=p1+p2+p3;
		
			cout<<"Total: R$" <<total <<endl;
		
			cout<<"Dinheiro: R$";
			cin>>din;
		
			troco=din-total;
		
			cout<<"Troco: R$" <<troco <<endl;
			cout<<endl;
		}
		else{
			cout<<"Digite 0 para continuar! \n";
		}
		
		cout<<endl;
		cout<<"Pressione qualquer tecla para seguir ou pressione 'q' para encerrar... \n";
		key = _getch();
		cout<<endl;
			
	}while(key != 'q');
	
	cout<<"Programa encerrado!!! \n";
	
	return 0;
}
