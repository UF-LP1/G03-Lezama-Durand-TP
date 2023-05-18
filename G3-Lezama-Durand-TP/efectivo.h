#pragma once

#include "Pago.h"

class efectivo :public Pago {
public:
	string efectuar_pago();
	efectivo(unsigned int monto_p, unsigned int monto, carrito*& carro);
	~efectivo();
	unsigned int get_vuelto();
	void imprimir();

private:
	unsigned int monto_ingresado;
	unsigned int vuelto;
};