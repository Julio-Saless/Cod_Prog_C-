#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale (LC_ALL, "portuguese");

	
    char str[100] ="Exemplo de string";
    int pos =7;  
    char ch ='X';  
    
    cout<<"String original: " <<str <<endl;

    for(int i=99; i>pos; i--) {
        str[i] = str[i - 1];
    }

    str[pos] =ch;

    cout<<"String após adição: " <<str <<endl;

    return 0;
}
