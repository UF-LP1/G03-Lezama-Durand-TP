/**
 * Project Untitled
 */


#include "Disfraz.h"

/**
 * Disfraz implementation
 */


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

Disfraz::Disfraz(bool alquila, const unsigned int codigo_de_disfraz, string tipo, char talle, bool encarga,
    string fecha_alquiler, unsigned int codigo, unsigned int stock, unsigned int precio, string marca) :
    Cotillon(stock, precio, codigo, marca), codigo_de_disfraz(codigo_de_disfraz) {

    this->alquila = alquila;
    this->tipo = tipo;
    this->talle = talle;
    this->encarga = encarga;
    this->fecha_alquiler = fecha_alquiler;

}

Disfraz::~Disfraz() {

}
/**
 * @return unsigned int
 */
unsigned int Disfraz::get_codigo() {
    return this->codigo_de_disfraz;
}

/**
 * @param talle
 * @return void
 */
void Disfraz::set_talle(char talle) {
    this->talle=talle;
    return;
}

/**
 * @param nombre
 * @param codigo
 * @return void
 */
void Disfraz::entregar_disfraz(string nombre, unsigned int codigo) {//estas funciones las hacemos luego
    return;
}

/**
 * @param fecha
 * @return bool
 */
bool Disfraz::reservar_disfraz(string fecha) {
    return false;
}