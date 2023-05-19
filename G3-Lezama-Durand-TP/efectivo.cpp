#include "efectivo.h"


efectivo::efectivo(unsigned int monto_p, unsigned int monto, carrito*& carro) :Pago(monto_p,carro) {
	this->monto_ingresado = monto;
    this->vuelto=monto-monto_p;
}

efectivo::~efectivo()
{
}

unsigned int efectivo::get_vuelto() {
    return this->vuelto;
}

string efectivo::efectuar_pago()
{
        stringstream salida;

        salida << "usted realizo el pago con efectivo, un monto de: " << this->monto << "monto: " << this->monto_ingresado << " le devolvemos: " << this->vuelto << endl
            << "los prodoctos ya comprados son: " << endl;

        for (producto i : this->carro->get_lista())
        {
            salida << "producto: " << i.get_nombre() << "     " << "Precio: $" << i.get_precio_producto() << endl;
        }
        return salida.str();
}

void efectivo::imprimir() {
    cout << this->efectuar_pago() << endl;
}