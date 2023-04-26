/**
 * Project Untitled
 */


#ifndef _DISFRAZ_H
#define _DISFRAZ_H

#include "Cotillon.h"


class Disfraz: public Cotillon {
public: 
    
/**
 * @param alquila
 * @param codigo_de_disfraz
 * @param tipo
 * @param talle
 * @param encarga
 * @param fecha_alquiler
 * @param codigo
 * @param stock
 * @param precio
 * @param marca
 */
Disfraz(bool alquila, const unsigned int codigo_de_disfraz, string tipo, char talle, bool encarga, string fecha_alquiler, unsigned int codigo, unsigned int stock, unsigned int precio, string marca);
~Disfraz();

unsigned int get_codigo();
    
/**
 * @param talle
 */
void set_talle(char talle);
    
/**
 * @param nombre
 * @param codigo
 */
void entregar_disfraz(string nombre, unsigned int codigo);
    
/**
 * @param fecha
 */
bool reservar_disfraz(string fecha);
private: 
    bool alquila;
    const unsigned int codigo_de_disfraz;
    string tipo;
    char talle;
    bool encarga;
    string fecha_alquiler;
};

#endif //_DISFRAZ_H