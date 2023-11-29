#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main() {
list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
stack<float, list<float>> pila(lista);

while(!pila.empty()) {
cout << pila.top() << endl;
pila.pop();
}
return 0;
}