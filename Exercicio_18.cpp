#include <iostream>
#include <locale>

using namespace std;

int main() {
	setlocale (LC_ALL, "portuguese");

    int voto, porc_nulo, porc_branco;
    int votosJose = 0, votosJoao = 0, votosMaria = 0, votosAna = 0;
    int votosNulos = 0, votosBrancos = 0;
    int totalVotos = 0;
	
    cout<<"Eleição Presidencial" <<endl;
    cout<<"1 - Jose" <<endl;
    cout<<"2 - Joao" <<endl;
    cout<<"3 - Maria" <<endl;
    cout<<"4 - Ana" <<endl;
    cout<<"5 - Voto Nulo" <<endl;
    cout<<"6 - Voto em Branco" <<endl;
    cout<<"Digite 0 para finalizar a votação." <<endl;

    do {
        cout<<"Digite o código do seu voto: ";
        cin>>voto;
		cout<<endl;
    switch (voto) {
        case 1:
            votosJose++;
            totalVotos++;
            cout<<"Voto computado \n";
			cout<<endl;
			break;
        case 2:
            votosJoao++;
            totalVotos++;
            cout<<"Voto computado \n";
			cout<<endl;
			break;
        case 3:
            votosMaria++;
            totalVotos++;
            cout<<"Voto computado \n";
            cout<<endl;
            break;
        case 4:
            votosAna++;
            totalVotos++;
            cout<<"Voto computado \n";
            cout<<endl;
            break;
        case 5:
            votosNulos++;
            totalVotos++;
            cout<<"Voto computado \n";
            cout<<endl;
            break;
        case 6:
            votosBrancos++;
            totalVotos++;
            cout<<"Voto computado \n";
            cout<<endl;
            break;
        case 0:
            default:
			cout <<"Fim da votação." <<endl;
			break;
             
        }
    } while (voto != 0);
	
	porc_nulo=(votosNulos*100)/totalVotos;
	porc_branco=(votosBrancos*100)/totalVotos;
	
	cout<<endl;
	cout << "Resultados da Eleição:" <<endl;
    cout << "Total de votos para Jose: " <<votosJose <<endl;
    cout << "Total de votos para Joao: " <<votosJoao <<endl;
    cout << "Total de votos para Maria: " <<votosMaria <<endl;
    cout << "Total de votos para Ana: " <<votosAna <<endl;
    cout << "Total de votos nulos: " <<votosNulos <<endl;
    cout << "Total de votos em branco: " <<votosBrancos <<endl;
	cout << "Porcentagem de votos nulos: " <<porc_nulo <<"% "<<endl;
	cout << "Porcentagem de votos em branco: " <<porc_branco <<"% "<<endl;
	
	return 0;
}
