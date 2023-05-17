#pragma once

#include "Pago.h"

class efectivo :public Pago {
public:
	string efectuar_pago();
	efectivo(unsigned int monto_p, unsigned int monto, carrito*& carro);
	~efectivo();
	void imprimir();
private:
	unsigned int monto_ingresado;
};