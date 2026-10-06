
#include <iostream>


void resuelveCaso() {
    
    int c = 1;
    int digito = 0;
    int num = 0;
    std::cin >> num ;

    if (num >= 5)
    {
        
        std::cout << 0 << '\n' ;
    
    }
    else if (num == 0)
    {
        std::cout << 1 << '\n' ;
    }
    else if (num > 0 && num < 5)
    {

        for (size_t k = 1; k <= num ; k++)
        {
           c = c * k ;
        }
        std::cout << c % 10 << '\n' ;
    
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
