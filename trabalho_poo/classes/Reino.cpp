#include "Reino.hpp"
#include <iostream>
#include <string>
using namespace std;

void Reino::definirNomeReino(string nome){
    NomeReino = nome;
}

void Reino::CriaReino(){
    Reino Reino1;
    Reino1.definirNomeReino("Animalia");
    Reino Reino2;
    Reino2.definirNomeReino("Fungi");
    Reino Reino3;
    Reino3.definirNomeReino("Plantae");
    Reino Reino4;
    Reino4.definirNomeReino("Protista");
    Reino Reino5;
    Reino5.definirNomeReino("Monera");
}
