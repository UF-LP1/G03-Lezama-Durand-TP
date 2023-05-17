/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H
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

string get_nombre();
unsigned int get_DNI();
void set_contacto(string cont);
string get_contacto();

protected: 
    const string nombre;
    const unsigned int DNI;
    string contacto;
};

#endif //_PERSONA_H