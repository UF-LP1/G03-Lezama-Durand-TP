/**
 * Project Untitled
 */


#ifndef _SERVILLETAS_H
#define _SERVILLETAS_H

#include "Vajilla.h"


class servilletas: public Vajilla {
public: 
    
/**
 * @param tamanio
 * @param liso
 * @param decoracion
 * @param color
 * @param material
 * @param cantidad
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */
servilletas(enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad, unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca, bool absorvente);
~servilletas();
void set_absorvente(bool absosrve);
bool get_absorvente();

private:
    bool absorvente;
};

#endif //_SERVILLETAS_H