#include "parametros.h"


//Ejercicio 1:
int analizaExamenes (){
    int sumaNotas = 0;
    for (int i = 0; i < 10; i++){
        int n;
        cin >> n;
        
        sumaNotas += n;
    }
    return sumaNotas;
}

//Ejercicio 2:
int analizaExamenesConCentinela (){
    float sumaNotas = 0;
    int vueltas = 0;
    int n;
    while (n != -1){
        cout << "Ingrese la nota (-1 para terminar):" << endl;
        cin >> n;
        sumaNotas += n;
        vueltas += 1;
    }
    cout << "La suma es " << sumaNotas << " y el promedio es " << sumaNotas / vueltas << endl;
}

//Ejercicio 3:
int analizaExamenesConCentinelaYContadores (){
    int n;
    float aprobados;
    float desaprobados;
    
    while (n != -1){
        cout << "Ingrese la nota (-1 para terminar):" << endl;
        cin >> n;
        if (n > 6){
            aprobados += 1;
        } else if (n <= 6 && n != -1) {
            desaprobados += 1;
        }
        //cout << aprobados << "  " << desaprobados << "  " << (aprobados / (aprobados + desaprobados)) << endl;;
    }
    
    aprobados;
    desaprobados;
    
    if (aprobados + desaprobados < 6) {
        cout << "Usted ha ingresado menos de 6 valores." << endl;
    } else if ((aprobados / (aprobados + desaprobados)) > (0.6667)) {
        cout << "Usted puede aumentar el número de plazas en el curso pues el porcentaje de aprobados fue del " << 100 * ( aprobados / (aprobados + desaprobados)) << "%" << endl;
    } else {
        cout << "El porcentaje de aprobación fue del " << 100 * (aprobados / (aprobados + desaprobados)) << "%" << endl;
    }
}


//Ejercicio 6: triplicar por valor y referencia.
float triplicarPorValor (int n) {
    n *= 3;
    return n;
}

void triplicarPorReferencia (float &n) {
    n *= 3;
}

//Ejercicio 7:
void swap(int& a, int& b){
    a = a + b;
    b = a - b;
    a = a - b;
}

//Ejercicio 8:
void collatz(int n, int& cantPasos) {
    cout << "La sucesión de Collatz es " << endl;
    for (cantPasos; n != 1; cantPasos++){
        if (n % 2 == 0){
            n /= 2;
        } else {
            n = 3*n + 1;
        }
        cout << n << " ";
    }
}

// Ej 8 con ciclo while:
// void collatz(int n, int& cantPasos) {
//     cout << "La sucesión es " << endl;
//     while (n != 1){
//         if (n%2 == 0){
//             n /= 2;
//         } else {
//             n = 3*n + 1;
//         }
//         cantPasos += 1;
//     }
// }

void division(int dividendo, int divisor, int& cociente, int& resto){
    int dividendoMomentaneo = dividendo;
    cociente = 0;
    
    while ( dividendoMomentaneo > divisor ) {
        dividendoMomentaneo -= divisor;
        cociente += 1;
    }
    
    resto = dividendoMomentaneo;
}
