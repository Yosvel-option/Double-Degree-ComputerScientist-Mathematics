
#include <iostream>


void resuelveCaso() {
    int caso = 0;
    int puerta1 = 0;
    int var = 0;
    int personas = 0;
    int butaca = 0;
    int save = 0;
    std::cin >> personas ;

    

    for (int o = 0; o < personas; o++)
    {
        std::cin >> butaca ;
        var = butaca % 2;
        
        if (var == 0)
        {
            puerta1++ ;
        }
        
        if (var == 0 && save != 0)
        {
            caso++;
            
        }
        

        save = var;


    }
    
    if (caso > 0)
    {
        std::cout << "NO" << '\n' ;
    }
    else if (caso == 0)
    {
        std::cout << "SI " << puerta1 << '\n' ;
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
