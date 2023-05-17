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
Disfraz::Disfraz(string nom, bool alquila, const unsigned int codigo_de_disfraz, string tipo, char talle, bool encarga,
    string fecha_alquilar, string fecha_retorno, unsigned int codigo, unsigned int stock, unsigned int precio, string marca) :
    Cotillon(nom, stock, precio, codigo, marca), codigo_de_disfraz(codigo_de_disfraz) {
    this->alquila = alquila;
    this->tipo = tipo;
    this->talle = talle;
    this->encarga = encarga;
    this->fecha_alquilar = fecha_alquilar;
    this->fecha_retorno = fecha_retorno;
}

Disfraz::~Disfraz() {

}
/**
 * @return unsigned int
 */
unsigned int Disfraz::get_codigo() {
    return this->codigo_de_disfraz;
}

bool Disfraz::get_alquila()
{
    return this->alquila;
}

void Disfraz::set_tipo(string tipo)
{
    this->tipo = tipo;
    return;
}

string Disfraz::get_tipo()
{
    return this->tipo;
}

char Disfraz::get_talle()
{
    return this->talle;
}

bool Disfraz::get_encarga()
{
    return this->encarga;
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
void Disfraz::entregar_disfraz(string nombre, unsigned int codigo){

    return;
}

/**
 * @param fecha
 * @return bool
 */
bool Disfraz::reservar_disfraz(string fecha_e, string fecha_r) {
    this->alquila = true;
    this->fecha_alquilar = fecha_e;
    this->fecha_retorno = fecha_r;
    return true;
}