#pragma once
#include "Pago.h"

class Tarjeta : public Pago{
public:
		Tarjeta(string nombre, string banco, unsigned int cod_seguridad, bool credito, carrito * &carro);
		~Tarjeta();
		void efectuar_pago();
private:
	string Banco;
	bool credito;
	string nombre;
	unsigned int cod_seguridad;

};

