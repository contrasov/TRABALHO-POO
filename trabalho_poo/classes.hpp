#include <string>

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
};

class Filo : public Reino
{
private:
    string nomeFilo;

public:
    void setNomeFilo(string nomeFilo);
    string getNomeFilo(void);
};

class Classe : public Filo
{
private:
    string nomeClasse;

public:
    void setNomeClasse(string nomeClasse);
    string getNomeClasse(void);
};

class Ordem : public Classe
{
private:
    string nomeOrdem;

public:
    void setNomeOrdem(string nomeOrdem);
    string getNomeOrdem(void);
};

class Familia : public Ordem
{
private:
    string nomeFamilia;

public:
    void setNomeFamilia(string nomeFamilia);
    string getNomeFamilia(void);
};

class Genero : public Familia
{
private:
    string nomeGenero;

public:
    void setNomeGenero(string nomeGenero);
    string getNomeGenero(void);
};

class Especie : public Genero
{
private:
    string nomeEspecie;

public:
    void setNomeEspecie(string nomeEspecie);
    string getNomeEspecie(void);
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
