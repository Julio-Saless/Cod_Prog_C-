#include <iostream>
#include<locale>
#include <unistd.h>

using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");
int n1;
int n2;
float n3;
float resultado;
float resultado1;
float resultado2;
float resultado3;

cout<<"======Calculos======\n";
cout<<"Escolha um número inteiro:";
cin>>n1;
cout<<"Agora escolha outro número inteiro:\n";
cin>>n2;
cout<<"Por fim escolha um número real:";
cin>>n3;

resultado=n1*2;
resultado1=n2/2;
resultado2=(n1*3)+n3;
resultado3=n3*n3*n3;

sleep(1.5);
cout<<"O dobro do primeiro número inteiro e a metade do segundo é: " <<resultado <<" e "; sleep(1); cout<<resultado1 <<"\n";
sleep(1.5);
cout<<"A soma do triplo do primeiro com o terceiro é: " <<resultado2<<"\n";
sleep(1.5);
cout<<"Seu terceiro número elevado ao cubo é: " <<resultado3<<"\n";
sleep(2);


	
	
	
	
	
	
	
	
	return 0;
}
