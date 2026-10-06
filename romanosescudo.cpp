
#include <iostream>


bool resuelveCaso() {
    int soldado = 0 ;
    int var = 0;
    int u = 0;
    int k = 0;
    int total = 0;

    std::cin >> soldado ;

    if (soldado == 0 ) return false;
    

   while (soldado > 0 )
   {
    for(; u*u <= soldado; u++);
    
    if ((u*u) > soldado)
    {
        k = soldado - ((u-1)*(u-1)) ;
    }
    if (k>=0)
    {
        
        soldado = k;
        total = total + ((u-1)*(u-1)) + ((u-1)*4);
        u=0;

    }
    
    u = 0;


   }
   
   std::cout << total << '\n' ;


   return true ;
    
}

int main() {
    
    while (resuelveCaso());
    
    return 0;
}
