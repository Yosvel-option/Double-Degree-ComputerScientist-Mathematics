//Pokemon



#include  <iostream> 





void poke(){
   int contrincante = 0; 
   int pokemon = 0;
   std::cout << "SELECCIONA UN TIPO" << '\n' << "1-Fuego" << '\n' << "2-Agua" << '\n' << "3-Planta" << '\n' ;
   std::cin >> pokemon ;
   if (pokemon == 1){

    std::cout << "SELECCION: FUEGO" << '\n';
    std::cin >> contrincante; 

   }
   else if (pokemon == 2)
   {
    std::cout << "SELECCION: AGUA" << '\n';
    std::cin >> contrincante; 
   }
   else if (pokemon == 3)
   {
    std::cout << "SELECCION: PLANTA" << '\n';
    std::cin >> contrincante; 
   }
   else{
    std::cout << "OPCION INVALIDA" << '\n' ;
    std::cin >> pokemon ;
   }

}


int main(){

    std::cout << "ELIGE UNA OPCION" << '\n' << " 1-CALCULADORA "<< '\n' << "0-SALIR ";

    int centinela = 1;
    std::cin >> centinela ;
    
    while (centinela == 1 )
    {
        
        poke();
        std::cout << "ELIGE UNA OPCION" << '\n' << " 1-CALCULADORA "<< '\n' << "0-SALIR ";
        std::cin >> centinela ;
    }
    if ( centinela == 0)
    {
        return 0 ;
    }
    else if (centinela != 0 && centinela != 1)
    {
        std::cout << "ERROR SOLO VALIDO 0 o 1" << '\n' ;
        std::cin >> centinela ;
    }
    
    


}



