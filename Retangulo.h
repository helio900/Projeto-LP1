#ifndef RETANGULO_H
#define RETANGULO_H
#include "FiguraGeometrica.h"


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        float calcularArea();
        void lerAtributos();
        float ladoMaior;
        float ladoMenor;
};

#endif // RETANGULO_H
