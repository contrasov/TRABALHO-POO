#include <iostream>
#include <string>
#include "classes.hpp"
#include "classes.cpp"

using namespace std;

void Menu()
{
  // MUDANDO OS VALORES
  enum
  {
    CADASTRAR_ANIMAL = 1,
    CADASTRAR_PLANTA = 2,
    SAIR = 0
  };
  int escolha;
  do
  {

    cout << "1. Cadastrar Animal \n2. Cadastrar planta \n0. Sair\n";

    cin >> escolha;

    switch (escolha)
    {
    case SAIR:
      cout << "Saindo do programa...\n";
      break;

    case CADASTRAR_ANIMAL:
      cout << "Ainda em Desenvolvimento...\n";
      break;

    case CADASTRAR_PLANTA:
      cout << "Ainda em Desenvolvimento...\n";
      break;
    }
  } while (escolha != 0);
}

int main()
{
  Animal_Planta x;

  x.setNomeReino("Animal");
  x.setNomeFilo("Cordados");
  x.setNomeClasse("Mamíferos");
  x.setNomeOrdem("Artiodálitos");
  x.setNomeFamilia("Bovídeos");
  x.setNomeGenero("Bos");
  x.setNomeEspecie("Gado bovino");

  x.setExtincao(1);
  x.setRegiao(4);

  cout << x.getNomeReino() << "\n"
       << x.getNomeFilo() << "\n"
       << x.getNomeClasse() << "\n"
       << x.getNomeOrdem() << "\n"
       << x.getNomeFamilia() << "\n"
       << x.getNomeGenero() << "\n"
       << x.getNomeEspecie() << "\n";

  // Menu();

  return 0;
}

// para compilar e nao dar erro = g++ main.cpp ./classes/Animal.cpp -o "run"
// vector<Animal>Animal;
// animal.push_back(a)
// pop.crack