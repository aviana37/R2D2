#ifndef ALGORITMO_H_INCLUDED
#define ALGORITMO_H_INCLUDED

#include "lista.h"
#include "arquivo.h"
#include "cronometro.h"

/*  Andre Viana Sena de Souza
**  Algoritmo de invasão do R2D2
*/
unsigned long CONTE(Lista<int>* numeros);
bool VerificaPrimo(unsigned long numero);
unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior);

Lista<unsigned long>* Algoritmo();

#endif // ALGORITMO_H_INCLUDED
