#pragma once


#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"
#include "Llantas.h"
#include "Chasis.h"
//incluir todas las librerias necesarias

class TacomaCompleta {
public:
	Llantas *llantas;
	Chasis *chasis;

	vec3 coordenadas;
	float angulo;

	void mover(int direccion);
	void dibujar();

};
