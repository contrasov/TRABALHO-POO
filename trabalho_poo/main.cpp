#include <iostream>
#include <string>
using namespace std; 


int main(){
    int escolha;
    do{
        cout << "1. Exibir Reinos\n2. Cadastrar Animal\n0. Sair\n";
        cin >> escolha;
        switch (escolha){
            case 0:
                cout << "Saindo do programa...\n";
                return 0;
            case 1:
                
                break;
            case 2:
                cout << "Ainda em Desenvolvimento...\n";
                break;
        }
    }
    while(escolha != 0);
    
}