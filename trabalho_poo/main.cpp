#include <iostream>
#include <string>
using namespace std; 


int main(){
    cout << "1. Exibir Reinos\n2. Cadastrar Animal\n0. Sair\n";
    int escolha;
    cin >> escolha;

    switch (escolha)
    {
    case 0:
        cout << "Saindo do programa...\n";
        break;
    
    case 1:
        cout << "Ainda nenhum Reino\n";
        break;
    case 2:
        cout << "Ainda em Desenvolvimento...\n";
        break;
    }
}