#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <iostream>
#include <vector>
#include <string>
# include <fstream>

using namespace std;

void holaModuloVectores ();

//Ejercicio 1
bool divide (vector < int >v, int a);
// Dados un vector v y un int a, decide si a divide a todos los numeros de v.

//Ejercicio 2
int mayor (vector < int >v);
// Dado un vector v, devuelve el valor maximo encontrado.

//Ejercicio 3
vector < int >reverso (vector < int >v);
// Dado un vector v, devuelve el reverso.

//Ejercicio 4
vector < int >rotar (vector < int >v, int k);
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].

//Ejercicio 5
bool estaOrdenado(vector<int> v);
//Dado un vector v de enteros no repetidos, devuelve verdadero si el mismo está ordenado 
//(ya sea creciente o decrecientemente).

//Ejercicio 6
vector < int >factoresPrimos (int n);
// Dado un entero devuelve un vector con los factores primos del mismo

//Ejercicio 7
void mostrarVector (vector < int >v);
// Dado un vector de enteros muestra por la salida estC!ndar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]

// Y aca van todos los otros headers de los ejercicios del laboratorio
vector <int>leerVector(string nombreArchivo);

void guardarVector(vector<int> v, string nombreArchivo);

int elementoMedio(vector<int>v);

void cantApariciones(string nombreArchivo);

int cantidadAparicionesDePalabra(string nombreArchivo, string palabra);

void promedio(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);

void ordenarSecuencias(string nombreArchivoIn1, string nombreArchivoIn2, string nombreArchivoOut);

vector<int> interseccion();
#endif
