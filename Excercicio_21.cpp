#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
    int vetor[20];
    int tamanho=20;
    int valor;
    bool encontrado = false;

    cout<<"Digite o valor a ser buscado: ";
    cin>>valor;

	for(int j=0; j<20; j++){
		vetor[j]=vetor[j]+1;
	}

    for(int i=0; i<tamanho; i++) {
        if(vetor[i]==valor) {
            encontrado=true;
            break;
        }
    }

    if(encontrado) {
        cout<<"Valor " <<valor <<" encontrado no vetor." <<endl;
    } else{
    	cout<<"Valor " <<valor <<" não encontrado no vetor." <<endl;
    }

    return 0;
}
