

#include <iostream>

// Función que trata cada caso de prueba
void resuelveCaso() {
    
    long long int cubo = 0;
    std::cin >> cubo ;

    long long int pop = cubo - 2;

    long long int total = 0;
    total = cubo * cubo * cubo - pop * pop * pop ;

    std::cout << total << '\n' ;
    
}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}
