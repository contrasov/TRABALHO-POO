#include <string>
#include <fstream>

using namespace std;

#ifndef CLASSES_HPP
#define CLASSES_HPP
class Reino
{
private:
    string nomeReino;

public:
    void setNomeReino(string nomeReino);
    string getNomeReino(void);
    //Uma sobrecarga do operador << pra poder relacionar classe e arquivos
    //Atribuí como metodo para cada classe não entendi como usar a herança do jeito certo
    //Pro arquivo funcionar corretamente (Coloquei em todas as classes pq n funcionava de jeito nenhum)
    friend ostream& operator<<(ostream& os, const Reino& p);
	friend istream& operator>>(istream& is, Reino& p);

		
};

class Filo : public Reino
{
private:
    string nomeFilo;

public:
    void setNomeFilo(string nomeFilo);
    string getNomeFilo(void);
    friend ostream& operator<<(ostream& os, const Filo& p);
	friend istream& operator>>(istream& is, Filo& p);
};

class Classe : public Filo
{
private:
    string nomeClasse;

public:
    void setNomeClasse(string nomeClasse);
    string getNomeClasse(void);
    friend ostream& operator<<(ostream& os, const Classe& p);
	friend istream& operator>>(istream& is, Classe& p);
};

class Ordem : public Classe
{
private:
    string nomeOrdem;

public:
    void setNomeOrdem(string nomeOrdem);
    string getNomeOrdem(void);
    friend ostream& operator<<(ostream& os, const Ordem& p);
	friend istream& operator>>(istream& is, Ordem& p);
};

class Familia : public Ordem
{
private:
    string nomeFamilia;

public:
    void setNomeFamilia(string nomeFamilia);
    string getNomeFamilia(void);
    friend ostream& operator<<(ostream& os, const Familia& p);
	friend istream& operator>>(istream& is, Familia& p);
};

class Genero : public Familia
{
private:
    string nomeGenero;

public:
    void setNomeGenero(string nomeGenero);
    string getNomeGenero(void);
    friend ostream& operator<<(ostream& os, const Genero& p);
	friend istream& operator>>(istream& is, Genero& p);
};

class Especie : public Genero
{
private:
    string nomeEspecie;

public:
    void setNomeEspecie(string nomeEspecie);
    string getNomeEspecie(void);
    friend ostream& operator<<(ostream& os, const Especie& p);
	friend istream& operator>>(istream& is, Especie& p);
};

class Animal_Planta : public Especie
{
private:
    bool extincao;
    int regiao;

public:
    void setExtincao(bool extincao);
    void setRegiao(int regiao);

    bool getExtincao(void);
    int getRegiao(void);
};

#endif
/*
void setCadastroAnimal(Reino nomeReino, Filo nomeFilo, Classe nomeClasse, Ordem nomeOrdem, Familia nomeFamilia, Genero nomeGenero, Especie nomeEspecie);
    string getCadastroAnimal();
*/
