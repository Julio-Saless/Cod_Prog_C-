#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
 
 
    int vetor[10];
    int valorReferencia, MenorRef=0, Aparece=0;
    
    cout<<"Digite 10 números inteiros:" <<endl;
    for(int i=0; i<10; i++) {
        cin>>vetor[i];
    }

    cout<<"Digite um valor de referência: ";
    cin>>valorReferencia;

    cout<<"Números maiores que o valor de referência:" <<endl;
    for(int i=0; i<10; i++) {
        if(vetor[i] > valorReferencia) {
            cout<<vetor[i] <<" ";
        }
    }
    cout<<endl;

	
    for(int i=0; i<10; i++) {
        if(vetor[i] < valorReferencia) {
            MenorRef++;
        }
    }
    cout<<"Quantidade de números menores que o valor de referência: " <<MenorRef << endl;


    
    for(int i=0; i<10; i++) {
        if(vetor[i] == valorReferencia) {
            Aparece++;
        }
    }
    cout<<"Quantidade de vezes que o valor de referência aparece no vetor: " <<Aparece <<endl;

    return 0;
}
