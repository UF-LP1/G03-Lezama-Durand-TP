/**
 * Project Untitled
 */


#include "manteles.h"

/**
 * manteles implementation
 */


/**
 * @param tamanio
 * @param liso
 * @param decoracion
 * @param color
 * @param materia
 * @param cantidad
 * @param stock
 * @param codigo_producto
 * @param precio_producto
 * @param Marca
 */
manteles::manteles(enum Tamanios tamanio, bool liso, string decoracion, string color, string material, unsigned int cantidad,
			unsigned int stock, const unsigned int codigo_producto, unsigned int precio_producto, string Marca):
			Vajilla(liso, decoracion, color, tamanio, material, cantidad, stock, precio_producto, codigo_producto, Marca) {

}
manteles::~manteles() {

}