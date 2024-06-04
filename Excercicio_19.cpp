#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
    char str[100] ="Exemplo de string";
    int pos =8; 

    cout<<"String original: " <<str <<endl;

    
    for(int i=pos; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }

    cout<<"String após remoção: " <<str <<endl;

    return 0;
}
