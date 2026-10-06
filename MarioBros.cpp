
#include <iostream>


void resuelveCaso() {
    int arriba = 0;
    int abajo = 0;
    long long int muros = 0;
    int caso = 0;
    int save = 0;
    int caso1 = 0;
    std::cin >> muros ;
    std::cin >> caso1 ;
    if (muros == 1)
    {
        std::cout << 0 << ' ' << 0 << '\n' ;
    }
    else if (muros > 1)
    {
        std::cin >> caso ;

        if (caso1 < caso)
        {
            arriba++ ;
        }
        else if (caso1 > caso)
        {
            abajo++ ;
        }
        
    
        for(int o = 2 ; o < muros ; o++){
            save = caso ;
            std::cin >> caso ;
            
            if (save < caso)
            {
                arriba++;
            }
            else if (save > caso)
            {
                abajo++;
            }
            
            
            
    
        }
        
        std::cout << arriba << ' ' << abajo << '\n' ;
    
    
    
    
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
