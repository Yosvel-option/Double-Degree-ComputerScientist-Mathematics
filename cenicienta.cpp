#include <iomanip>
#include <iostream>


void resuelveCaso() {
    
    int save = 0;
    int d = 0;
    int h , m , s = 0;
    char dosPuntos ;

    std::cin >> d >> dosPuntos >> h >> dosPuntos >> m >> dosPuntos >> s ;

    int SEG_dhms = 0;

    SEG_dhms = d * 24 * 3600 + h * 3600 + m * 60 + s ;


    int h2 , m2 , s2 = 1;
    

    while (h2 != 0 || m2 != 0 || s2 != 0)
    {
        
        std::cin >> h2 >> dosPuntos >> m2 >> dosPuntos >> s2;

        int total = h2 * 3600 + m2 * 60 + s2 ;

        

        save = save + total ;

        if (h2 == 0 && m2 == 0 && s2 == 0)
    {
        break;
    }
    

    }
    
    if (SEG_dhms > save)
    {
        std::cout << "SI" << '\n' ;
    }
    else if (SEG_dhms < save)
    {
        std::cout << "NO" << '\n' ;
    }
    else if (SEG_dhms == save)
    {
        std::cout << "NO" << '\n' ;
    }
    
    
    
   

    
}

int main() {
    int numCasos;
    std::cin >> numCasos; // lectura del número de casos
    for (int i = 0; i < numCasos; i++) {
        resuelveCaso(); // LLamada a la función para tratar cada caso
    }
    return 0;
}
