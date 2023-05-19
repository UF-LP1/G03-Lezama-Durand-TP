#include "Aplicacion.h"

Aplicacion::Aplicacion(unsigned int monto_p,string nombre, carrito*& carro):Pago(monto_p,carro)
{
	this->nombreApp = nombre;
}

Aplicacion::~Aplicacion()
{
}

string Aplicacion::efectuar_pago()
{
    stringstream salida;
    salida << "usted realizo el pago con la app: " << this->nombreApp << " monto: " << this->monto <<"$"<< endl
        << "los prodoctos ya comprados son: " << endl;

    for (producto i : this->carro->get_lista())  
    {
        salida <<"producto: "<< i.get_nombre() << "     "<<"Precio: $" << i.get_precio_producto() << endl;
    }
    return salida.str();
}

void Aplicacion::imprimir() {
    cout << this->efectuar_pago() << endl;
}
