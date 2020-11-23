#include "ejercicios.h"

using namespace std;

vector<string> split(string s, char delim){
    vector<string> v;
    int inicial = 0;
    int longString = 0;
    for (int i = 0; i < s.size(); i ++){
        if (s[i] == delim && i == 0){
            while (s[i] == delim){
                inicial ++;
                i ++;
            }
        }
        if (s[i] == delim){
            v.push_back(s.substr(inicial, longString));
            longString = - 1;
            int j = i;
            while (s[j] == delim){
                j ++;
            }
            inicial = j;
            i = j - 1;
        } else if (i == s.size() - 1){
            longString ++;
            v.push_back(s.substr(inicial, longString));
        }
        longString ++;
    }
	return v;
}

string darVueltaPalabra(string s){
	string res;
	vector<string> v = split(s, ' ');
	if (v.size() > 0){
        for (int i = v.size() - 1; i >= 0; i --){
            res.append(v[i] + ' ');
        }
        res.resize(res.length() - 1);
	}
	return res;
}

// Decidir si s1 es substring o subsecuencia de s2
bool subsecuencia(string s1, string s2) {
	int cont = s1.size();
	if (s2.size() >= s1.size()){
        int i = 0;
        int j = 0;
        while (i < s1.size()){
            while (j < s2.size()){
                if (s1[i] == s2[j]){
                    cont --;
                    i ++;
                }
                j ++;
            }
            i ++;
        }
	}
	return cont == 0;
}

bool esAnagrama (string res, string s){
    vector<int> contarRes (26, 0);
    vector<int> contarS (26, 0);
    for (char re : res){
        int k = re - 97;
        contarRes[k] ++;
    }
    for (char j : s){
        int k = j - 97;
        contarS[k] ++;
    }
    return contarRes == contarS;
}

bool hayAnagramaDelString (string s, vector<vector<string>> res, int &indiceI, int &indiceJ){
    bool resp = false;
    int i = 0;
    while (i < res.size()){
        if (esAnagrama(res[i][0], s)){
            resp = true;
            indiceI = i;
            indiceJ = res[i].size();
        }
        i ++;
    }
    return resp;
}

// Mismo orden relativo de conjunto de anagramas y dentro de cada vector y con repetidos
vector<vector<string> > agruparAnagramas(vector<string> v){
	vector<vector<string>> res;
	int i = 0;
	while (i < v.size()){
	    int indiceI, indiceJ;
	    if (hayAnagramaDelString (v[i], res, indiceI, indiceJ)){
	        res[indiceI].push_back(v[i]);
	    } else {
	        vector<string> primer (1, v[i]);
	        res.push_back(primer);
	    }
	    i ++;
	}
	return res;
}

bool esPalindromo(string s){
	bool cumple = true;
	for (int i = 0; i < s.size() / 2; i ++){
	    if (s[i] != s[s.size() - 1 - i])
	        cumple = false;
	}
	return cumple;
}

bool tieneRepetidos(string s){
	bool distinto = true;
    vector<int> contar (26, 0);
    for (char str : s){
        int k = str - 97;
        contar[k] ++;
        if (contar[k] > 1)
            distinto = false;
    }
	return !distinto;
}

string rotar(string s, int j){
	string res(s);
	while (j > s.size())
	    j -= s.size();
	for (int i = 0; i < s.size(); i ++){
	    res[i] = s[(s.size() - j + i) % s.size()];
	}
	return res;
}

// no se puede usar substring
string darVueltaK(string s, int k){
	string res(s);
	return res;
}

string abueloLaino(string s){
    string res;
    return res;
}

int cantidadDeFelicitaciones(vector<string> v){
    int res;
    return res;
}

int middleOut(string s, string t){

    return 0;
}
