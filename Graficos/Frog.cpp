#include "stdafx.h"
#include "Frog.h"

Frog::Frog() {
	
	// Inicia rostro de frogger TRIANGLES
	//1
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//2
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//3
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//4
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//5
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//6
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//7
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//8
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	// Finaliza rostro de frogger


	// Inicia rostro trasero de frogger
	//1
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//2
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//3
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//4
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//5
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//6
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//7
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//8
	cuadrado->vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.0f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	// Finaliza rostro trasero de frogger

	//Union de  las caras de frogger
	// 8 1
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	// 5 4

	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//2
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//7
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//6
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//3
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza union d las caras de frogger

	// ojo 1
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//ojo 2
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//inicializa cuerpo
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//finaliza cuerpo

	//inicializa cuerpo atras
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//finaliza cuerpo atras

	//Inicializa union de cuerpo
	// 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//2
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//3
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//4
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicializa pata delantera 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata delantera 1

	// Inicia Union de pata delantera 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO delantera ///
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano 1 //
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });


	// Finaliza Union de  pata delantera 1

	//Inicializa pata delantera 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata delantera 1

	// Inicia Union de pata delantera 2
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO delantera ///
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano 2 //
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });


	// Finaliza Union de  pata delantera 2

	//Inicializa pata trasera 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata trasera 1

	// Inicia Union de pata trasera 1
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f), vec4((float(rand() % 101)) / 100, (float(rand() % 101)) / 100, (float(rand() % 101)) / 100, 1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO trasera ///
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano trasera 1 //
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });


	// Finaliza Union de  pata trasera 1

	//Inicializa pata trasera 2
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata trasera 2

	// Inicia Union de pata trasera 2
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO trasera 2 ////
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO trasera 2 ///
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano trasera 2 //
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });


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