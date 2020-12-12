#include "canon_ofensivo.h"

canon_ofensivo::canon_ofensivo()
{

}

void canon_ofensivo::imprimir_resultados_ofensivo()
{
    cout << "impacto posicion x canon defensivo; "<< x <<endl;
    cout << "impacto posicion y canon defensivo; "<< y <<endl;
    cout << "impacto velocidad inicial canon defensivo; "<< velocidad_x_canon_ofensivo<<endl;
    cout << "impacto angulo canon defensivo; "<< angulo_canon_ofensivo<<endl;
    cout << "tiempo de impacto canon defensivo; "<< tiempo_canon_ofensivo<<endl;
}



float canon_ofensivo::getAngulo_canon_ofensivo() const
{
    return angulo_canon_ofensivo;
}

void canon_ofensivo::setAngulo_canon_ofensivo(float value)
{
    angulo_canon_ofensivo = value;
}

float canon_ofensivo::getVelocidad_inicial_canon_ofensivo() const
{
    return velocidad_inicial_canon_ofensivo;
}

void canon_ofensivo::setVelocidad_inicial_canon_ofensivo(float value)
{
    velocidad_inicial_canon_ofensivo = value;
}

float canon_ofensivo::getDistancia() const
{
    return distancia;
}

void canon_ofensivo::setDistancia(float value)
{
    distancia = value;
}


