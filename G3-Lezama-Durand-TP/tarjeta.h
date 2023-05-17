#pragma once

#include "Pago.h"

class Tarjeta :public Pago{
public:
	string efectuar_pago();
	Tarjeta(unsigned int monto_p,string nombre, string banco, unsigned int cod_seguridad, bool credito, carrito*& carro);
	~Tarjeta();
	void imprimir();
private:
	string nombre;
	string banco;
	unsigned int cod_seguridad;
	bool credito;
	carrito* Micarro;
};