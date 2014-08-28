#ifndef ALGORITMO_H_INCLUDED
#define ALGORITMO_H_INCLUDED

#include "lista.h"
#include "arquivo.h"
#include "cronometro.h"

/*  Andre Viana Sena de Souza
**  Algoritmo de invasão do R2D2
*/
void QuickSort(long int* vetor, long int n);
unsigned long BuscaBinaria(long int* vetor, int elemento, unsigned long esq, unsigned long dir);
unsigned long CONTE(Lista<long int>* numeros);
bool VerificaPrimo(unsigned long numero);
unsigned long MAIORNUMEROPRIMO(unsigned long limite_superior);

Lista<unsigned long>* AlgoritmoR2D2();

#endif // ALGORITMO_H_INCLUDED
