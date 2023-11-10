#pragma once
#include <random>
#include "iostream"
#include "HeaderAndHeather.h"
using namespace std;

int GenNumeroRandom() {
	//Obtenido y adaptado de chat gpt, utilizando el propmt "Generar un numero random en C++"
    // Crear un generador de números aleatorios (Motor)
    std::random_device rd;  // Obtener una semilla aleatoria del sistema
    std::mt19937 generator(rd());  // Mersenne Twister 19937 como motor

    // Crear una distribución uniforme entre un rango de valores
    std::uniform_int_distribution<int> distribution(1, 10);  // Cambia el rango según tus necesidades

    // Generar números aleatorios
    int random_number = distribution(generator);
    return random_number;
}

int MoverCantidadH(int PosicionLiebre) {
    switch (GenNumeroRandom()) {
    case 1:
        return DuermeH(PosicionLiebre);
        break;
    case 2:
        return DuermeH(PosicionLiebre);
        break;
    case 3:
        return  GranSaltoH(PosicionLiebre);
        break;
    case 4:
        return  GranSaltoH(PosicionLiebre);
        break;
    case 5:
        return GranResbalonH(PosicionLiebre);
        break;
    case 6:
        return SaltoPequeñoH(PosicionLiebre);
        break;
    case 7:
        return SaltoPequeñoH(PosicionLiebre);
        break;
    case 8:
        return SaltoPequeñoH(PosicionLiebre);
        break;
    case 9:
        return ResbalonPequeñoH(PosicionLiebre);
        break;
    case 10:
       return ResbalonPequeñoH(PosicionLiebre);
        break;//el defaul no puede pasar nunca
    default: return PasoLentoT(PosicionLiebre);

    }
}
int MoverCantidadT(int PosicionTortuga) {
    switch (GenNumeroRandom()) {
    case 1:
        return  PasoVelozT(PosicionTortuga);
        break;
    case 2:
        return PasoVelozT(PosicionTortuga);
        break;
    case 3:
        return PasoVelozT(PosicionTortuga);
        break;
    case 4:
        return   PasoVelozT(PosicionTortuga);
        break;
    case 5:
        return  PasoVelozT(PosicionTortuga);
        break;
    case 6:
        return ResbalonT(PosicionTortuga);
        break;
    case 7:
        return ResbalonT(PosicionTortuga);
        break;
    case 8:
        return  PasoLentoT(PosicionTortuga);
        break;
    case 9:
        return  PasoLentoT(PosicionTortuga);
        break;
    case 10:
        return PasoLentoT(PosicionTortuga);
        break;//el defaul no puede pasar nunca
    default: return PasoLentoT(PosicionTortuga);
    }
}

void ImprimirPista(int * pista, int liebre, int tortuga) {
    *(pista + liebre) = *(pista + liebre) +1;
    *(pista + tortuga) = *(pista + tortuga)+ 2;
    for (int i = 0; i <= 69; i++) {
        if (*(pista + i) == 1) {
            cout << "H";
        }
        if (*(pista + i) == 2) {
            cout << "T";
        }
        if (*(pista + i) == 3) {
            cout << "(HT)";
        }
        if (*(pista + i) == 0) {
            cout << "=";
        }
        
    }
    cout << endl;
}
void ImprimirMordida(int* pista, int liebre, int tortuga) {
    for (int i = 0; i <= 69; i++) {
        if (*(pista + i) == 3) {
            cout << "OUCH";
        }
    }
}
void ResetPista(int* pista) {
    for (int i = 0; i <= 69; i++) {
        *(pista + i) = 0;
    }
}
int CambiarPosicionT(int PosicionTortuga) {
    int posicion = (MoverCantidadT(PosicionTortuga));
    return posicion;
}
int CambiarPosicionH(int  PosicionLiebre) {
    int posicion = (MoverCantidadH(PosicionLiebre));
    return posicion;
}

int ActualizarT(int Tortuga){
     
    Tortuga = CambiarPosicionT(Tortuga);
    return Tortuga;
}

int ActualizarH(int liebre) {

    liebre = CambiarPosicionT(liebre);
    return liebre;
}
int RevisarVictoria(int posLiebre, int posTortuga) {
    if ((posLiebre & posTortuga) >= 70) {
        cout << "ambos llegaron a 70, pero meh, que gane la tortuga :D";
        return 1;
    }
    if (posLiebre >= 70) {
        cout << "Gana la liebre, no tego ni idea de como, pero gana";
        return 1;
    }
    if (posTortuga >= 70) {
        cout << "Gana la tortuga como debe ser, como te quiero tortuga";
        return 1;

    }
    else {
        return 0;
    }
}
