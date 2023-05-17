/**
 * Project Untitled
 */


#ifndef _CARTEL_H
#define _CARTEL_H

#include "Cotillon.h"


class cartel: public Cotillon {
public: 
    
/**
 * @param codigo
 * @param stock
 * @param precio
 * @param marca
 * @param texto
 */
cartel(string nom, string texto, unsigned int stock, unsigned int precio, unsigned int cod, string marca);
~cartel();
    
/**
 * @param texto
 */
void set_texto(string texto);
private: 
    string texto;
};

#endif //_CARTEL_H