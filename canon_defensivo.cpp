#include "canon_defensivo.h"

canon_defensivo::canon_defensivo()
{

}

canon_defensivo::canon_defensivo(float d, float Ho, float Xo, float Yo, float d0, float a, float Vxo, float Vyo, float Vi)
{
    distancia = d;
    posicion_x_canon_defensivo = Ho;
    posicion_inicial_x_canon_defensivo = Xo;
    posicion_inicial_y_canon_defensivo = Yo;
    //d0
    angulo_canon_defensivo = a;
    velocidad_inicial_x_canon_defensivo = Vxo;
    velocidad_inicial_y_canon_defensivo = Vyo;
    velocidad_inicial_canon_defensivo = Vi;
}

void canon_defensivo::ingresar_datos()
{
    cout << "Datos canon defensivo  \n\n";

    cout << "Ingrese angulo de disparo: "<<endl;
    cin >> angulo_canon_defensivo;

    cout << "Ingrese velocidad inicial de disparo"<<endl;
    cin >> velocidad_inicial_canon_defensivo;

    cout << "Ingrese distancia entre los canones"<<endl ;
    cin >> distancia;

}

void canon_defensivo::imprimir_resultados()
{
    cout << "impacto posicion x canon defensivo; "<< x <<endl;
    cout << "impacto posicion y canon defensivo; "<< y <<endl;
    cout << "impacto velocidad inicial canon defensivo; "<< velocidad_inicial_x_canon_defensivo<<endl;
    cout << "impacto angulo canon defensivo; "<< angulo_canon_defensivo <<endl;
    cout << "tiempo de impacto canon defensivo; "<< tiempo_canon_defensivo<<endl;
}

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


float canon_defensivo::getVelocidad_inicial_canon_defensivo() const
{
    return velocidad_inicial_canon_defensivo;
}

void canon_defensivo::setVelocidad_inicial_canon_defensivo(float value)
{
    velocidad_inicial_canon_defensivo = value;
}

float canon_defensivo::getAngulo_canon_defensivo() const
{
    return angulo_canon_defensivo;
}

void canon_defensivo::setAngulo_canon_defensivo(float value)
{
    angulo_canon_defensivo = value;
}

float canon_defensivo::getDistancia() const
{
    return distancia;
}

void canon_defensivo::setDistancia(float value)
{
    distancia = value;
}


