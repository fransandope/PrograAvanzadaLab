#pragma once
#include "Unidad.h"

generic <typename T>
ref class NationalNumberComparer : public System::Collections::Generic::IComparer<Unidad<T>^>
{
public:
    virtual int Compare(Unidad<T>^ x, Unidad<T>^ y)
    {
        return x->NationalNumberPokemon - y->NationalNumberPokemon;
    }
};