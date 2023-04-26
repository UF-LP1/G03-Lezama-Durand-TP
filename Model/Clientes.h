/**
 * Project Untitled
 */


#ifndef _CLIENTES_H
#define _CLIENTES_H

#include "persona.h"
#include "producto.h"
#include "disfraz.h"

class Clientes: public persona {
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param Contacto
 */
Clientes(string nombre, unsigned int DNI, string Contacto);
~Clientes();
/**
 * @param Nombre
 * @param cant
 * @param nroCarrito
 */
void AgregarProducto(producto Nombre, unsigned int cant, unsigned int nroCarrito);
void AlquilarDisfraz(Disfraz Nombre, unsigned int cant, unsigned int nroCarrito);
};

#endif //_CLIENTES_H