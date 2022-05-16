#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica()
{
    //ctor
}

FiguraGeometrica::FiguraGeometrica(int tipo)
{
    switch (tipo){
        case 1:
            this->nome = "Quadrado";
            break;
        case 2:
            this->nome = "Retangulo";
            break;
        case 3:
            this->nome = "Triangulo";
            break;
        case 4:
            this->nome = "Circulo";
            break;
        default:
            this->nome = "Indefinido";

    }

}
std::string FiguraGeometrica::getNome()
{
    return nome;
}
