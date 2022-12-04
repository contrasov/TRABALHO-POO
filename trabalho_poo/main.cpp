#include <iostream>
#include <string>
using namespace std;

void Menu() {
  // MUDANDO OS VALORES
  enum { EXIBIR = 1, CADASTRAR, SAIR = 0 };
  int escolha;
  do {
    cout << "1. Exibir Reinos\n2. Cadastrar Animal\n0. Sair\n";
    cin >> escolha;
    switch (escolha) {
    case SAIR:
      cout << "Saindo do programa...\n";
      return;
    case EXIBIR:
      cout << "os reinos possiveis são: \n";
      break;
    case CADASTRAR:
      cout << "Ainda em Desenvolvimento...\n";
      break;
    }
  } while (escolha != 0);
}

int main() {
  
  return 0;
}



//para compilar e nao dar erro = g++ main.cpp ./classes/Animal.cpp -o "run"  
//vector<Animal>Animal;
//animal.push_back(a)
//pop.crack