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
                cout << "Quadrado de �rea " << quad.calcularArea() << endl;
                break;
            case 2:
                ret.lerAtributos();
                cout << "Ret�ngulo de �rea " << ret.calcularArea() << endl;
                break;
            case 3:
                tri.lerAtributos();
                cout << "Tri�ngulo de �rea " << tri.calcularArea() << endl;
                break;
            case 4:
                circ.lerAtributos();
                cout << "C�rculo de �rea " << circ.calcularArea() << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
