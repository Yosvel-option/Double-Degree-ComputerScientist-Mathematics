
#include <iomanip>
#include <iostream>



bool resuelveCaso() {
    long long int tiempo = 0;
    long long int doble = 0;
    long long int suma = 0;
    int chalets = 0;
    long long int save = 0;
    std::cin >> chalets ;



    if (! std::cin) return false;
    
    for(int u = 0; u < chalets ; u++){

        std::cin >> tiempo ;
        suma = suma + tiempo ;

        if (tiempo >= save)
        {
            save = tiempo;
            doble = tiempo * 2 ;
        }
        

        

    }
    

    if (doble > suma)
    {
        std::cout << doble << '\n' ;
    }
    else if (doble <= suma)
    {
        std::cout << suma << '\n' ;
    }
    




   
    return true;
    
}

int main() {
   
    while (resuelveCaso());

    return 0;
}
