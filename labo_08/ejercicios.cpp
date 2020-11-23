#include "ejercicios.h"

vector<vector<int> > productoVectorial(vector<int> u, vector<int> v){
	vector<vector<int>> res(u.size(), vector<int>(v.size(), 0));
	
	for (int i = 0; i < u.size(); i++){
	    for (int j = 0; j < v.size(); j++){
	        res[i][j] = u[i] * v[j];
	    }
	}
	return res;
}

void trasponer(vector<vector<int> > &m) {
    int cantColumnas = m[0].size();
    int cantFilas = m.size();
    
	vector<vector<int>> res(cantColumnas, vector<int>(cantFilas, 0));
	
	for (int i = 0; i < cantColumnas; i ++){
	    for (int j = 0; j < cantFilas; j ++){
	        res[i][j] = m[j][i];
	    }
	}
	
	m = res;
}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	int cantFilas = m1.size();
    int cantColumnas = m2[0].size();
	
	vector<vector<int>> res(cantFilas, vector<int>(cantColumnas, 0));
	
	for (int i = 0; i < cantFilas; i ++){
	    for (int j = 0; j < cantColumnas; j ++){
	        for (int k = 0; k < m2.size(); k ++){
	            res[i][j] += m1[i][k] * m2[k][j];
	        }
	    }
	}
	
	return res;
}

int promedioVecinos (vector<vector<int>> m, int i, int j){
    int sumaVecinos = 0;
    int cantidadVecinos = 0;
    for (int k = i - 1; k <= i + 1; k ++){
        for (int l = j - 1; l <= j + 1; l ++){
            if (k >= 0 && l >= 0 && k < m.size() && l < m[0].size()){
                sumaVecinos += m[k][l];
                cantidadVecinos += 1;
            }
        }
    }
    return sumaVecinos/cantidadVecinos;
}

vector<vector<int> > promediar(vector<vector<int> > m){
    int cantFilas = m.size();
    int cantColumnas = m[0].size();

	vector<vector<int> > res(cantFilas, vector<int>(cantColumnas, 0));
	
	for (int i = 0; i < cantFilas; i ++){
	    for (int j = 0; j < cantColumnas; j ++){
	        res[i][j] = promedioVecinos (m, i, j);
	    }
	}
	return res;
}

bool esPico (vector<vector<int>> m, int i, int j){
    bool esPico = true;
    for (int k = i - 1; k <= i + 1; k ++){
        for (int l = j - 1; l <= j + 1; l ++){
            if (k >= 0 && l >= 0 && k < m.size() && l < m[0].size()){
                if (m[i][j] < m[k][l])
                    esPico = false;
            }
        }
    }
    return esPico;
}

int contarPicos(vector<vector<int> > m){
    int cantFilas = m.size();
    int cantColumnas = m[0].size();
    int cantidadPicos = 0;
    
    for (int i = 0; i < cantFilas; i ++){
	    for (int j = 0; j < cantColumnas; j ++){
	        cantidadPicos += esPico(m, i, j) ? 1 : 0;
	    }
	}
	
	return cantidadPicos;
}

bool esTriangularSuperior(vector<vector<int> > m){
    int cantColumnas = m[0].size();
    int cantFilas = cantColumnas;
    bool esTriangularSuperior = true;
    
    for (int i = 0; i < cantFilas; i ++){
	    for (int j = i + 1; j < cantColumnas; j ++){
	        if (m[i][j] != 0)
	            esTriangularSuperior = false;
	    }
	}
	return esTriangularSuperior;
}

bool esTriangularInferior(vector<vector<int> > m){
    int cantColumnas = m[0].size();
    int cantFilas = cantColumnas;
    bool esTriangularInferior = true;
    
    for (int i = 1; i < cantFilas; i ++){
	    for (int j = 0 ; j < i; j ++){
	        if (m[i][j] != 0)
	            esTriangularInferior = false;
	    }
	}
	return esTriangularInferior;
}

bool esTriangular(vector<vector<int>> m){
	if (esTriangularSuperior (m) || esTriangularInferior (m))
	    return true;
	else
	    return false;
}

bool hayAmenaza(vector<vector<int> > m){
    int cantFilas = m.size();
    int cantColumnas = m[0].size();
    bool existeAmenaza = false;
    vector<vector<int>> posicionesReina;
    
    for (int i = 0; i < cantFilas; i ++){
	    for (int j = 0 ; j < cantColumnas; j ++){
	        vector<int> u = {i,j};
	        if (m[i][j])
	            posicionesReina.push_back(u);
	    }
	}
	
	for (int i1 = 0; i1 < posicionesReina.size(); i1 ++){
        int j1 = posicionesReina[i1][1];
        for (int i2 = 0; i2 < posicionesReina.size(); i2 ++){
            int j2 = posicionesReina[i2][1];
            if ((i1 != i2 || j1 != j2) && (i1 == i2 || j1 == j2 || abs(i1 - i2) == abs(j1 - j2)))
                return true;
        }
	}
    
}

int diferenciaDiagonales(vector<vector<int> > m) {
    //COMPLETAR
    return 0;
}