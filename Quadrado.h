#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        float calcularArea();
        void lerAtributos();
        float lado;
};

#endif // QUADRADO_H
