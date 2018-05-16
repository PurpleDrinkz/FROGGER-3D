// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"

#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

 
#include <iostream>
#include <time.h>

#include "Vertice.h"
#include "Shader.h"
#include "Modelo.h"
#include "Nave.h"
#include "TacomaCompleta.h"

using namespace std;

GLfloat red, green, blue;

GLuint posicionID;
GLuint colorID;
GLuint modeloID;
GLuint vistaID;
GLuint proyeccionID;

GLuint coordenadaUVID;
GLuint samplerImagenID;
GLuint texturaUnoID;
GLuint texturaTacomaID;

mat4 vista;
mat4 proyeccion;

Modelo *cuadrado;
Tacoma *tacoma;

Shader *shader;
//Declaraci�n de ventana
GLFWwindow *window;

//Propiedades de la ventana
GLfloat ancho = 1024;
GLfloat alto = 768;

vec3 posicionCamara;

void actualizarVista() {
	vista = lookAt(posicionCamara, //Posicion de la c�mara
		vec3(0.0f, 0.0f, 0.0f),				//Posici�n del objetivo
		vec3(0.0f, 1.0f, 0.0f));			//Vector hacia arriba (rotaci�n c�mara)
}

void inicializarProyeccion() {
	proyeccion =
		perspective(45.0f, //Campo de visi�n (FoV)
			ancho / alto, //Relaci�n de aspecto (Aspect ratio)
			0.1f, //Near clipping (Desde donde renderea)
			150.0f); //Far clipping (Hasta donde renderea)
}

void actualizar() { 
	int estadoDerecha = glfwGetKey(window,GLFW_KEY_RIGHT);
	if (estadoDerecha == GLFW_PRESS) {
		posicionCamara.x += 0.1;
	}

	int estadoIzquierda = glfwGetKey(window, GLFW_KEY_LEFT );
	if (estadoIzquierda == GLFW_PRESS) {
		posicionCamara.x -= 0.1;
	}

	int estadoEspacio = glfwGetKey(window, GLFW_KEY_SPACE);
	if (estadoEspacio == GLFW_PRESS) {
		tacoma->modelo = translate(tacoma->modelo, vec3(0.0f, 0.0f, 0.1f));
	}

	actualizarVista();
	cuadrado->vista = vista;
	tacoma->vista = vista;
}

void dibujar() {
	
	cuadrado->dibujar(GL_TRIANGLES);
	tacoma->dibujar(GL_QUADS);
}

void inicializarFigura() {
	
}

void inicializarCuadrado() {
	cuadrado = new Modelo();
	srand(time(NULL));
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, -1.0f, 1.0f),vec4((float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4((float(float(rand() % 101))) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4(float(rand() % 101) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, 1.0f, 1.0f),vec4((float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, 1.0f, 1.0f),vec4((float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,(float(float(rand() % 101))) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, 1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vertices.push_back({ vec4(1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	cuadrado->vertices.push_back({ vec4(-1.0f, -1.0f, -1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	cuadrado->vista = vista;
	cuadrado->proyeccion = proyeccion;

	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));

	cuadrado->mapaUV.push_back(vec2(1.0f, 1.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));

	cuadrado->mapaUV.push_back(vec2(0.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(1.0f, 0.0f));
	cuadrado->mapaUV.push_back(vec2(0.0f, 1.0f));
}



int main()
{
	
	

	//Inicializaci�n de GLFW
	if (!glfwInit()) {
		//Si no se inici� bien, terminar la ejecuci�n
		exit(EXIT_FAILURE);
	}

	//Inicializar la ventana
	window = glfwCreateWindow(ancho, alto, "Graficos", NULL, NULL);
	//Verficar si se cre� bien la ventana
	if (!window) {
		//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Termina ejecuci�n
		exit(EXIT_FAILURE);
	}

	//Establecer "window" como contexto
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL Moderno
	glewExperimental = true;
	//Inicializar GLEW
	GLenum glewError = glewInit();
	//Verificar que GLEW se inicializ� bien
	if (glewError != GLEW_OK) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}



	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version de OpenGL: " << version << endl;


	red = green = blue = 0.75f;

	posicionCamara = vec3(3.0f, 5.0f, 9.0f);

	actualizarVista();
	inicializarProyeccion();

	inicializarFigura();
	inicializarCuadrado();

	tacoma = new Tacoma();
	tacoma->vista = vista;
	tacoma->proyeccion = proyeccion;

	//Crear instancia del shader
	const char * rutaVertex = "vShaderSimple.shader";
	const char * rutaFragment = "fShaderSimple.shader";
	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");
	modeloID =
		glGetUniformLocation(shader->getID(), "modelo");
	vistaID =
		glGetUniformLocation(shader->getID(), "vista");
	proyeccionID =
		glGetUniformLocation(shader->getID(), "proyeccion");

	samplerImagenID =
		glGetUniformLocation(shader->getID(), "samplerImagen");
	coordenadaUVID =
		glGetAttribLocation(shader->getID(), "coordenadaUV");

	texturaUnoID =
		Shader::cargarBMP("texturas\\carita.bmp");

	texturaTacomaID =
		Shader::cargarBMP("texturas\\tacoma.bmp");

	//Desenlazar shader
	shader->desenlazarShader();

	
	cuadrado->shader = shader;
	cuadrado->inicializarVertexArray(posicionID, colorID, 
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaUnoID);

	tacoma->shader = shader;
	tacoma->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	
	//Ciclo de dibujo
	while (!glfwWindowShouldClose(window)) {
		//Establecer el area de render (viewport)
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia la pantalla
		glClearColor(red, green, blue, 1);
		//Limpiar la pantalla
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//rutina de dibujo
		actualizar();
		dibujar();

		//Intercambio de buffers
		glfwSwapBuffers(window);
		//Buscar se�ales de entrada
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

