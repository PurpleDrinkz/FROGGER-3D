#include "stdafx.h"
#include "TacomaCompleta.h"
#include "Chasis.h"
#include "Llantas.h"

void TacomaCompleta::dibujar() {
	chasis->dibujar();
	llantas->dibujar();
}

void TacomaCompleta::mover(int direccion) {
	if (direccion == 0) { //mover a la izquierda
		chasis->modelo = translate(chasis->modelo, vec3(-1.0f, 0.0f, 0.0f));
		llantas->modelo = translate(chasis->modelo, vec3(-1.0f, 0.0f, 0.0f));
	}
}