#include "cronometro.h"

/*  Andre Viana Sena de Souza - 26/08/2014
**  PAA Projeto #1 - R2D2
*/

/** \file cronometro.cpp \brief Implementação de cronometro.h.
*/

static clock_t timer;   /**<\brief Temporizador.*/

void ComecarCronometro()
{
    timer = clock();
}

unsigned long TerminarCronometro()
{
    timer = clock() - timer;
    return (((float)timer)/CLOCKS_PER_SEC)*1000;
}
