#include "Circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo()
{
    FiguraGeometrica(4);
}

float Circulo::calcularArea()
{
    return 3.14*(raio*raio);
}

void Circulo::lerAtributos()
{
    cin >> raio;
}
