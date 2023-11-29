#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <valarray>
#include <memory>

using namespace std;

int main() {

//Ejercicio 1
cout << "\n";
cout << "Ejercicio 1: " << endl;
    vector<int> numeros = {10, 20, 30, 40, 50};

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }
    cout << "\n";

//Ejercicio 2
cout << "Ejercicio 2:" << endl;

    list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<float, list<float>> pila(lista);

    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }
    cout << "\n";

//Ejercicio 3
cout << "Ejercicio 3:" << endl;
vector<int> numeros1 = {50, 20, 60, 10, 30, 40};
    sort(numeros1.begin(), numeros1.end());

    for(vector<int>::iterator it = numeros1.begin(); it != numeros1.end(); ++it) {
        cout << *it << endl;
    }
    int maxNum = *max_element(numeros1.begin(), numeros1.end());
    cout << "El numero maximo es: " << maxNum << endl;
    cout << "\n";

    //Ejercicio 4
    cout << "Ejercicio 4:" << endl;
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "El valor de la suma es:" << valores.sum() << endl;
    cout << "El valor de la media es:" << valores.sum() / valores.size() << endl;

    valores +=5.0;

    cout << "Valores + 5.0: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;
    cout << "\n";

    //Ejercicio 5
    cout << "Ejercicio 5:" << endl;

    auto cuadrado = [](int x) { return x * x; };
    cout << "El cuadrado de 5 es: " << cuadrado(5) << endl;

    vector<int> numeros2 = {1, 2, 3, 4, 5};
    for_each(numeros2.begin(), numeros2.end(), [](int x) { cout << x * x << endl; });

    shared_ptr<int> ptr(new int(10));
    cout << "El valor apuntado por ptr es: " << *ptr << endl;
    cout << "\n";

    //Ejercicio 6
    cout << "Ejercicio 6:" << endl;


    return 0;
}

