/**
 * Project Untitled
 */


#ifndef _CLIENTES_H
#define _CLIENTES_H

#include "persona.h"
#include "producto.h"
#include "disfraz.h"
#include "carrito.h"

class Clientes: public persona {
private:
    unsigned int Nro_cliente;
    carrito Micarrito;
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param Contacto
 */
Clientes(unsigned int Nro, string nombre, unsigned int DNI, string Contacto);
~Clientes();
/**
 * @param Nombre
 * @param cant
 * @param nroCarrito
 */
void AgregarProducto(producto Nombre, unsigned int cant);
void AlquilarDisfraz(Disfraz Nombre, string fecha);

carrito* get_carro();
unsigned int get_nro();

};

#endif //_CLIENTES_H