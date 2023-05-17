/**
 * Project Untitled
 */


#include "platos.h"

/**
 * platos implementation
 */


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
platos::platos(string nom,enum Tamanios tam, bool liso, string decoracion, string color, string material, unsigned int cantidad,
			unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string marca, enum tiposPlato tipo_plato):
			Vajilla(nom,liso, decoracion, color,tam,material, cantidad, stock, precio_producto, codigo_producto, marca){
	this->tipo_plato = tipo_plato;

}
platos::~platos() {

}

unsigned int platos::get_tipoPlato()
{
	return this-> tipo_plato;
}

void platos::set_tipoPlato(enum tiposPlato ClasPlato)
{
	this->tipo_plato = ClasPlato;
	return;
}
