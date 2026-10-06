
#include <iostream>


bool resuelveCaso() {
    // leer los datos de la entrada necesarios para el caso especial de final de datos
    int piso = 0;
    int save = 0;
    int cuenta = 0;
    int dif = 0;
    int total = 0;
    std::cin >> piso ;

    if (piso <= -1) return false;
    
    // leer el resto de datos de entrada
    
    // resolver el problema
    
    // mostrar el resultado.



    while (piso >= 0)
    {
    
       save = piso ;

       std::cin >> piso ;

       

       if (piso >= 0)
       {
            cuenta = save - piso ;
            
            if (cuenta < 0)
            {
                cuenta = cuenta * (-1);
            }
            
            total += cuenta ;

       }
       

    }
    
    std::cout << total << '\n' ;

   
    return true;
    
}

int main() {
    
    while (resuelveCaso());
    
    return 0;
}
