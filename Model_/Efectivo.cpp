#include "Efectivo.h"

Efectivo::Efectivo(double monto_ab, carrito*& carro): Pago(carro)
{
	this->monto_abonado = monto_ab;
}

Efectivo::~Efectivo()
{
}

void Efectivo::efectuar_pago()
{
	double vuelto = this->monto - this->monto_abonado;

	cout << "usted realizo el pago con efectivo, monto: " << this->monto<<"pagó: " <<this->monto_abonado<< " le devolvemos: "<<vuelto<<endl;
}
