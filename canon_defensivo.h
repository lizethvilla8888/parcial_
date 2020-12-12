#ifndef CANON_DEFENSIVO_H
#define CANON_DEFENSIVO_H


class canon_defensivo
{
    float  posicion_x_canon_defensivo; //x
    float  posicion_y_canon_defensivo; //x
    float  posicion_inicial_x_canon_defensivo;//xo
    float  posicion_inicial_y_canon_defensivo;//xo
    float  velocidad_inicial_x_canon_defensivo;
    float  velocidad_inicial_y_canon_defensivo;
    float  tiempo_canon_defensivo;
    float angulo_canon_defensivo;
    float gravedad = 9.81;
    float distancia;
    float rango_destrucion_canon_defesivo = distancia*0.05;

public:
    canon_defensivo();
};

#endif // CANON_DEFENSIVO_H
