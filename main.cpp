#include <iostream>
#include <Quadrado.h>
#include <Retangulo.h>
#include <Triangulo.h>
#include <Circulo.h>
#include <FiguraGeometrica.h>

using namespace std;

int main()
{
    int type = 1;

    Triangulo tri;

    Quadrado quad;

    Retangulo ret;

    Circulo circ;

    while(type != 0){
        cin >> type;

        switch(type){
            case 1:
                quad.lerAtributos();
                cout << "Quadrado de área " << quad.calcularArea() << endl;
                break;
            case 2:
                ret.lerAtributos();
                cout << "Retângulo de área " << ret.calcularArea() << endl;
                break;
            case 3:
                tri.lerAtributos();
                cout << "Triângulo de área " << tri.calcularArea() << endl;
                break;
            case 4:
                circ.lerAtributos();
                cout << "Círculo de área " << circ.calcularArea() << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
