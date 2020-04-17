#include <cmath>
#include <iostream>
#include <map>

using namespace std;

bool seIntersectan(double x1, double y1, double r1, double x2, double y2, double r2) {
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double sumaRadios = r1 + r2;

    if (distancia - sumaRadios > 0) {
        return false;
    } else {
        return true;
    }
}

string comprimir(string input) {
    map<char, int> contador;
    for (size_t i = 0; i < input.size(); i++) {
        if (contador.find(input[i]) == contador.end()) {
            contador[input[i]] = 1;
        } else {
            contador[input[i]] = contador[input[i]] + 1;
        }
    }

    string output = "";
    for (map<char, int>::iterator it = contador.begin(); it != contador.end(); ++it) {
        output += it->first + it->second;
    }
    return output;
}

int main() {
    cout << comprimir("wwwwwaaadexxxxxxx");
    return 0;
}