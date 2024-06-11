#include <iostream>
#include <locale>


using namespace std;

void somaLinhas(int matriz[3][3], int L1, int L2) {
    for (int i = 0; i < 3; ++i) {
        matriz[L2][i] += matriz[L1][i];
    }
}

void multiplicaLinhas(int matriz[3][3], int L1, int L2) {
    for (int i = 0; i < 3; ++i) {
        matriz[L2][i] *= matriz[L1][i];
    }
}

int main() {
	setlocale (LC_ALL, "portuguese");

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz original:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    somaLinhas(matriz, 0, 1);

    // Imprime a matriz após a soma
    cout << "\nMatriz após soma das linhas 0 e 1 (resultado na linha 1):" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    multiplicaLinhas(matriz, 0, 2);

    cout << "\nMatriz após multiplicação das linhas 0 e 2 (resultado na linha 2):" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

