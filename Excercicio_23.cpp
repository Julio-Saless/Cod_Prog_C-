#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
	
	
    int vetor[100];
    int contador = 0; 
    int numero = 1;   
    
    while(contador <= 100) {
         if(numero % 7 != 0 && numero % 10 != 7) {
            vetor[contador]=numero;
            contador++;
        }
        numero++;
    }

    cout<<"Os 100 primeiros naturais que não são múltiplos de 7 e não terminam com 7 são:" <<endl;
 
    for(int i=0; i<=100; i++) {
        cout<<vetor[i] <<" " <<endl;
    }
    
      return 0;
}
