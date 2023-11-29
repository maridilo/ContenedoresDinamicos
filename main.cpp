#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
//Ejercicio 1

    vector<int> numeros = {10, 20, 30, 40, 50};

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }

//Ejercicio 2

    list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<float, list<float>> pila(lista);

    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }

//Ejercicio 3
vector<int> numeros = {50, 20, 60, 10, 30, 40};
    sort(numeros.begin(), numeros.end());

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }
    int maxNum = *max_element(numeros.begin(), numeros.end());
    cout << "El numero maximo es: " << maxNum << endl;

    //Ejercicio 4
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "El valor de la suma es:" << valores.sum() << endl;
    cout << "El valor de la media es:" << valores.sum() / valores.size() << endl;

    valores +=5.0;

    cout << "Valores + 5.0: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;

    //Ejercicio 5

    auto cuadrado 
    return 0;
}

