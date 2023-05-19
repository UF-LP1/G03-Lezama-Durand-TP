/**
 * Project Untitled
 */


#include "Clientes.h"


/**
 * Clientes implementation
 */


unsigned int Clientes::Nro_cliente = 0;

Clientes::Clientes(string nombre, unsigned int DNI, string Contacto): persona(nombre,DNI,Contacto){
	this->Micarrito = carrito(0, 0, DNI);// creamos un carrito automaticamente cuando se crea el cliente 
	return;
}

Clientes::~Clientes() {

}
/**
 * @param Nombre
 * @param cant
 * @param nroCarrito
 */

void Clientes::AgregarProducto(producto Nombre, unsigned int cant){ 
	Micarrito.cargarlista(Nombre, cant);// invocamos la funcion cargar lista que va añadiendo productos a la lista del carrito 
}


void Clientes::AlquilarDisfraz(Disfraz Nombre, string fecha) {

	Nombre.alquilar_disfraz(fecha);

}

carrito* Clientes::get_carro()
{
	return &this->Micarrito;
}

unsigned int Clientes::get_nro(){
	return Nro_cliente;
}

void Clientes::set_nro(unsigned int nro) {
	Nro_cliente = nro;
	return;
}