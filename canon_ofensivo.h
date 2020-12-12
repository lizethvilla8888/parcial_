#ifndef CANON_OFENSIVO_H
#define CANON_OFENSIVO_H

#include <math.h>
#include <iostream>

#include "canon_defensivo.h"

using namespace std;

class canon_ofensivo
{
    float  posicion_x_canon_ofensivo; //x
    float  posicion_y_canon_ofensivo; //x
    float  posicion_inicial_x_canon_ofensivo;//xo
    float  posicion_inicial_y_canon_ofensivo;//xo
    float  velocidad_x_canon_ofensivo;
    float  velocidad_y_canon_ofensivo;
    float  velocidad_inicial_canon_ofensivo;
    float  tiempo_canon_ofensivo;
    float angulo_canon_ofensivo;
    float distancia;
    float rango_destrucion_canon_ofensivo = distancia*0.5;
    float gravedad = 9.81;
    float x,y;


public:
    canon_ofensivo();
    canon_ofensivo (float d, float Ho, float Xo, float Yo, float d0, float a, float Vxo, float Vyo, float V);
    ~canon_ofensivo();

    void imprimir_resultados_ofensivo ();

    float getAngulo_canon_ofensivo() const;
    void setAngulo_canon_ofensivo(float value);

    float getVelocidad_inicial_canon_ofensivo() const;
    void setVelocidad_inicial_canon_ofensivo(float value);

    float getDistancia() const;
    void setDistancia(float value);
};

#endif // CANON_OFENSIVO_H
