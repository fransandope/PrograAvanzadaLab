#pragma once
ref class FiguraGeometrica
{
protected: 
	int tipo;
	void setTipo(int tipo);
public:
	static int TIPO_CIRCULO = 0;
	static int TIPO_RECTANGULO = 0;
	int calcularArea();
	int calcularPerimetro();
	int GetTipo();
};

