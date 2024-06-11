#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");
    
	
	int linhas, colunas;

    cout << "Digite o número de linhas da matriz: ";
    cin >> linhas;
    cout << "Digite o número de colunas da matriz: ";
    cin >> colunas;

    int matriz[linhas][colunas];

    cout << "Digite os elementos da matriz:" << endl;
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            cin >> matriz[i][j];
        }
    }

    cout << "Transposta da matriz:" << endl;
    for(int j = 0; j < colunas; ++j) {
        for(int i = 0; i < linhas; ++i) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
