#include <string>
#include <cstring>
#include <iostream>

#include "classes.hpp"

using namespace std;

void Reino ::setNomeReino(string nomeReino)
{
    this->nomeReino = nomeReino;
}

string Reino ::getNomeReino(void)
{
    return nomeReino;
}

void Filo ::setNomeFilo(string nomeFilo)
{
    this->nomeFilo = nomeFilo;
}

string Filo ::getNomeFilo(void)
{
    return nomeFilo;
}

void Classe ::setNomeClasse(string nomeClasse)
{
    this->nomeClasse = nomeClasse;
}

string Classe ::getNomeClasse(void)
{
    return nomeClasse;
}

void Ordem ::setNomeOrdem(string nomeOrdem)
{
    this->nomeOrdem = nomeOrdem;
}

string Ordem ::getNomeOrdem(void)
{
    return nomeOrdem;
}

void Familia ::setNomeFamilia(string nomeFamilia)
{
    this->nomeFamilia = nomeFamilia;
}

string Familia ::getNomeFamilia(void)
{
    return nomeFamilia;
}

void Genero ::setNomeGenero(string nomeGenero)
{
    this->nomeGenero = nomeGenero;
}

string Genero ::getNomeGenero(void)
{
    return nomeGenero;
}

void Especie ::setNomeEspecie(string nomeEspecie)
{
    this->nomeEspecie = nomeEspecie;
}

string Especie ::getNomeEspecie(void)
{
    return nomeEspecie;
}

void Animal_Planta ::setExtincao(bool extincao)
{

    if (extincao != 0)
        cout << "Animal em extinção" << endl;
    else
        cout << "Não está em extinção" << endl;

    this->extincao = extincao;
}

bool Animal_Planta ::getExtincao(void)
{
    return extincao;
}

void Animal_Planta ::setRegiao(int regiao)
{

    switch (regiao)
    {
    case 1:
        cout << "NORTE" << endl;
        break;

    case 2:
        cout << "NORDESTE" << endl;
        break;

    case 3:
        cout << "CENTRO-OESTE" << endl;
        break;
    case 4:
        cout << "SUDESTE" << endl;
        break;
    case 5:
        cout << "SUL" << endl;
        break;
    default:
        break;
    }

    this->regiao = regiao;
}

int Animal_Planta ::getRegiao(void)
{
    return regiao;
}
