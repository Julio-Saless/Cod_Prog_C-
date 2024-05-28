#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
	unsigned long long graos_por_quadrado=1;
	unsigned long long totalgraos=0;
	
	cout<<"!!! Quantos grãos de trigo cabe em um tabuleiro de xadrez !!!  \n";
	cout<<endl;
	
	for(int i=0; i<=64; i++){
		totalgraos+= graos_por_quadrado;
        graos_por_quadrado *= 2;
	}
	
	cout<<"A quantidade de grãos de trigo que cabem em um tabuleiro de xadrez é "<<totalgraos <<endl;
	
	
	
	return 0;
}
