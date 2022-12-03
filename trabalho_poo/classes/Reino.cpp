#include "Reino.hpp"
#include <iostream>
#include <string>
using namespace std;

void Reino::definirNomeReino(string nome)
{
    NomeReino = nome;
}

void Reino::CriaReino()
{
    Reino Reino1, Reino2, Reino3, Reino4, Reino5;
    Reino1.definirNomeReino("Animalia");
    Reino2.definirNomeReino("Fungi");
    Reino3.definirNomeReino("Plantae");
    Reino4.definirNomeReino("Protista");
    Reino5.definirNomeReino("Monera");
}
