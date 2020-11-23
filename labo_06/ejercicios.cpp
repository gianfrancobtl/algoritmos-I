#include "ejercicios.h"


// Ejercicio 1
bool existePico(vector<int> v){
    bool hayPico = false;
    for (int i = 1; i < v.size() - 1; i++){
        if ( v[i] > v[i - 1] && v[i] > v[i + 1])
            hayPico = true;
    }
    return hayPico;
}

// Ejercicio 2
int mcd(int m, int n){
	return 0;
}

// Ejercicio 3
int indiceMinSubsec(vector<int> v, int l, int r){
    int min = l;
	for (int i = l; i <= r; i++){
	    if (v[i] < v[min])
	        min = i;
	}
	return min;
}

// Ejercicio 4
void ordenar1(vector<int>& v){
    for (int i = 0; i < v.size(); i++){
        int li = indiceMinSubsec(v, i, v.size() - 1);
        int pre = v[i];
        v[i] = v[li];
        v[li] = pre;
    }
}

// Ejercicio 5
void ordenar2(vector<int>& v){
	return;
}

// Ejercicio 6
tuple<int,int> division(int n, int d){
	return make_tuple(0,0);
}
