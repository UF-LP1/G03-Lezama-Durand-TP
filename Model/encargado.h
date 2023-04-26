/**
 * Project Untitled
 */


#ifndef _ENCARGADO_H
#define _ENCARGADO_H

#include "persona.h"
#include "producto.h"


class encargado: public persona {
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param horario
 */
encargado(const string nombre, const unsigned int DNI, string horario, string Contacto);
 ~encargado();
    
enum Metodos get_metodopago();
    
/**
 * @param monto
 */
string cobrar(unsigned int monto);
    
/**
 * @param regalo
 */
void envolver_regalo(producto regalo);
    
/**
 * @param horario
 */
void set_horario(string horario);
private: 
    string horario;
};

#endif //_ENCARGADO_H