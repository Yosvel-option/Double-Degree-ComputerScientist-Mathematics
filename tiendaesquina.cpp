  
#include <iomanip>
#include <iostream>


void resuelveCaso() {
    
    int save = 0 ;
    int precio = 0;
    int pago = 0;
    std::cin >> precio >> pago ;

    int c200 = 0;
    int c100 = 0;
    int c50 = 0 ;
    int c20 = 0;
    int c10 = 0 ;
    int c5 = 0;
    int c2 = 0;
    int c1 = 0 ;

    int devolver = pago - precio ;

    int debe = (-1) * devolver ;

    if (pago >= precio)
    {
        c200 = devolver / 200 ;
        save = devolver % 200 ;
        devolver = save ;
        
        c100 = save / 100;
        save = devolver % 100;
        devolver = save ;
        
        c50 = save / 50;
        save = devolver % 50 ;
        devolver = save;
    
        c20 = save / 20 ;
        save = devolver % 20;
        devolver = save ;
    
        c10 = save / 10 ;
        save = devolver % 10;
        devolver = save ;
    
        c5 = save / 5 ;
        save = devolver % 5;
        devolver = save ;
    
        c2 = save / 2 ;
        save = devolver % 2;
        devolver = save;
    
        c1 = save / 1 ;
        save = devolver % 1;
        devolver = save;
        
        std::cout << c200 ;
        std::cout << ' ' << c100 << ' ' << c50 << ' ' << c20 << ' ' << c10 << ' ' << c5 << ' ' << c2 << ' ' << c1 << '\n' ;
    }
    

    if (pago < precio)
    {
        std::cout << "DEBE " << debe << '\n' ;
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
