#include "Header.h"
#include "cotillon_establecimento.h"
#include "platos.h"
#include "servilletas.h"
#include "manteles.h"
#include "cubiertos.h"
#include "moldes.h"
#include "Decoracion.h"
#include "cartel.h"
#include "Disfraz.h"
#include "mostraddor.h"
#include "Clientes.h"
#include "carrito.h"
#include "encargado.h"
#include "Aplicacion.h"
#include "tarjeta.h"
#include "efectivo.h"



int main() {
	list<producto> lista;
	//vamos a crear unos objetos tipo productos para testear el metodo :)
	Disfraz rey("disfraz",true, 123456, "rey", 1, true, "20/02/24", "23/02/24", 789098, 20, 2000, "merienditas");
	producto vajilla("vajillas", 30, 500, 300029, "tramontina");
	producto globo("globo",20, 500, 301029, "party");
	producto chupeta("chupeta",10, 50, 303030, "BOmBOmBum");
	producto caramelo("caramelo",25, 5, 325642, "cramelo");
	producto vaso("vaso",56, 300, 400029, "tramontina");
	producto palillo("palillo",70, 12, 356029, "tramontina");
	moldes m_cupcakes("cupcake",cupcakes, 12, "plastico", 45, 577888, 450, "colombraro");

	lista.push_back(vajilla);
	lista.push_back(globo);
	lista.push_back(chupeta);
	lista.push_back(caramelo);
	lista.push_back(vaso);
	lista.push_back(palillo);
	lista.push_back(m_cupcakes);
	//lista.push_back(d_chololate);

	Clientes Saul(1, "saul Lezama", 95236478, "saul@gmail.com");

	Clientes Emiliana(2, "emiliana janin", 30256478, "emiliana@gmail.com");
	try
	{
		Saul.AgregarProducto(globo, 7);
		Saul.AgregarProducto(chupeta, 1);
		Saul.AgregarProducto(vaso, 2);
		Saul.AgregarProducto(m_cupcakes, 4);

		Emiliana.AgregarProducto(caramelo, 1);
		Emiliana.AgregarProducto(palillo, 10);
		Emiliana.AgregarProducto(vaso,4);
	}
	catch (invalid_argument& e) {
		cerr << e.what() << endl;

	}

	Emiliana.AlquilarDisfraz(rey, 1);

	encargado Maria("Maria Durand", 98563214, "de lunes a domingo", "maria@gmail.com");
	unsigned int metodo= Maria.cobrar();

	carrito* c = Saul.get_carro();

	unsigned int monto = c->get_monto();
	//Pago *d;

	do
	{
		if (metodo == 1)
		{
			Aplicacion app(monto, "mercado pago", c);
			app.imprimir();
		}
		else if (metodo == 2)
		{
			unsigned int monto_i;
			cout << "el monto es:"<<monto<<" ingrese su efectivo : " << endl;
			cin >> monto_i;
			efectivo dinero(monto, monto_i, c);
			dinero.imprimir();
		}
		else if (metodo == 3)
		{
			Tarjeta tar(monto,"American", "santander", 123, true, c);
			tar.imprimir();
		}
	}while(metodo!=1 && metodo != 2 && metodo != 3);

	delete c;
	return 0;
}