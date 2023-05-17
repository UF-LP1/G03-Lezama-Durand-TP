#pragma once
#include "Pago.h"
#include "carrito.h"

class Aplicacion :public Pago
{
public:
	Aplicacion(string nombre, carrito*& carro);
	~Aplicacion();
	void efectuar_pago();

private:
	string nombreApp;
};

