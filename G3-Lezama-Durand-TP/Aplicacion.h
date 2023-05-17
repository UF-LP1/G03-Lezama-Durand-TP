#pragma once
#include "Pago.h"
#include "carrito.h"

class Aplicacion :public Pago
{
public:
	Aplicacion(unsigned int monto_p,string nombre, carrito*& carro);
	~Aplicacion();
	string efectuar_pago();
	void imprimir();

private:
	string nombreApp;
};

