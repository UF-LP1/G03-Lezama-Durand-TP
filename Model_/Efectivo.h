#pragma once
#include "Pago.h"
class Efectivo : public Pago{
public:
	Efectivo(double monto_ab, carrito*& carro);
	~Efectivo();
	void efectuar_pago();
private:
	double monto_abonado;
};

