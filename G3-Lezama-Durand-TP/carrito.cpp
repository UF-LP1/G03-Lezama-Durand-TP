/**
 * Project Untitled
 */


#include "carrito.h"

/**
 * carrito implementation
 */


/**
 * @param cant
 * @param monto
 * @param ID
 */
carrito::carrito(unsigned int cant, unsigned int monto, unsigned int ID) 
{
    this->cant_de_productos = cant;
    this->monto_total = monto;
    this->IDcarrito = ID;

}

carrito::carrito(){
    this->cant_de_productos = 0;
    this->monto_total = 0;
    this->IDcarrito = 0;
}

carrito::~carrito() {
    
}

/**
 * @return unsigned int
 */
unsigned int carrito::get_monto(){

    for (producto i:lista_productos) // hacemos un for que recorra toda la lista y vamos sumando el precio de los productos para obtener el monto total 
    {
        this->monto_total += i.get_precio_producto();
    }

    return this->monto_total;
}

list<producto> carrito::get_lista(){
    return this->lista_productos;
}

/**
 * @return unsigned int
 */
unsigned int carrito::get_cant_prod(){
    int cont = 0; 

    for (producto i : lista_productos)// hacemos un for que recorra toda la lista y vamos sumando los productos para obtener la cantidad total 
    {
        cont++;
    }
    this->cant_de_productos = cont;
    return this->cant_de_productos;
}

unsigned int carrito::get_ID()
{
    return this->IDcarrito;
}

/**
 * @param cantProd
 * @return void
 */
void carrito::cargarlista(producto Nombre, unsigned int cant)
{
    if (cant > Nombre.get_stock())
    {
        throw invalid_argument("no hay suficiente cantidad");
    }
    else
    {
        unsigned int i = 0;
        while (i < cant)// nos creamos un for a la antigua que va añadiendo al final de la lista los productos segun la cantidad pedida
        {
            this->lista_productos.push_back(Nombre);
            i++;
        }

        Nombre.set_stock(Nombre.eliminar_stock(cant));
    }

    return;
}