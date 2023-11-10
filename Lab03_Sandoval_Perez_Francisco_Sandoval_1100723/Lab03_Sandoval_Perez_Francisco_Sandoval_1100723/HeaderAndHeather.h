#pragma once
int PasoVelozT(int posicion) {
	posicion = posicion + 3;
	return posicion;
}
int ResbalonT(int posicion) {
	if (posicion > 6) {
		return posicion - 6;
	}
	else {
		return posicion - posicion;
	}
}
int PasoLentoT(int posicion) {
	return posicion+1;
}
int DuermeH(int posicion) {
	return posicion;
}
int GranSaltoH(int posicion) {
	return posicion+9;
}
int GranResbalonH(int posicion) {
	if (posicion > 12){
	return posicion-12;
	}
	else {
		return posicion - posicion;
	}
}
int SaltoPequeñoH(int posicion) {
	return posicion+1;
}
int ResbalonPequeñoH(int posicion) {
	if (posicion > 2) {
		return posicion - 2;
	}
	else {
		return posicion - posicion;
	}
}