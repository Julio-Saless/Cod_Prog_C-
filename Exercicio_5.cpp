#include <iostream>
#include <unistd.h>
#include <locale>

using namespace std;
int main() {
		setlocale (LC_ALL, "portuguese");

	
	float arquivo, Mbps;
	int quant_segundos, minutos, minutos_segundos;
	
	
	cout<<"Vamos calcular quanto tempo levará seu download \n";
	sleep(2);
	
	cout<<"Informe o tamanho do arquivo e Mb: \n";
	cin>>arquivo;
	sleep(1.5);
	
	cout<<endl;
	
	cout<<"Agora informe a velocidade de seu link de internet em Mbps: \n";
	cin>>Mbps;
	sleep(1.5);
	
	cout<<endl;
	
	quant_segundos=arquivo/Mbps;
	minutos=quant_segundos/60;
    minutos_segundos=quant_segundos%60;
	
	
    cout<<"Seu donwload levará aproximadamnete " <<minutos <<" minutos e " <<minutos_segundos <<" segundos";	
	sleep(2);
	return 0;
}
