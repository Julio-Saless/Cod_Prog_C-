#include <iostream>

using namespace std;
int main() {
    const int linhas = 10;
    const int colunas = 10;
    int matriz[linhas][colunas];
    int maior = matriz[0][0];
    int linha_maior, coluna_maior;


    cout << "Digite os elementos da matriz 10x10:" << endl;
    for(int i = 0; i < linhas; ++i) {
        for(int j = 0; j < colunas; ++j) {
            
			cin >> matriz[i][j];

            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    cout << "Localização do maior valor: Linha " << linha_maior + 1 << ", Coluna " << coluna_maior + 1 << endl;

    return 0;
}
