#include "tarjeta.h"


Tarjeta::Tarjeta(unsigned int monto_p, string nombre, string banco, unsigned int cod_seguridad, bool credito, carrito*& carro):Pago(monto_p,carro){
	this->nombre = nombre;
	this->banco = banco;
	this->cod_seguridad = cod_seguridad;
	this->credito=credito;
}

Tarjeta::~Tarjeta()
{
}


string Tarjeta::efectuar_pago()
{
    stringstream salida;
    salida << "usted realizo el pagó con la tarjeta: " << this->nombre << " " << this->banco << " monto: " << this->monto <<"$"<< endl
        << "los prodoctos ya comprados son: " << endl;

    for (producto i : this->carro->get_lista())
    {
        salida << "producto: " << i.get_nombre() << "     " << "Precio: $" << i.get_precio_producto() << endl;
    }
    return salida.str();
}

void Tarjeta::imprimir() {
    cout << this->efectuar_pago() << endl;
}
