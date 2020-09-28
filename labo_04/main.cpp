#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {
    
    // Asignación de variables:
    // Vector:
    vector<int> v;
     v.push_back(9);
     v.push_back(8);
     v.push_back(7);
     v.push_back(6);
     v.push_back(3);
     v.push_back(4);
    
    // Entero:
    //int a;
    //cin >> a;
    
    // funcion para generar automaticamente los archivos numericos
    //generarDatosLaboratorio();
    //holaModuloVectores();
    //divide(v, a);
    //mayor(v);
    //reverso (v);
    //rotar (v,a);
    //cout << estaOrdenado (v) << endl;
    //factoresPrimos (a);
    //mostrarVector (v);

    //leerVector ("leerVector.txt");
    //guardarVector (v, "archivo_punto2.txt");
    int a = elementoMedio (leerVector("elementoMedio.in"));
    cout << a;
    return 0;
}

