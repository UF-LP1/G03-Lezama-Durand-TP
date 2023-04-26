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
platos::platos(enum Tamanios tam, bool liso, string decoracion, string color, string material, unsigned int cantidad, 
			unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string marca): 
			Vajilla(liso, decoracion, color,tam,material, cantidad, stock, precio_producto, codigo_producto, marca){

}
platos::~platos() {

}