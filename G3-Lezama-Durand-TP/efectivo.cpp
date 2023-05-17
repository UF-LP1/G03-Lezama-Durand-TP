#include "efectivo.h"


efectivo::efectivo(unsigned int monto_p, unsigned int monto, carrito*& carro) :Pago(monto_p,carro) {
	this->monto_ingresado = monto;
}

efectivo::~efectivo()
{
}

string efectivo::efectuar_pago()
{
    
        unsigned int vuelto = 0;
        vuelto = this->monto - this->monto_ingresado;
        stringstream salida;

        salida << "usted realizo el pago con efectivo, un monto de: " << this->monto << "monto: " << this->monto_ingresado << " le devolvemos" << vuelto << endl
            << "los prodoctos ya comprados son: " << endl;

        for (producto i : this->carro->get_lista())
        {
            salida << i.get_nombre() << " " << i.get_precio_producto() << endl;
        }

        return salida.str();
}

void efectivo::imprimir() {
    cout << this->efectuar_pago() << endl;
}