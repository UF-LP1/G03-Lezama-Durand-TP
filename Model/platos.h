/**
 * Project Untitled
 */


#ifndef _PLATOS_H
#define _PLATOS_H

#include "Vajilla.h"


class platos : public Vajilla {
public:
	/**
	 * @param tam
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
	platos(enum Tamanios tam, bool liso, string decoracion, string color, string material, unsigned int cantidad, unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string marca);
	~platos();
};
#endif //_PLATOS_H