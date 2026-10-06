

#include <iostream>


bool resuelveCaso() {
    int n , p = 0;
    int save = 0;
    int u = 1;
    int pot = 1;
    
    
    std::cin >> n >> p ;

    if (n == 0 && p == 0) return false;


    for(; u <= n; u++){

        for (int o = 0; o < p; o++)
        {
            pot = ((pot % 46337) * (u % 46337)) % 46337 ;
            
        }
        
        save = ((save % 46337) +(pot % 46337)) % 46337  ;
        
        pot = 1 ;
    }
    
    std::cout << save << '\n' ;
    
    
   
    return true;
    
}

int main() {
    
    while (resuelveCaso());
    
    return 0;
}
