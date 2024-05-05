#include <iostream>
#include <cmath>
#include<locale>
#include<unistd.h>



using namespace std;
int main() {
		setlocale (LC_ALL, "portuguese");

	
	float area;
	int lata_total=18*3;
	int preco_da_lata=80;
	float valor_final;
	int quant_de_lata;
	
	
	cout<<"Vamos calcular a quantidade e o valor das latas de  tintas \n";
	sleep(1.5);
	cout<<"Para iniciar nos informe em metros quadrados a área que deseja pintar: \n";
	cin>>area;
	
	cout<<endl;

	quant_de_lata= ceil(area/lata_total);
	valor_final= quant_de_lata*preco_da_lata;
	sleep(1.5);
	
	cout<<"Será necessário " <<quant_de_lata <<" latas de tintas, e ficará um valor de R$"<<valor_final;
	sleep(1.5);
	
	return 0;
}
