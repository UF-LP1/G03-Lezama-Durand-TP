/**
 * Project Untitled
 */


#ifndef _VAJILLA_H
#define _VAJILLA_H

#include "producto.h"


class Vajilla: public producto {
public: 
    
/**
 * @param impresion
 * @param liso
 * @param decoracion
 * @param color
 */
    Vajilla(string nom,bool liso, string decoracion, string color, enum Tamanios tam, string material,
        unsigned int cantidad_por_tamanio, unsigned int stock, unsigned int precio, unsigned int cod,
        string marca);
~Vajilla();
    
bool get_impresion();
    
/**
 * @param cantidad
 * @param stock
 */
void set_impresion(bool impre);

protected: 
    bool liso;
    string decoracion;
    string color;
    enum Tamanios tam;
    string material;
    unsigned int cantidad_por_unidad;
private: 
    bool impresion;
};

#endif //_VAJILLA_H