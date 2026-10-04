

#include <iomanip>
#include <iostream>


void resuelveCaso() {
    
   int gotas = 0;
   std::cin >> gotas;
   int horas = 0;
   int minutos = 0;
   int segundos = 0;
   
   horas = gotas / 3600 ;

   minutos = (gotas / 60) % 60;

   segundos = gotas % 60 ;


   std::cout << std::setfill('0') << std::setw(2) << horas << ":" << std::setw(2) << minutos << ":" << std::setw(2) << segundos << '\n' ;

   


    
    
}

int main() {
    int numCasos;
    std::cin >> numCasos; 
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); 
    
    }
    return 0;
}
