
#include <iostream>


void resuelveCaso() {
    
    int pisos = 0;
    int escalones = 0;
    int complete = 0;
    int add = 0;
    std::cin >> pisos >> escalones >> complete >> add ;

    int total1 = pisos * escalones ;
    int total2 = escalones * complete + add;
    int total3 = total1 + total2 ;

    std::cout << total2 << ' ' << total3 << '\n' ;
    
}

int main() {
    int numCasos;
    std::cin >> numCasos; 
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); 
    }
    return 0;
}
