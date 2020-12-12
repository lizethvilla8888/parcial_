#ifndef CANON_DEFENSIVO_H
#define CANON_DEFENSIVO_H

#include <iostream>
#include <math.h>

#include "canon_ofensivo.h"

using namespace std;

class canon_defensivo
{
    float  posicion_x_canon_defensivo; //x
    float  posicion_y_canon_defensivo; //x
    float  posicion_inicial_x_canon_defensivo;//xo
    float  posicion_inicial_y_canon_defensivo;//xo
    float  velocidad_inicial_x_canon_defensivo;
    float  velocidad_inicial_y_canon_defensivo;
    float velocidad_inicial_canon_defensivo;
    float x,y; // donde esplota
    float  tiempo_canon_defensivo;
    float angulo_canon_defensivo;
    float gravedad = 9.81;
    float distancia;
    float rango_destrucion_canon_defesivo = distancia*0.05;

public:
    canon_defensivo();
    canon_defensivo(float );

    float getPosicion_inicial_x_canon_defensivo() const;
    void setPosicion_inicial_x_canon_defensivo(float value);

    float getPosicion_inicial_y_canon_defensivo() const;
    void setPosicion_inicial_y_canon_defensivo(float value);

    float getVelocidad_inicial_canon_defensivo() const;
    void setVelocidad_inicial_canon_defensivo(float value);

     void imprimir_resultados();
     float getAngulo_canon_defensivo() const;
     void setAngulo_canon_defensivo(float value);

     float getDistancia() const;
     void setDistancia(float value);
};

#endif // CANON_DEFENSIVO_H
