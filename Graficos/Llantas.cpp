#include "stdafx.h"
#include "Chasis.h"
#include "Llantas.h"

Llantas::Llantas() {

	//Llantas TRIANGLES
	//Llanta trasera derecha
	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior
	llanta->vertices.push_back({ vec4(0.52f, 1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior
	llanta->vertices.push_back({ vec4(0.52f, -1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior


																																												//Llanta trasera izquierda
	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior
	llanta->vertices.push_back({ vec4(-0.52f, 1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, -1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior
	llanta->vertices.push_back({ vec4(-0.52f, -1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -1.0f / 2.5f, 0.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 1.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior



																																												 //Llanta delantera derecha

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior
	llanta->vertices.push_back({ vec4(0.52f, 1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, 0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior
	llanta->vertices.push_back({ vec4(0.52f, -1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda

	llanta->vertices.push_back({ vec4(0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(0.52f, -1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda
	llanta->vertices.push_back({ vec4(0.52f, -0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior

																																												//Llanta delantera izquierda

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha Superior
	llanta->vertices.push_back({ vec4(-0.52f, 1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, 0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Derecha inferior
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 3.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });//Izquierda inferior
	llanta->vertices.push_back({ vec4(-0.52f, -1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda

	llanta->vertices.push_back({ vec4(-0.52f, 0.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// centro
	llanta->vertices.push_back({ vec4(-0.52f, -1.0f / 2.5f, 4.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda
	llanta->vertices.push_back({ vec4(-0.52f, -0.5f / 2.5f, 5.0f / 2.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });// Izquierda superior


	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));


	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));




	//Aqui sigue el mapa UV
}