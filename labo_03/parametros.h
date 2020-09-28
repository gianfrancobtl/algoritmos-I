#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <iostream>
#include <math.h>

using namespace std;

int analizaExamenes ();

int analizaExamenesConCentinela ();

int analizaExamenesConCentinelaYContadores ();

float triplicarPorValor (int n);

void triplicarPorReferencia (float &n);

void swap(int& a, int& b);

void collatz(int n, int& cantPasos);

void division(int dividendo, int divisor, int& cociente, int& resto);

#endif