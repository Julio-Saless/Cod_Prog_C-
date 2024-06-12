#include <iostream>
#include <string>
#include <locale>

using namespace std;

int encontrarPosicao(const string& str, char caractere) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == caractere) {
            return i;
        }
    }
    return -1; 
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
    string texto;
    char caractere;
    
    cout<<"Digite o texto: \n";
    cin>>texto;
    
    cout<<endl;
    
    cout<<"Qual caracter do texto digitado voce quer encontrar? \n";
    cin>>caractere;
    
    int posicao = encontrarPosicao(texto, caractere);
    
    if (posicao != -1) {
        cout << "O caractere '" << caractere << "' foi encontrado na posição: " << posicao << endl;
    } else {
        cout << "O caractere '" << caractere << "' não foi encontrado na string." << endl;
    }
    
    return 0;
}
