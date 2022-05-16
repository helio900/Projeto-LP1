#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        float calcularArea();
        void lerAtributos();
        float altura;
        float base;

};

#endif // TRIANGULO_H
