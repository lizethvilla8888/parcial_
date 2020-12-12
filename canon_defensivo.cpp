#include "canon_defensivo.h"

float canon_defensivo::getPosicion_inicial_x_canon_defensivo() const
{
    return posicion_inicial_x_canon_defensivo;
}

void canon_defensivo::setPosicion_inicial_x_canon_defensivo(float value)
{
    posicion_inicial_x_canon_defensivo = value;
}

float canon_defensivo::getPosicion_inicial_y_canon_defensivo() const
{
    return posicion_inicial_y_canon_defensivo;
}

void canon_defensivo::setPosicion_inicial_y_canon_defensivo(float value)
{
    posicion_inicial_y_canon_defensivo = value;
}

void canon_defensivo::imprimir_resultados()
{
    cout << "impacto posicion x canon defensivo; "<< x <<endl;
    cout << "impacto posicion y canon defensivo; "<< y <<endl;
    cout << "impacto velocidad inicial canon defensivo; "<< velocidad_inicial_x_canon_defensivo<<endl;
    cout << "impacto angulo canon defensivo; "<< angulo_canon_defensivo <<endl;
    cout << "tiempo de impacto canon defensivo; "<< tiempo_canon_defensivo<<endl;

}

canon_defensivo::canon_defensivo()
{

}
