#include <iostream>
#include "Header.h"
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int PosicionLiebre;
    int PosicionTortuga;
    PosicionLiebre = 0;
    PosicionTortuga = 0;
    int CondVictoria = 0;
		 int Pista[100];// espacios de mas por si se pasa, evita tener que poner cosas para prevencion de errores
         //creamos la matriz
         // No usamos punteros porque seria una perdida de tiempo, y no trae ebenficios aun
         //y la incializamos
         int* wah = Pista;
         for (int i = 0; i <= 69; i++) {
            *(wah+i) = 0;
         }
         while (CondVictoria != 1 ) {
             cout << "" << endl;

             //aqui tiene que er que en cada segundo el loop
             PosicionLiebre = ActualizarH(PosicionLiebre);
             PosicionTortuga = ActualizarT(PosicionTortuga);
             ImprimirPista(Pista, PosicionLiebre, PosicionTortuga);
             ImprimirMordida(Pista, PosicionLiebre, PosicionTortuga);
             ResetPista(Pista);
             CondVictoria = RevisarVictoria(PosicionLiebre, PosicionTortuga);
             std::this_thread::sleep_for(std::chrono::seconds(1));//sacado de chat gpt con el prompt "manera de repetir un loop cada segundo en c++"
         }
}



