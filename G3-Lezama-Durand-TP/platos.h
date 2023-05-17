/**
 * Project Untitled
 */


#ifndef _PLATOS_H
#define _PLATOS_H

#include "Vajilla.h"

enum tiposPlato{llano=0, hondo, bowl};


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
	platos(string nom,enum Tamanios tam, bool liso, string decoracion, string color, string material, unsigned int cantidad, unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string marca, enum tiposPlato tipo_plato);
	~platos();
	unsigned int get_tipoPlato();
	void set_tipoPlato(enum tiposPlato ClasPlato);


private:
	enum tiposPlato tipo_plato;
};
#endif //_PLATOS_H