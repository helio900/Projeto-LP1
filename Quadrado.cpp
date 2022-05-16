#include "Quadrado.h"
#include <iostream>

using namespace std;

Quadrado::Quadrado()
{
    FiguraGeometrica(1);
}

float Quadrado::calcularArea()
{
    return lado*lado;
}

void Quadrado::lerAtributos()
{
    cin >> lado;
}
