#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"


class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        void lerAtributos();
        float calcularArea();
        float raio;
};

#endif // CIRCULO_H
