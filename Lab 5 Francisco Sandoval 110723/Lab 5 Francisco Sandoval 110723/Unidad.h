using namespace System;
using namespace System::Collections::Generic;

generic <typename T>
ref class Unidad
{
public:
	int NationalNumberPokemon;
	String^ NombrePokemon;
	int GeneracionPokemon;

	Unidad();
	Unidad(int nationalNumber, String^ nombrePokemon, int generacionPokemon);

};