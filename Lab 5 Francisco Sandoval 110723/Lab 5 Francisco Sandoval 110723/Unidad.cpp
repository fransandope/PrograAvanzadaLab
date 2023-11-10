
#include "Unidad.h"

generic <typename T>
Unidad<T>::Unidad()
{
    NationalNumberPokemon = 0;
    NombrePokemon = "";
    GeneracionPokemon = 0;
    
}

generic <typename T>
Unidad<T>::Unidad(int nationalNumber, String^ nombrePokemon, int generacionPokemon)
{
    NationalNumberPokemon = nationalNumber;
    NombrePokemon = nombrePokemon;
    GeneracionPokemon = generacionPokemon;
}
