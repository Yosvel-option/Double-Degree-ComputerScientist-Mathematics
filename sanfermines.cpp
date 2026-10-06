
#include <iomanip>
#include <iostream>



bool resuelveCaso() {
    int var = 0 ;
    long long int velocidad = 0;
    int toros = 0;
    std::cin >> toros ;

    if (! std::cin) return false;
    
    for(int o = 0; o < toros ; o++){

        
        std::cin >> velocidad ;
        
        
        if (velocidad > var)
        {
            var = velocidad;
        }
        
        

    }
   
    std::cout << var << '\n' ;

    return true;
    
}

int main() {
   
    while (resuelveCaso());

    return 0;
}
