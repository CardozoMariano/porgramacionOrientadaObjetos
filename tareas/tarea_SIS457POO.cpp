#include <iostream>
using namespace std;

class Player{
private:
    short opcionJugada;
    int puntaje;
    int evaluar(Player contrario){

        if(opcionJugada == contrario.opcionJugada){
            return 0;
        }
        else if((opcionJugada==1 && contrario.opcionJugada==3) ||(opcionJugada==2 && contrario.opcionJugada==1) ||(opcionJugada==3 && contrario.opcionJugada==2)){
            return 1;
        }
        else 
        {
            return -1;
        }
    }

public:
    string nombre;

    Player(){
        puntaje = 0;
    }

    void seleccionar(){
        cout<<nombre<<", elija (1: Piedra, 2: Papel, 3: Tijera): ";
        cin>>opcionJugada;
    }

    string traducir(){

        if(opcionJugada == 1){
            return "()";
        }

        else if(opcionJugada == 2){
            return "[]";
        }
        else if(opcionJugada == 3){
            return "8<";
        }
        else{
        return "";
        }
    }

    void jugar(Player &contrario){

        int resultado = evaluar(contrario);

        cout<<nombre<<" "<<traducir()
            <<"  VS  "
            <<contrario.nombre<<" "<<contrario.traducir()<<endl;

        if(resultado == 1){
            puntaje++;
            cout<<">>> RESULTADO: "<<nombre<<" gana la ronda!"<<endl;
        }
        else if(resultado == -1){
            contrario.puntaje++;
            cout<<">>> RESULTADO: "<<contrario.nombre<<" gana la ronda!"<<endl;
        }
        else{
            cout<<">>> RESULTADO: Empate tecnico."<<endl;
        }

        cout<<endl;
    }
float obtenerEficiencia(int n){

    float eficiencia;

    eficiencia = puntaje * 100.0;
    eficiencia = eficiencia / n;

    return eficiencia;
}
};

int main(){

    Player p1,p2,p3;

    cout<<"==========================================="<<endl;
    cout<<"        DUELO DE JUGADORES (POO)"<<endl;
    cout<<"==========================================="<<endl<<endl;

    p1.nombre="SubZero";
    p2.nombre="Scorpion";
    p3.nombre="Reptile";

    for(int i=1;i<=3;i++){

        cout<<"[PARTIDA "<<i<<": "<<p1.nombre<<" vs "<<p2.nombre<<"]"<<endl;

        p1.seleccionar();
        p2.seleccionar();

        cout<<endl;

            p1.jugar(p2);

        cout<<"[PARTIDA "<<i<<": "<<p2.nombre<<" vs "<<p3.nombre<<"]"<<endl;

        p2.seleccionar();
        p3.seleccionar();

            cout<<endl;

        p2.jugar(p3);
    }

     cout<<"-------------------------------------------"<<endl;
    cout<<"RESUMEN DE EFICIENCIA (Tras 3 Partidas):"<<endl;
    cout<<"-------------------------------------------"<<endl;

    cout<<"1. "<<p1.nombre<<" : "<<p1.obtenerEficiencia(3)<<"%"<<endl;
    cout<<"2. "<<p2.nombre<<" : "<<p2.obtenerEficiencia(3)<<"%"<<endl;
    cout<<"3. "<<p3.nombre<<" : "<<p3.obtenerEficiencia(3)<<"%"<<endl;

    cout<<"==========================================="<<endl;

    return 0;
}