#include <iostream>
#include <string>
#include "classes.hpp"
#include "classes.cpp"

using namespace std;



void cadastro(){
  //construtor aqui dentro pro usuario poder manipular, caso coloque no switch da erro
    Animal_Planta x;
    string reino;
    string filo;
    string classe;
    string ordem;
    string familia;
    string genero;
    string especie;
    //Abre o arquivo
    ofstream arq;
    arq.open("Arquivo.txt",ios :: app);

    cout << "Reino: ";
    cin >> reino;

    cout << "Filo: ";
    cin >> filo;
    cout << endl;

    cout << "Classe: ";
    cin >> classe;
    cout << endl;
     cout << "Ordem: ";
    cin >> ordem;
    cout << endl;
     cout << "Familia: ";
    cin >> familia;
    cout << endl;
     cout << "Gênero: ";
    cin >> genero;
    cout << endl;
     cout << "Espécie: ";
    cin >> especie;
    cout << endl;

    x.setNomeReino(reino);
    x.setNomeFilo(filo);
    x.setNomeClasse(classe);
    x.setNomeOrdem(ordem);
    x.setNomeFamilia(familia);
    x.setNomeGenero(genero);
    x.setNomeEspecie(especie);

    //Coloca os dados dentro do arquivo (Ta sobrescrevendo não sei o porque)
    arq << x <<"\n";
    //Fecha o arquivo
    arq.close();

    //return reino, filo, classe, ordem, familia, genero, especie;

}


int main()
{
   // MUDANDO OS VALORES
  enum
  {
    CADASTRAR_ANIMAL = 1,
    CADASTRAR_PLANTA = 2,
    MOSTRAR_ANIMAIS = 3,
    SAIR = 0
  };
  int escolha;
  do
  {

    cout << "1. Cadastrar Animal \n2. Cadastrar planta \n3. mostrar\n0. Sair\n";

    cin >> escolha;

    switch (escolha)
    {
    case SAIR:
      cout << "Saindo do programa...\n";
      break;

    case CADASTRAR_ANIMAL:
     cadastro();
     

     break;

    case MOSTRAR_ANIMAIS:

    break;

    case CADASTRAR_PLANTA:
      cout << "Ainda em Desenvolvimento...\n";
      break;
    }
  } while (escolha != 0);

  







  return 0;
}

// para compilar e nao dar erro = g++ main.cpp ./classes/Animal.cpp -o "run"
// vector<Animal>Animal;
// animal.push_back(a)
// pop.crack