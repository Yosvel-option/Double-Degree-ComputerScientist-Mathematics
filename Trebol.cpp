
#include <iostream>


void resuelveCaso() {
    
    int hoja = 0;
    std::cin >> hoja ;
    int resto = 0;

    resto = hoja % 3;

    if (resto == 0)
    {
        std::cout << 0 << '\n' ;
    }
    else if (resto != 0 && hoja >= 3 && hoja != 5)
    {
        std::cout << resto << '\n' ;
    }
    else if (hoja < 3 || hoja == 5)
    {
        std::cout << "IMPOSIBLE" << '\n' ;
    }
    
    
    

    
}

int main() {
    int numCasos;
    std::cin >> numCasos; 
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); 
    }
    return 0;
}
