#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

#include "classes.hpp"

using namespace std;

void Reino ::setNomeReino(string NomeReino)
{
    this->nomeReino = NomeReino;
}

string Reino ::getNomeReino(void)
{
    return nomeReino;
}
//Função da sobrecarga do operador << pra funcionar como um append lá em "arq << x" na main
//Essa função é a definição do método friend pra sobrecarga de operador
ostream& operator<<(ostream& os, const Reino& p)
	{
        //Estranho ainda de mexer e os dados sobrescrevem mas ta quase funcional
		os << p.nomeReino;
		return os;
	}

 void Filo ::setNomeFilo(string nomeFilo)
{
    this->nomeFilo = nomeFilo;
}

string Filo ::getNomeFilo(void)
{
    return nomeFilo;
}
ostream& operator<<(ostream& os, const Filo& p)
	{
		// escrever cada membro
		os << p.nomeFilo;
		return os;
	}



void Classe ::setNomeClasse(string nomeClasse)
{
    this->nomeClasse = nomeClasse;
}

string Classe ::getNomeClasse(void)
{
    return nomeClasse;
}

ostream& operator<<(ostream& os, const Classe& p)
	{
		// escrever cada membro
		os << p.nomeClasse;
		return os;
	}

void Ordem ::setNomeOrdem(string nomeOrdem)
{
    this->nomeOrdem = nomeOrdem;
}

string Ordem ::getNomeOrdem(void)
{
    return nomeOrdem;
}

ostream& operator<<(ostream& os, const Ordem& p)
	{
		// escrever cada membro
		os << p.nomeOrdem;
		return os;
	}

void Familia ::setNomeFamilia(string nomeFamilia)
{
    this->nomeFamilia = nomeFamilia;
}

string Familia ::getNomeFamilia(void)
{
    return nomeFamilia;
}
ostream& operator<<(ostream& os, const Familia& p)
	{
		// escrever cada membro
		os << p.nomeFamilia;
		return os;
	}

void Genero ::setNomeGenero(string nomeGenero)
{
    this->nomeGenero = nomeGenero;
}

string Genero ::getNomeGenero(void)
{
    return nomeGenero;
}

ostream& operator<<(ostream& os, const Genero& p)
	{
		// escrever cada membro
		os << p.nomeGenero;
		return os;
	}

void Especie ::setNomeEspecie(string nomeEspecie)
{
    this->nomeEspecie = nomeEspecie;
}

string Especie ::getNomeEspecie(void)
{
    return nomeEspecie;
}

ostream& operator<<(ostream& os, const Especie& p)
	{
		// escrever cada membro
		os << p.nomeEspecie;
		return os;
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

