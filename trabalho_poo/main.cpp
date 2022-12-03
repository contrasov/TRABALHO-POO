#include <iostream>
#include <string>
#include "classes/Reino.hpp"
using namespace std; 

void Menu(){
    int escolha;
    do{
        cout << "1. Exibir Reinos\n2. Cadastrar Animal\n0. Sair\n";
        cin >> escolha;
        switch (escolha){
            case 0:
                cout << "Saindo do programa...\n";
                return;
            case 1:
                cout << "Ainda nenhum Reino\n";
                break;
            case 2:
                cout << "Ainda em Desenvolvimento...\n";
                break;
        }
    }
    while(escolha != 0);
}

int main(){
    Menu();
}


