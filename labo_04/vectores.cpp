#include "vectores.h"

using namespace std;

// Función para probar en main.cpp si este módulo fue cargado correctamente
void holaModuloVectores(){
    cout << "El módulo vectores fue cargado correctamente" << endl;
}

// Dados un vector v y un entero a, decide si a divide a todos los elementos de v.
bool divide(vector<int> v, int a){
    int centinela = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] % a != 0){
            centinela ++;
        }
    }
    
    if (centinela > 0){
        cout << false;
    } else {
        cout << true;
    }
}

//Ejercicio
// Dado un vector v, devuelve el valor maximo encontrado.
int mayor(vector<int> v){
    int mayor = 0;
    for (int i = 0; i < v.size(); i ++){
        if (v[i] > mayor){
            mayor = v[i];
        }
    }
    cout << mayor << endl;
}

//Ejercicio
// Dado un vector v, devuelve el reverso.
vector<int> reverso(vector<int> v){
	vector<int> reverso;
	for (int i = 1; i <= v.size(); i ++){
	    int pos = v.size()-i;
	    reverso.push_back(v[pos]);
	}
	
	return reverso;
	//for (int i = 0; i < reverso.size(); i ++)
	//    cout << " " << reverso[i];
	//cout << endl;
}

// Ejercicio
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(vector<int> v, int k){
	vector<int> rotado;
	int ref = k;
	
	if (k > v.size()) {
	    cout << "Usted ha ingresado una posición inválida." << endl;
	} else {
	    while (k < v.size()){
	        for (int i = 0; i <= v.size() - k; i++){
	            int pos = k;
	            rotado.push_back(v[pos]);
	            k ++;
	        }
	    }
	    k = 0;
	    for (int i = 0; i < ref; i++) {
	        rotado.push_back (v[k]);
	        k ++;
	    }
	}
	return rotado;
	
	//for (int i = 0; i < rotado.size(); i++)
	//    cout << " " << rotado[i];
	//cout << endl;
}

bool ordenCreciente (vector<int> v){
    int antecedente = v[0];
    for (int i = 1; i < v.size(); i++){
        if (v[i] < antecedente){
            return false;
        } else {
            antecedente = v[i];
        }
    }
    return true;
}

bool ordenDecreciente (vector<int> v){
    int antecedente = v[0];
    for (int i = 1; i < v.size(); i++){
        if (v[i] > antecedente){
            return false;
        } else {
            antecedente = v[i];
        }
    }
    return true;
}

bool estaOrdenado(vector<int> v){
    bool esDecreciente = ordenDecreciente (v);
    bool esCreciente = ordenCreciente (v);
    if (esCreciente || esDecreciente){
        return true;
    } else {
        return false;
    }
}

// Ejercicio
// Que dado un entero devuelve un vector con los factores primos del mismo
vector<int> factoresPrimos(int n){
	vector<int> res;
	int i = 2;
	int n_parcial = n;
	while (i < n && n_parcial != 1){
	    if (n_parcial % i == 0){
	        n_parcial /= i;
	        res.push_back(i);
	    } else {
	        i ++;
	    }
	}
	
	for (int i = 0; i < res.size(); i++)
	    cout << " " << res[i];
	cout << endl;
}

//Ejercicio
// Dado un vector de enteros muestra por la salida estándar, el vector
// Ejemplo: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]
void mostrarVector(vector<int> v){
	int lv = v[v.size() - 1];
	cout << "[";
	for (int i = 0; i < v.size(); i++){
	    cout << v[i];
	    if (v[i] != lv){
	        cout << ", ";	        
	    } else {
	        cout << "]" << endl;
	    }
	}
}

vector<int> leerVector(string leerVector){
    std::ifstream fin;
    fin.open(leerVector);
    vector<int> res;
    
    while ( !fin.eof() ) {
        int a;
        fin >> a;
        res.push_back(a);
    }
    
    return res;
    
}

void guardarVector(vector<int> v, string guardarVector){
    std::ofstream fout;
    fout.open(guardarVector);
    int lv = v[v.size() - 1];
    fout << "[";
	for (int i = 0; i < v.size(); i++){
	    fout << v[i];
	    if (v[i] != lv){
	        fout << ", ";	        
	    } else {
	        fout << "]" << endl;
	    }
	}
}

int elementoMedio(vector<int>v){
    // Suma de todos los elementos.-
    float suma = 0;
    
    for (int i = 0; i < v.size(); i ++){
        suma += v[i];
    }
    
    // También, suma de todos los elementos ("frena" cuando llega al elemento medio).-
    float suma2 = 0;
    
    for (int i = 0; i < v.size(); i ++){
        suma2 += v[i];
        if (suma2 >= (suma/2)){
            return v[i];
        }
    }
}

void cantApariciones(string nombreArchivo){
    
}








