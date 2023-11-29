#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

int main() {

    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }


    list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<float, list<float>> pila(lista);

    while (!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }
    
    return 0;
}