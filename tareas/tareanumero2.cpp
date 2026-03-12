#include <iostream>
#include <string>

void leer_opciones(int &J1, int &J2);
int evaluar(int J1, int J2);
std::string traducir(int J1);
void imprimir(int J1, int J2);
void imprimir_ganador(int resultado);

int main(){

    int J1, J2;

    leer_opciones(J1, J2);

    imprimir(J1, J2);

    int resultado = evaluar(J1, J2);

    imprimir_ganador(resultado);

    return 0;
}

void leer_opciones(int &J1, int &J2){

    std::cout <<"1 -> ()"<<std::endl;
    std::cout <<"2 -> []"<<std::endl;
    std::cout <<"3 -> 8<"<<std::endl;
    std::cout <<"_______"<<std::endl;

    std::cout <<"Ingrese la opcion jugador 1: ";
    std::cin >> J1;

    std::cout <<"Ingrese la opcion jugador 2: ";
    std::cin >> J2;
}

int evaluar(int J1, int J2){

    if(J1 == J2)
    return 0;

    if(J1==1 && J2==3) 
     return 1;
    if (J1==2 && J2==1)
    return -1;
    if (J1==3 && J2==2)
    return 1;
}

std::string traducir(int J1){

    if(J1 == 1)
        return "( )";
    else if(J1 == 2)
        return "[ ]";
    else if(J1 == 3)
        return "8<";

    
}

void imprimir(int J1, int J2){

    std::cout << traducir(J1)
              << " vs "
              << traducir(J2)
              << std::endl;
}

void imprimir_ganador(int resultado){

    if(resultado == 0)
        std::cout << "EMPATE" << std::endl;
    else if(resultado == 1)
        std::cout << "GANA JUGADOR 1" << std::endl;
    else if(resultado == -1)
        std::cout << "GANA JUGADOR 2" << std::endl;
}
