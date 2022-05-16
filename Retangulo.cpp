#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo()
{
    FiguraGeometrica(2);
}

float Retangulo::calcularArea()
{
    return ladoMaior*ladoMenor;
}

void Retangulo::lerAtributos()
{
    cin >> ladoMaior;
    cin >> ladoMenor;
}
