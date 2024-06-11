#include <iostream>
#include <locale>
using namespace std;

const int NUM_HORAS = 24;
const int NUM_CAMAS = 4;

int main() {
	setlocale (LC_ALL, "portuguese");


    int pulsoes[NUM_HORAS][NUM_CAMAS];

    cout << "Digite as pulsações dos pacientes ao longo de 24 horas:" << endl;
    for(int i = 0; i < NUM_HORAS; ++i) {
        cout << "Hora " << i + 1 << ":" << endl;
        for(int j = 0; j < NUM_CAMAS; ++j) {
            cout << "Pulsações do paciente na cama " << j + 1 << ": ";
            cin >> pulsoes[i][j];
        }
    }

    double media[NUM_CAMAS] = {0};
    for(int j = 0; j < NUM_CAMAS; ++j) {
        for(int i = 0; i < NUM_HORAS; ++i) {
            media[j] += pulsoes[i][j];
        }
        media[j] /= NUM_HORAS;
    }

    cout << "\nMédia das pulsações para cada paciente:" << endl;
    for(int j = 0; j < NUM_CAMAS; ++j) {
        cout << "Cama " << j + 1 << ": " << media[j] << endl;
    }

    double maiorMedia = media[0];
    int camaMaiorMedia = 1;
    for(int j = 1; j < NUM_CAMAS; ++j) {
        if(media[j] > maiorMedia) {
            maiorMedia = media[j];
            camaMaiorMedia = j + 1;
        }
    }

    cout << "\nO paciente com maior valor médio das pulsações está na cama " << camaMaiorMedia << "." << endl;

    return 0;
}
