#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
vector<int> numeros1 = {50, 20, 60, 10, 30, 40};
sort(numeros1.begin(), numeros1.end());

for(vector<int>::iterator it = numeros1.begin(); it != numeros1.end(); ++it) {
cout << *it << endl;
}
int maxNum = *max_element(numeros1.begin(), numeros1.end());
cout << "El numero maximo es: " << maxNum << endl;
    return 0;
}