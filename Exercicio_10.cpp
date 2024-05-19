#include <iostream>
#include <locale>
#include <unistd.h>

using namespace std;
int main() {
		setlocale (LC_ALL, "portuguese");

	
	int ano;
	
	cout<<"Descobrindo se o Ano é bissexto ou não!!";
	cout<<endl;
	cout<<endl;
	
	cout<<"Informe qual ano deseja descobrir: ";
	cin>>ano;
	cout<<endl;
	
	sleep(1.5);
	
	if(ano%4==0){
		cout<<"O ano informado é um ano bissexto"<<endl;
	}else{
		cout<<"O ano informado não é um ano bissexto"<<endl;
	}
	
	return 0;
}
