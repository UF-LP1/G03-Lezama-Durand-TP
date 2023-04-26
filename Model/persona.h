/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H7
#include "Header.h"

class persona {
public: 
    
/**
 * @param nombre
 * @param DNI
 * @param contacto
 */
persona(string nombre, unsigned int DNI, string contacto);
~persona();

protected: 
    const string nombre;
    const unsigned int DNI;
    string contacto;
};

#endif //_PERSONA_H