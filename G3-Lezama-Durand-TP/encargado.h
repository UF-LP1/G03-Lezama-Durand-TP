/**
 * Project Untitled
 */


#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "persona.h"
#include "Aplicacion.h"
#include "efectivo.h"
#include "tarjeta.h"
#include "Producto.h"
#include "carrito.h"


class encargado: public persona {
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param horario
 */
encargado(const string nombre, const unsigned int DNI, string horario, string Contacto);
 ~encargado();

 unsigned int cobrar();
/**
 * @param regalo
 */
string envolver_regalo();
    
/**
 * @param horario
 */
void set_horario(string horario);

void realizar_pago(unsigned int metodo, unsigned int monto, carrito*& c);

private: 
    string horario;
};

#endif //_ENCARGADO_H