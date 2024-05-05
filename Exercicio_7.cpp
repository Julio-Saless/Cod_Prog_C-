#include <iostream>


using namespace std;
int main() {
    int n1, n2, n3; 
   

cout<<"Vamos colocar os numeros em ordem decrescente";
cout<<endl;

cout<<"Digite o priemiro numero: \n";
cin>>n1;

cout<<"Digite o segundo numero: \n";
cin>>n2;

cout<<"Digite o terceiro numero: \n";
cin>>n3;

    if (n1 < n2) {
    swap(n1, n2);
    }
    if (n1 < n3) {
    swap(n1, n3);
    }
    if (n2 < n3) {
    swap(n2, n3);
    }

cout<<"E assim fica a ordem: "<<n1<<", "<<n2<<" ,"<<n3;
cout<<endl;














	return 0;
}
