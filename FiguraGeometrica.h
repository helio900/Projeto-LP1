#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(int tipo);
        virtual float calcularArea() = 0;
        virtual void lerAtributos() = 0;
        std::string getNome();

    protected:
        std::string nome;
        int tipo;

    private:
};

#endif // FIGURAGEOMETRICA_H
