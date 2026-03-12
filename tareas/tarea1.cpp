#include <iostream>
int main(){
int jugador1, jugador2;
std :: cout <<"Ingrese la opcion del jugador 1 : "<<std :: endl;    
std ::cin>>jugador1;

std ::cout <<"Ingrese la opcion del jugador 2 : "<<std :: endl;    
std :: cin>>jugador2; 

if(jugador1 == jugador2){

std :: cout <<"Es un empate";
}
else if(jugador1 >3 || jugador2>3){ 

    std :: cout <<"Ingrese numeros del 1 al 3 ";

}

else if((jugador1==1 && jugador2==3) || (jugador1==2 && jugador2==1) || (jugador1==3 && jugador2==2)){
if (jugador1==1){
  std :: cout<<"              ____ "<<std ::  endl;
  std :: cout<<"             (    )"<<std :: endl;
  std :: cout<<"             (____)"<< std :: endl;
  std :: cout<<"GANO JUGADOR 1 CON PIEDRA";
}
else if (jugador1==2){
std :: cout<<"              ____ "<<std :: endl;
std :: cout<<"             |    |"<< std :: endl;
std :: cout<<"             |____|"<<std ::  endl;
std :: cout<<"GANO JUGADOR 1 CON PAPEL";
}
else if (jugador1==3){
  std :: cout<<"              __    / "<<std :: endl;
  std :: cout<<"             (  )  /  "<<std :: endl;
  std :: cout<<"             ____ /    "<<std :: endl;
  std :: cout<<"             ---- \\\\ "<<std :: endl;
  std :: cout<<"             (__)  \\\\   "<<std :: endl;
  std :: cout<<"                    \\\\"<<std :: endl;
  std :: cout<<"                     \\\\"<<std :: endl;
  std :: cout<<"GANO JUGADOR 1 CON TIJERA";
}

}
else if((jugador2==1 && jugador1==3) || (jugador2==2 && jugador1==1) || (jugador2==3 && jugador1==2)){

if (jugador2==1){
  std :: cout<<"              ____ "<<std :: endl;
  std :: cout<<"             (    )"<<std ::endl;
  std :: cout<<"             (____)"<<std :: endl;
  std :: cout<<"GANO JUGADOR 2 CON PIEDRA";
}
else if (jugador2==2){
  std :: cout<<"              ____ "<< std ::endl;
  std :: cout<<"             |    |"<<std ::endl;
  std :: cout<<"             |____|"<< std ::endl;
  std :: cout<<"GANO JUGADOR 2 CON PAPEL";
}
else if (jugador2==3){
  std :: cout<<"              __    / "<<std ::endl;
  std :: cout<<"             (  )  /  "<<std ::endl;
  std :: cout<<"             ____ /    "<<std ::endl;
  std :: cout<<"             ---- \\\\   "<<std :: endl;
  std :: cout<<"             (__)  \\\\ "<<std ::endl;
  std :: cout<<"                    \\\\"<<std ::endl;
  std :: cout<<"GANO JUGADOR 2 CON TIJERA";
}

}

return 0;
}

		

