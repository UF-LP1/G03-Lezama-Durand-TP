/**
 * Project Untitled
 */


#include "servilletas.h"

/**
 * servilletas implementation
 */


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
servilletas::servilletas(string nom,enum Tamanios tamanio, bool liso, string decoracion, string color, string material,
			unsigned int cantidad, unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto,
			string Marca, bool absorvente): Vajilla(nom,liso, decoracion, color, tamanio, material, cantidad, stock, precio_producto, codigo_producto, Marca) {

}

servilletas::~servilletas() {

}

void servilletas::set_absorvente(bool absosrve)
{
	this->absorvente = absosrve;
	return;
}

bool servilletas::get_absorvente()
{
	return this->absorvente;
}
