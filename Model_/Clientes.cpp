/**
 * Project Untitled
 */


#include "Clientes.h"


/**
 * Clientes implementation
 */


/**
 * @param nombre
 * @param DNI
 * @param Contacto
 */
Clientes::Clientes(unsigned int Nro, string nombre, unsigned int DNI, string Contacto): persona(nombre,DNI,Contacto){
	this->Nro_cliente = Nro;
	carrito Micarro(0, 0.0, DNI);// creamos un carrito automaticamente cuando se crea el cliente 
	this->Micarrito = Micarro;
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


void Clientes::AlquilarDisfraz(Disfraz Nombre, unsigned int cant){

}